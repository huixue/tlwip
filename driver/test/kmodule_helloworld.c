#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

int k_init_module(void)
{
  printk(KERN_INFO "Hello world 1.\n");
  return 0;
}

void k_cleanup_module(void)
{
  printk(KERN_INFO "Goodbye world 1.\n");
}

module_init(k_init_module);
module_exit(k_cleanup_module);
