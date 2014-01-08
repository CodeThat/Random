/* This is really useful <CodeThat> */

/* start.c
* Copyright (C) 1999 by Ori Pomerantz
*
* "Hello, world" - the kernel module version.
* This file includes just the start routine
*/
/* The necessary header files */
/* Standard in kernel modules */
#include <linux/kernel.h> /* We’re doing kernel work */
#include <linux/module.h> /* Specifically, a module */
/* Deal with CONFIG_MODVERSIONS */
#if CONFIG_MODVERSIONS==1
#define MODVERSIONS
#include <linux/modversions.h>
#endif
/* Initialize the module */
int init_module()
{
printk("Hello, world - this is the kernel speaking\n");
/* If we return a non zero value, it means that
* init_module failed and the kernel module
* can’t be loaded */
return 0;



/* stop.c
* Copyright (C) 1999 by Ori Pomerantz
*
* "Hello, world" - the kernel module version. This
* file includes just the stop routine.
*/
/* The necessary header files */
/* Standard in kernel modules */
#include <linux/kernel.h> /* We’re doing kernel work */
#define __NO_VERSION__ /* This isn’t "the" file
* of the kernel module */
#include <linux/module.h> /* Specifically, a module */
#include <linux/version.h> /* Not included by
* module.h because
* of the __NO_VERSION__ */
/* Deal with CONFIG_MODVERSIONS */
#if CONFIG_MODVERSIONS==1
#define MODVERSIONS
#include <linux/modversions.h>
#endif
