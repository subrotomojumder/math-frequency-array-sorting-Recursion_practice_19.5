#include <stdio.h>

int main() {
    long long a, b, k;
    scanf("%lld %lld %lld", &a, &b, &k);

    int da = (a % k == 0);
    int db = (b % k == 0);

    if (da && db)
        printf("Both\n");
    else if (da)
        printf("Memo\n");
    else if (db)
        printf("Momo\n");
    else
        printf("No One\n");

    return 0;
}