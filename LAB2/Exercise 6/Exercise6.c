#include<linux/init.h>
#include<linux/module.h>
#include<linux/fs.h>
#include<linux/moduleparam.h>

int character = 1;
module_param(character, int, 0);
int file_open (struct inode *pinode, struct file *pfile) {
	printk(KERN_ALERT "File has been opened\n");
	return 0;
}

ssize_t file_read (struct file *pfile, char __user *buffer, size_t length, loff_t *offset) {
	printk(KERN_ALERT "File has been read\n");
	return 0;
}
ssize_t file_write (struct file *pfile, const char __user *buffer, size_t length, loff_t *offset) {
	printk(KERN_ALERT "File has been written\n");
	return length;
}

int file_close (struct inode *pinode, struct file *pfile) {
	printk(KERN_ALERT "File has been closed\n");
	return 0;
}

struct file_operations file_data_structure = {
	.owner = THIS_MODULE,
	.open = file_open,
	.read = file_read,
	.write = file_write, 
	.release = file_close,
};

int file_init(void) {
	register_chrdev(50, "Device Driver", &file_data_structure);
	printk(KERN_ALERT "Passed value : %d \n", character);
	printk(KERN_ALERT "Initial function\n");
	return 0;
}

void file_exit(void) {
	unregister_chrdev(50, "Device Driver");
	printk(KERN_ALERT "Exit function");
}

module_init(file_init);
module_exit(file_exit);