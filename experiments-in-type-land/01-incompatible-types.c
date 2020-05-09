#include <stdio.h>

/* 

Illustration of some of the semi-weak type characteristics of c

Compiler warnings from version with printf("%s\n", i);

cc temp.c 
temp.c:5:7: warning: incompatible pointer to integer conversion assigning to 'int' from 'char [13]' [-Wint-conversion]
    i = "Hello world!";
      ^ ~~~~~~~~~~~~~~
temp.c:6:20: warning: format specifies type 'char *' but the argument has type 'int' [-Wformat]
    printf("%s\n", i);
            ~~     ^
            %d
2 warnings generated.

*/

int main(){
    int i;
    i = "Hello world!";
    printf("%s\n", i); /* This will result in a segmentation fault */
    // printf("%d\n", i); /* This will print the address of "Hello world!" */
    return i;
}
