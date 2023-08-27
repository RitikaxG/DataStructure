#include<stdio.h>
int isPal(int num);
int main(){
int num;
int Palindrome;
printf("Enter a number:");
scanf("%d",&num);
Palindrome =isPal(num);
if(Palindrome==1)
printf("%d is a palindroe number\n",num);
else
printf("%d is not a palindrome number\n",num);
return 0;
}

int isPal(int num){
int rev=0,originalNum,rem;
originalNum=num;
while(num!=0){
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
return (rev==originalNum)?1:0;
}
