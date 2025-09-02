#include<stdio.h>

void main() {
    
    int x=5,y=11,z=0;

    z=x&y;
    printf("AND-z:%d", z);

     z=x|y;
    printf("OR-z:%d", z);

     z=x^y;
    printf("XOR-z:%d", z);

    // getchar(); no need in modern compilers
}
