*/
muigai kelvin njunge,
CT101/G/24553/24,
10 OCTOBER 2025.
/*
#include<stdio.h>
int main(){
    float PI = 3.142;         // Approximation of π
    float height, radius;     // Variables for user input
    float volume, surface_area;

    printf("enter height:\n");
    scanf("%f", &height);     // Input height

    printf("enter radius:\n");
    scanf("%f", &radius);     // Input radius

    volume = PI * radius * radius * height;  // Formula for volume of a cylinder
    printf("volume: %.2f\n", volume);

    surface_area = 2 * PI * radius * radius + 2 * PI * radius * height; // Formula for total surface area
    printf("surface_area: %.2f\n", surface_area);

    return 0;
}
