#include<stdio.h>
//int LCM(int a,int b);
int GCD(int a,int b);
int LCMPro(int a,int b);
int main(){
int a,b;
printf("Enter 1st number:");
scanf("%d",&a);
printf("Enter 2nd number:");
scanf("%d",&b);
int lcm=LCMPro(a,b);
printf("LCM of %d and %d is %d\n",a,b,lcm);
return 0;
}

//Naive Solution
//Time Complexity: O(a*b-max(a,b))
int LCM(int a,int b){
int result=(a>b)?a:b;
while(1)
{
if(result%a==0&&result%b==0)
break;
result++;
}
return result;
}

//Efficient Solution
//Based on formula : a*b = gcd(a,b) + lcm(a,b)
//Time Complexity: O(log(min(a,b))
int GCD(int a,int b) {
if(b==0)
return a;
else
return GCD(b,a%b);
}

int LCMPro(int a,int b){
return (a*b/GCD(a,b));
}
