/*
Muigai kelvin njunge,
CT101/G/24553/24,
11 OCTOBER 2025.
*/
#include <stdio.h>
int main(){
int attendance;
int marks;
printf("enter your marks:\n");
scanf("%d",&marks);
printf("enter your attendance(%):\n");
scanf("%d",&attendance);
if(marks>=40&&attendance>=70)
printf("eligible\n");
else{printf("not eligible\n");}
return 0;
}

