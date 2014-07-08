PHP_ARG_ENABLE(example,
  [Whether to enable the "example" extension]
  [  --enable-example      Enable "example" extension support])

if test $PHP_EXAMPLE != "no"; then
  PHP_NEW_EXTENSION(example, example.c, $ext_shared)
  PHP_SUBST(EXAMPLE_SHARED_LIBADD)
fi
