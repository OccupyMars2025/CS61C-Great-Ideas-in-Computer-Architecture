/* 
hitecture/lectures/Lecture 4: C Memory Management/code$ ./stack_clobber 
Segmentation fault (core dumped)


stack_clobber.c: In function ‘ptr’:
stack_clobber.c:14:12: warning: function returns address of local variable [-Wreturn-local-addr]
   14 |     return &y;
      |            ^~

 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int *ptr () {
    int y;
    y = 3;
    return &y;
}

int main () {
    int *stackAddr, content;
    stackAddr = ptr();
    content = *stackAddr;
    printf("%d", content); /* 3 */
    content = *stackAddr;
    printf("%d", content); /*13451514 */
    return 0;
}
