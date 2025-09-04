#include <stdio.h>

int main() {
    int a=3,b=2,c;
    a=a==b==0;
    // Write C code here
    switch(1){
        case 1:
        a=a+10;
        break;
        default:
        break;
    }
    c=sizeof(a++);
    printf("%d\n",a);

    return 0;
}


// 2nd program
#include<stdio.h>
 #define z 2^5
 
 void main(){
     int students;
     students = z*z+z;
     printf("%d",students);
 }
