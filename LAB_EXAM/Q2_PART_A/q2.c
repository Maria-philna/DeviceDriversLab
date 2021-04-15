/*Name         :Maria Philna Aruja
  Roll No      :CED17I028
  Question 2(a):Write a module that can take an integer parameter when it is loaded with insmod command.
*/
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/stat.h>


static int myint = 420;


module_param(myint, int, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
MODULE_PARM_DESC(myint, "An integer");


static int __init q2_init(void)
{
	printk(KERN_INFO "myint is an integer: %d\n", myint);
	return 0;
}

static void __exit q2_exit(void)
{
	printk(KERN_INFO "Exiting module\n");
}

module_init(q2_init);
module_exit(q2_exit);
