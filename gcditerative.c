
#include<stdio.h>
int r;

void main(){
int m,n,r;
printf("Enter 2 non-negative integers\n");
scanf("%d %d",&m,&n);
printf("GCD of %d and %d is = %d",m,n,gcd(m,n));
}
int gcd(int m,int n){
do{
r=m%n;
m=n;
n=r;
return m;
}while(n!=0);
}
