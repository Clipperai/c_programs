#include<stdio.h>
void main(){

    do{
        int a= 20;
        printf("%d",a);
        a++;
        if(a>24)
        break;
    }while(1);
}


// 2nd program

#include<stdio.h>
void main() {
    int i[3] = {1,4,0};
    while(i[1]==i[3]){
        if(i[3])
        printf("While Loop");
        else
        break;
    }
}