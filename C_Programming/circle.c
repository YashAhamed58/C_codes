#include <stdio.h>
#include <math.h>
int main(){
    const float pi=3.14;

    float r=0;
    printf("Enter the radius of circle : ");
    scanf("%f",&r);

    float area=pi* pow(r,2);
    printf("The area of the circle is : %.2f\n",area);

    float circumference=2*pi*r;
    printf("The circumference of the circle is : %.2f\n",circumference);

    float surface_area=4*pi*pow(r,2);
    printf("The surface area of the sphere is : %.2f\n",surface_area);

    float volume=4/3 * pi * pow(r,3);
    printf("The volume of the sphere is : %.2f\n",volume);
    
    return 0;
}