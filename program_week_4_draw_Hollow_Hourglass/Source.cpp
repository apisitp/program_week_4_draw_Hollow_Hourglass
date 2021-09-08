#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main() {
    int input, max;
    printf("input : ");
    scanf("%d", &input);
    max = (input * 2) - 1;
    for (int x = 1; x <= max; x++)
    {
        for (int y = 1; y <= max; y++)
        {
            if (y <= input)
            {
                if (x == y || x == max - y + 1||x==1 || x == max)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                if (x == y || x == max - y + 1||x==max||x==1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}