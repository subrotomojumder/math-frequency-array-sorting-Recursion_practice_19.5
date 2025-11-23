#include <stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int min_element = a[0];
    for (int i = 0; i < n; i++)
    {
        if (min_element > a[i]) min_element = a[i];
    }
    int freq[200001] = {0};
    int OFFSET = 100000;
    for (int i = 0; i < n; i++)
    {
        freq[a[i] + OFFSET]++;
    }
    if (freq[min_element + OFFSET] % 2 != 0)
    {
        printf("Lucky");
    }
    else
    {
        printf("Unlucky");
    }

    return 0;
}