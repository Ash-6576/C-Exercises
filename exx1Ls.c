#include <stdio.h>

int main()

{
    int a, num;
    printf("Enter the number for it's Multiplication Table\n");
    scanf("%d", &num);

    for (a = 1; a < 11; a++)
    {
        printf("%d X %d = %d\n", num, a, num * a);
    }
    return 0;
}
