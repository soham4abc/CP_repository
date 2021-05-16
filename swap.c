#include <stdio.h>

int main() {
    int i = 69;
    int k = 108;
    printf(" value of i=%d k=%d before swapping", i, k);

    i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    printf("value of i=%d k=%d after swapping", i, k);

    return 0;
}