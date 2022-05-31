#include <stdio.h>

int main () {

   int  var = 20;   /* actual variable declaration */
   int  *ip;        /* pointer variable declaration */

   ip = &var;  /* store address of var in pointer variable*/

   printf("Address of var variable: %x\n", &var  );

   /* address stored in pointer variable */
   printf("Address stored in ip variable: %x\n", ip );

   /* access the value using the pointer */
   printf("Value of *ip variable: %d\n", *ip );

   return 0;
}
~/19ECB132-2$ gcc pointer.c
pointer.c: In function ‘main’:
pointer.c:10:38: warning: format ‘%x’ expects argument of type ‘unsigned int’, but argument 2 has type ‘int *’ [-Wformat=]
    printf("Address of var variable: %x\n", &var  );
                                     ~^     ~~~~
                                     %ls
pointer.c:13:44: warning: format ‘%x’ expects argument of type ‘unsigned int’, but argument 2 has type ‘int *’ [-Wformat=]
    printf("Address stored in ip variable: %x\n", ip );
                                           ~^
                                           %ls
~/19ECB132-2$ ./a.out
Address of var variable: 64aff5fc
Address stored in ip variable: 64aff5fc
Value of *ip variable: 20
~/19ECB132-2$ ./a.out
Address of var variable: 6c46613c
Address stored in ip variable: 6c46613c
Value of *ip variable: 20