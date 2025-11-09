/*
muigai kelvin njunge
CT101/G/24553/24
PROGRAM:file_sales.txt
9/10/2025
*/
#include<stdio.h>
int main(){
float amount_of_a_single_transaction;
float totalsales=0.0;
FILE*fptr;
fptr=fopen("sales.txt","a");
if(fptr==NULL){
printf("error in opening the file\n");
return 1;
}
printf("enter amount_of_a_single_transaction\n");
scanf("%f",&amount_of_a_single_transaction);
printf("amount_of_a_single_transaction:%.2f\n",amount_of_a_single_transaction);
fprintf(fptr,"amount_of_a_single_transaction:%.2f\n",amount_of_a_single_transaction);
totalsales+=amount_of_a_single_transaction;
printf("totalsales:%.2f\n",totalsales);
fprintf(fptr,"totalsales:%.2f\n",totalsales);
fclose(fptr);
return 0;
}
