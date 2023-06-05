#include<stdio.h>
#include<conio.h>

void main(){
int n,i,fact=1;
clrscr();

printf("Enter the number :");
scanf("%d",&n);

for(i=1;i<=n;i++){
fact=fact*i;

}
printf("your answer is %d",fact);



getch();



}