#include <stdio.h>
#include <stdint.h>


void increment_ptr(int32_t **h) { 
    *h = *h + 1; 
}


int main(int argc, char const *argv[])
{
    // int32_t arr[3] = {50, 60, 70};
    // int32_t *q = arr;
    // printf("*q is %d, q=%p\n", *q, q);
    // increment_ptr(&q);
    // printf("*q is %d, q=%p\n", *q, q);


    // int ARRAY_SIZE = 10;
    // int i, a[ARRAY_SIZE];
    // for(i = 0; i < ARRAY_SIZE; i++){
    //     a[i] = i;
    //     printf("a[%d] is %d\n", i, a[i]);
    // }


    int *p, *q, x;
    int a[4];
    p = &x;
    q = a + 1;
    *p = 1;
    printf("*p:%d, p:%p, &p:%p\n", *p, p, &p); // %d: signed decimal, %x: hex
    *q = 2;
    printf("*q:%d, q:%p, &q:%p\n", *q, q, &q);
    *a = 3;
    printf("*a:%d, a:%p, &a:%p\n", *a, a, &a);

    p = a;
    printf("sizeof(p):%lu, sizeof(a):%lu\n", sizeof(p), sizeof(a));

    return 0;
}
