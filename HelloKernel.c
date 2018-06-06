/* Jeremy Higgins
   ECE 373
   Instructors PJ Waskiewicz Jr. and Shannon Nelson
   Higgins, Jeremy
   Assignment #1.D - Hello Kernel
   
   The purpose of this program is to write a basic Linux Kernel Module. 
*/

/* Include required libraries. */
#include <linux/init.h>    /* Required for __init() function. */
#include <linux/module.h>  /* Required for module() functions. */

/* State the Module License. */
MODULE_LICENSE("GPL");

/* Kernel initialization. */
static int __init hello_init(void){
  printk(KERN_INFO "Hello, Kernel.\n");
  return(0);
} /* hello_init() ends. */

static void __exit hello_exit(void){
  printk(KERN_INFO "Goodbye, Kernel.\n");
  return(0);
} /* hello_exit() ends. */

/* Execute Module. */
module_init(hello_init);

/* Exit Module. */
module_exit(hello_exit);
