#include<stdio.h>
# define label 10
void main(){
    int money = 10;
    switch(money, money*2){
        case label: printf("first floor.");
        break;
        case label*2: printf("second floor.");
        break;
        case label*3: printf("third floor.");
        break;
        default: printf("ground or top");
        case label*4: printf("fourth floor.");
        break;
    }

}

// 2nd program

#include<stdio.h>
void main(){
    int a[] = {1,2,3,4,5};
    printf("%d",*(++a));
}