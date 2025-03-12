/** To obtain the declaration of the function printf:
* gcc -E hello.c
* It's very long, so can save to file 'hello.i' as:
* gcc -c -save-temps hello.c
*/

#include <stdio.h>
int main() {
    printf("Hello, world!\n");
    return 0;
}
