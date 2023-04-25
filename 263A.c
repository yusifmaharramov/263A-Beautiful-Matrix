//  Solution for a beginner-level problem from codeforces.com called 263A or Beatiful Matrix

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int matrix[6][6];
    int result, i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            scanf_s("%d", &matrix[i][j]);
        }
    }
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (matrix[i][j] == 1)
            {
                result = abs(i - 3) + abs(j - 3);
                printf("%d", result);
            }
        }
        return 0;
    }