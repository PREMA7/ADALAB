#include<stdio.h>
int fib(int n){
    if(n<=1)
        return n;
    else
        return fib(n-2)+fib(n-1);
}
void main(){
int n;
printf("enter the an integer value:\n");
scanf("%d",&n);
for(int i=0;i<n;i++){
    printf("fib(%d)=%d\n",i,fib(i));
}
}
