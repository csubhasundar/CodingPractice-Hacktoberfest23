#include <stdio.h>
int factorial(int);
int main(){
    int n,result;
    printf("Enter a non negative number: ");
    scanf("%d",&n);
    result = factorial(n);
    printf("The factorial of %d is %d",n,result);
    return 0;
}
int factorial(int n){
    if(n>1){
        return n*factorial(n-1);
    }
    else{
        return 1;
    }
}