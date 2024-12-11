/*
https://stackoverflow.com/questions/4306186/structure-padding-and-packing
*/


#include <stdio.h>
#include <stdint.h>

struct mystruct_A
{
   char a;
//    int64_t b;
   int32_t b;
   char c;
} x;

struct mystruct_B
{
//    int32_t a;
    int64_t a;
    char b;
    char c;
    char d;
    int16_t e;
} y;

struct foo {
    int32_t a;
    char b;
    struct foo *c;

    // int32_t a;
    // struct foo *c;
    // char b;
} z;



int main(int argc, char const *argv[]) {

    printf("sizeof(x): %lu\n", sizeof(x));
    printf("sizeof(mystruct_A): %lu\n", sizeof(struct mystruct_A));
    printf("address of x: %p\n", &x);
    printf("address of x.a: %p\n", &(x.a));
    printf("address of x.b: %p\n", &(x.b));
    printf("address of x.c: %p\n", &(x.c));
    printf("\n\n\n");


    printf("sizeof(y): %lu\n", sizeof(y));
    printf("sizeof(mystruct_B): %lu\n", sizeof(struct mystruct_B));
    printf("address of y: %p\n", &y);
    printf("address of y.a: %p\n", &(y.a));
    printf("address of y.b: %p\n", &(y.b));
    printf("address of y.c: %p\n", &(y.c));
    printf("address of y.d: %p\n", &(y.d));
    printf("address of y.e: %p\n", &(y.e));
    printf("\n\n\n");



    printf("sizeof(z): %lu\n", sizeof(z));
    printf("sizeof(struct foo): %lu\n", sizeof(struct foo));
    printf("address of z: %p\n", &z);
    printf("address of z.a: %p\n", &(z.a));
    printf("address of z.b: %p\n", &(z.b));
    printf("address of z.c: %p\n", &(z.c));
    printf("\n\n\n");
    return 0;
}
