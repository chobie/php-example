#include "php_example.h"

PHP_MINIT_FUNCTION(EXAMPLE)
{
	fprintf(stderr, "MINIT");
	return SUCCESS;
}

PHP_MSHTUDOWN_FUNCTION(EXAMPLE)
{
	fprintf(stderr, "MSHUTDOWN");
	return SUCCESS;
}

PHP_MINFO_FUNCTION(EXAMPLE)
{
}

zend_module_entry EXAMPLE_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
    STANDARD_MODULE_HEADER,
#endif
    PHP_EXAMPLE_EXTNAME,
    NULL, 					/* Functions */
    PHP_MINIT(EXAMPLE),	    /* MINIT */
    NULL, 	                /* MSHUTDOWN */
    NULL, 	                /* RINIT */
    NULL,	                /* RSHUTDOWN */
    PHP_MINFO(EXAMPLE),	    /* MINFO */
#if ZEND_MODULE_API_NO >= 20010901
    PHP_EXAMPLE_EXTVER,
#endif
    STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_EXAMPLE
ZEND_GET_MODULE(EXAMPLE)
#endif
