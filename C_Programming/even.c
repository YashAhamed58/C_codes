#include <stdio.h>
int main(){
    int a=0;
    printf("Enter the number to check whether it is even or odd : ");
    scanf("%d",&a);
    if (a%2==0){
        printf("The number %d is even",a);
    }
    else{
        printf("The number %d is odd",a);
    }
    return 0;
}