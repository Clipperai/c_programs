#include<stdio.h>
 void main() {
    int x=10,y=2,z;
    for(z=0;z<x;){
        z=z++ + y;
        printf("%d",z);
    }
 }