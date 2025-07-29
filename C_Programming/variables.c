#include <stdio.h>   //standard input output (header file)
#include <stdbool.h> //for boolean (full form is standard boolean)

int main(){
    int age=18;
    int year=2025;
    float cgpa=18.5;
    float temp=-10.65;
    double pi=3.14159265359;
    char grade='A';
    char name[]="Yash";
    bool isOnline=true; //true is 1 ,flase is 0

    printf("You are %d years old\n",age);
    printf("The year is %d\n",year);
    printf("Your cgpa is %.1f\n",cgpa); //%.1f the .1 is how many integers after the decimal

    //to add a degree symbol hold alt+0176
    printf("The temperature is %f°C\n",temp);
    
    printf("The value of pi is %.15lf\n",pi); //lf full form is long float

    printf("Your grade is %c\n",grade);
    printf("My name is %s\n",name);

    printf("%d\n",isOnline);

    if (isOnline){
        printf("Player is ONLINE");
    }
    else{
        printf("Player is OFFLINE");
    }


    return 0;
}