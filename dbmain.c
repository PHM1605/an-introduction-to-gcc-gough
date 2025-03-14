#include <stdio.h>
#include <gdbm.h>

//gcc -Wall dbmain.c -o dbmain -lgdbm
int main(void) {
    GDBM_FILE dbf;
    datum key = {"testkey", 7}; // key-string, length of 7 chars
    datum value = {"testvalue", 9}; // value-string, length of 9 chars
    printf("Storing key-value pair...");
    dbf = gdbm_open("test", 0, GDBM_NEWDB, 0644, 0);
    gdbm_store(dbf, key, value, GDBM_INSERT);
    gdbm_close(dbf);
    printf("done.\n");
    return 0;
}