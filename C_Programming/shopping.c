#include <stdio.h>
#include <string.h>
int main(){
    char item[50]="";
    float price=0.0f;
    int quantity=0;
    char currency='$';
    float total=0.0f;

    printf("What item would you like to buy : ");
    fgets(item,sizeof(item),stdin);
    item[strlen(item)-1] = '\0';

    printf("What is the price of that item : ");
    scanf(" %f",&price);

    printf("How many do you want : ");
    scanf(" %d",&quantity);

    total=price*quantity;
    printf("Your total of %d %s/s is: %c%.2f",quantity,item,currency,total);

    return 0;
}