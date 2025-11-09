*/
muigai kelvin njunge
CT101/G/24553/24
Program:file borrowed books.txt
9 November 2025/*
#include<stdio.h>
int main(){
char book_title[10];
FILE*fptr;
fptr=fopen("borrowed_books.txt","a");
if(fptr==NULL){
printf("error opening file\n");
return 1;
}
printf("enter book_title\n");
scanf("%s", book_title);
fprintf(fptr,"%s\n",book_title);
if(fprintf(fptr,"%s\n",book_title)>0){
printf("book successfully stored:%s\n",book_title);}
else{
printf("book not successfully stored\n");}
fclose(fptr);
return 0;
}
