Small project that shows that clang is incapable of unique (unlike weak!) symbols for template static variables.

    $ make && nm -C libd.so | grep value && rm *.so
    0000000000201030 u TSingleton<BBB>::value   // gcc produces unique symbol

But:

    $ CXX=clang++ make && nm -C libd.so | grep value && rm *.so
    0000000000201030 V TSingleton<BBB>::value   // clang produces weak symbol

Weak symbols (unlike unique) are able to duplicate in runtime when dlopen is involved. Unique are guaranteed not to duplicate
