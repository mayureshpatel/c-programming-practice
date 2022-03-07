#include <stdio.h>

int main(void)
{
    int i, j;

    printf("Enter two values separated with a comma: ");
    scanf("%d, %d", &i, &j);
    printf("%d and %d were entered.", i, j);

    return 0;
}