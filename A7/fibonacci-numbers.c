#include <stdio.h>

int fib_it(int n);
int fib_rec(int n);

int main()
{
    int n_fib_num = 20;
    printf("Here are the first %d fibonacci numbers!\n", n_fib_num);
    for(int i = 1; i <= n_fib_num; i++){
        printf("fib(%d) = %d \n", i, fib_it(i));
    }
    return 0;
}

int fib_it(int n){
    
    if(n <= 1) return 0;
    if(n == 2) return 1;
    
    int pre_prev = 0;
    int prev = 0;
    int sum = 1;

    for(int i = 3; i <= n; i++){
        pre_prev = prev;
        prev = sum;
        sum = prev + pre_prev;
    }
    
    return sum;
}

int fib_rec(int n){
    
    if(n == 2) return 1;
    if(n <= 1) return 0;
    
    return fib_rec(n - 2) + fib_rec(n - 1);
}