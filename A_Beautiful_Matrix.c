// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int n = 5;
//     int arr[n + 1][n + 1];
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     int row_of_one;
//     int col_of_one;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             // printf("%d ", arr[i][j]);
//             if (arr[i][j] == 1)
//             {
//                 row_of_one = i;
//                 col_of_one = j;
//             }
//         }
//     }
//     // printf("%d %d", row_of_one, col_of_one);
//     // structure => abs(center row - one of row) +  abs(center col - one of col)
//     int res = abs(row_of_one - 3) + abs(col_of_one - 3);
//     printf("%d", res);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 5;
    int arr[n][n ];
    for (int i =0; i < n; i++)
    {
        for (int j =0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int row_of_one;
    int col_of_one;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // printf("%d ", arr[i][j]);
            if (arr[i][j] == 1)
            {
                row_of_one = i;
                col_of_one = j;
            }
        }
    }
    // printf("%d %d", row_of_one, col_of_one);
    // structure => abs(center row - one of row) +  abs(center col - one of col)
    int res = abs(row_of_one - 2) + abs(col_of_one - 2);
    printf("%d", res);
    return 0;
}