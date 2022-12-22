#include <stdio.h>
#define N 5;
int stack ['N'];
int top = -1;
void push(){
    int x;
    printf("Enter the data you want to enter:");
    scanf("%d",&x);
    if(top == 'N'-1){
        printf("overflow");


    }
    else{
        top++;
        stack[top]=x;

    }
}
int main(){
    push();
    
    return 0;
}