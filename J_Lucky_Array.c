#include <stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int min_element = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (min_element > a[i])
        {
            min_element = a[i];
        }
    }
    int freq[100000] = {0};
    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }
    // printf("%d -> %d", min_element , freq[min_element]);
    if (freq[min_element] % 2 == 0)
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }

    return 0;
}