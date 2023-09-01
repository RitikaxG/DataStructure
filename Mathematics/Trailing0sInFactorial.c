#include<stdio.h>
//int TrailingZeros(int n);
int countTrailingZeros(int n);
int main(){
int num,count=0;
printf("Enter a number:");
scanf("%d",&num);
//int zeros=TrailingZeros(num);
int zeros=countTrailingZeros(num);
printf("Trailing Zeros in %d! is %d\n",num,zeros);
return 0;
}

//Time Complexity: theta(n)
//This solution has overflow issues
int TrailingZeros(int num){
int fact =1;
for(int i=2;i<=num;i++)
fact=fact*i;

int count=0;
while(fact%10==0){
count++;
fact=fact/10;
}
return count;
}

//Efficient Method: count how many 2's & 5's pair we have in factorial, since it together form a trailing zero 
//Since no. of 5's is going to be less than 2's we count 5's
//Trailing zero count= floor(n/5) + floor(n/25) + floor(n/125)+...
//Time Complexity: 5^k <= n => k<= log n to the base 5 = theta(log n)
int countTrailingZeros(int n){
int result=0;
for(int i=5;i<=n;i=i*5)
result=result + n/i;
return result;
}
