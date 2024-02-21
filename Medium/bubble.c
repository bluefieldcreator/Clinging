#include <stdio.h>

int main()
{
    int sort[] = {5, 3, 2, 1, 4};
    int n = sizeof(sort) / sizeof(sort[0]);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (sort[j] > sort[j + 1])
            {
                int temp = sort[j];
                sort[j] = sort[j + 1];
                sort[j + 1] = temp;
            }
        }
    }
}