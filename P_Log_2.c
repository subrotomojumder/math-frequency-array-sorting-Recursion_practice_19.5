#include<stdio.h>
int log2(long long n){
    if (n == 1)
    {
       return 0;
    }
    long long last_ret = log2(n / 2);
    return last_ret + 1;
}
int main(){
    long long n;
    scanf("%lld", &n);
    printf("%d", log2(n));
    return 0;
}