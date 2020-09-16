gcc test.c -o test -fno-stack-protector
objdump -t test | grep .data
readelf -S test | grep .data
(gdb) file test
(gdb) r <<< $(python exploit.py)