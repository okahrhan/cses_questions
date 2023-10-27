#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

    int n = atoi(argv[1]);

    while (n != 1)
    {
        printf("%d ", n);  
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = 3 * n + 1;
        }
    }

    printf("1\n");  

    return 0;
}
