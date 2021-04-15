/*Name         :Maria Philna Aruja
  Roll No      :CED17I028
  Question 2(b): Write a module which prints your name in log.
*/

#include <linux/module.h>    // included for all kernel modules
#include <linux/kernel.h>    // included for KERN_INFO
#include <linux/init.h>      // included for __init and __exit macros


static int __init hello_init(void)
{
    printk(KERN_INFO "Maria Philna Aruja\n");
    return 0;    
}

static void __exit hello_cleanup(void)
{
    printk(KERN_INFO "Cleaning up module.\n");
}

module_init(hello_init);
module_exit(hello_cleanup);
