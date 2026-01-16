#include <stdio.h>
int main()
{
    int i = 0;
    while (i <= 5)
    {
        if (i == 3)
            break;
        else
        {
            printf("%d\n", i);
            i++;
        }
    }
    return 0;
}