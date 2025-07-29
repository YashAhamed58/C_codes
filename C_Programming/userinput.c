#include <stdio.h>
#include <string.h> //provides a lot of useful function related to working with strings

int main(){
    int age = 0;
    float cgpa = 0.0f;
    char grade = '\0'; // \0 is a null terminator
    char name[30] = "";

    printf("Enter your age : ");
    scanf("%d", &age); //& is the adress of the operator

    printf("Enter your cgpa : ");
    scanf("%f", &cgpa);

    printf("Enter your grade : ");
    scanf(" %c", &grade); //there is a space before % to clear out the new line character within the input buffer

    getchar(); //function for input buffer problem in new line (for string variables)
    printf("Enter your name : ");
    fgets(name, sizeof(name), stdin); //fgets = file gets string, stdin = standard input
    name[strlen(name)-1] = '\0'; // the fgets function reads a whole line so when i hit enter key it reads that too , to prevent it from going to a new line this part is needed(the last character is changed into a null terminator)

    printf("%s\n",name);
    printf("%d\n",age);
    printf("%.1f\n",cgpa);
    printf("%c\n",grade);
    
    return 0;
}