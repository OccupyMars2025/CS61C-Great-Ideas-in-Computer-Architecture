/*
gcc -c -o warmup.o warmup.c -Wall -std=c99 -g
warmup.c: In function ‘mystery’:
warmup.c:7:25: warning: ‘sizeof’ on array function parameter ‘arr’ will return size of ‘short int *’ [-Wsizeof-array-argument]
    7 |   printf("%lu\n", sizeof(arr));
      |                         ^
warmup.c:5:20: note: declared here
    5 | void mystery(short arr[], int len) {
      |              ~~~~~~^~~~~



ure/lectures/Lecture 4: C Memory Management/code$ ./warmup 
10 5 8

 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void mystery(short arr[], int len) {
  printf("%d ", len);
  printf("%lu\n", sizeof(arr));
}

int main() {
  short nums[] = {1, 2, 3, 99, 100};
  printf("%lu ", sizeof(nums));

  mystery(nums, sizeof(nums)/sizeof(short));

  return 0;
}
