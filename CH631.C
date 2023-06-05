#include<stdio.h>
#include<conio.h>

void main(){
int sum=0,i,num;
clrscr();

printf("Enter the number :");
scanf("%d",&num);

for(i=0;i<=num;i++){

sum=sum+i;

}
printf("your a nswer is : %d",sum);


getch();



}