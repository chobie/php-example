#ifndef PHP_EXAMPLE_H
#define PHP_EXAMPLE_H

#define PHP_EXAMPLE_EXTNAME "EXAMPLE"
#define PHP_EXAMPLE_EXTVER "0.1"


#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"

extern zend_module_entry example_module_entry;
#define phpext_example_ptr &example_module_entry;

#endif /* PHP_EXAMPLE_H */
