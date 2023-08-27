#include<stdio.h>
int countDigits(int num);
int main(){
int num,countDigit;
printf("Enter a number:");
scanf("%d",&num);
countDigit=countDigits(num);
printf("No of digits in %d is %d\n",num,countDigit);
return 0;
}
int countDigits(int num){
int count=0;
while(num!=0){
num=num/10;
count++;
}
return count;
}
