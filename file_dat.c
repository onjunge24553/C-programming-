*/
muigai kelvin njunge
CT101/G/24553/24
PROGRAM:file_dat.c
9/10/2025
/*
#include<stdio.h>
int main(){
float totalmarks;
char studentsname[20];
char reg_no[16];
FILE*fptr;
fptr=fopen("results.dat","a");
if(fptr==NULL){
printf("error opening the file\n");
return 1;
}
printf("enter totalmarks\n");
scanf("%f",&totalmarks);
getchar();
printf("enter studentsname\n");
scanf("%[^\n]",studentsname);
getchar();
printf("enter reg_no\n");
scanf("%[^\n]", reg_no);
printf("totalmarks:%.2f\n",totalmarks);
printf("studentsname:%s\n",studentsname);
printf("reg_no:%s",reg_no);
fprintf(fptr,"totalmarks:%.2f\n",totalmarks);
fprintf(fptr,"studentsname:%s\n",studentsname);
fprintf(fptr,"reg_no:%s",reg_no);
fclose(fptr);
return 0;
}
