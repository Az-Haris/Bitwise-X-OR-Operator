#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num1, num2;
    printf("Enter 2 Decimal Number : ");
    scanf("%d%d", &num1,&num2);
    printf("%d & %d Bitwise X-OR is = %d", num1, num2, num1^num2);
    getch();
    return 0;
}
