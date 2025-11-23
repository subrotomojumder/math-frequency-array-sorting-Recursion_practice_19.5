#include<stdio.h>
int fun(int *a, int n){
    if (n == 0)
    {
       return a[0];
    }
    int max = fun(a, n  - 1);
    if (a[n -1] > max) max= a[n -1];
    return max;
}
int main(){
     int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%d", fun(a, n));
    return 0;
}