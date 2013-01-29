#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init e1000_init(void)
{
  printk(KERN_INFO "[hx] e1000_init()");
  return 0;
}

static void __exit e1000_exit(void)
{
  printk(KERN_INFO "[hx] e1000_exit()");
}

module_init(e1000_init);
module_exit(e1000_exit);
