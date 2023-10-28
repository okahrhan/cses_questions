#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int a = 0, c = 0, g = 0, t = 0;
    int i = 1;

    while (i < argc) {
        if (argv[i][0] == 'A') 
	{
            a++;
        } 
	else if (argv[i][0] == 'C')
	{
            c++;
        }
	else if (argv[i][0] == 'G')
	{
            g++;
	}
	else if (argv[i][0] == 'T')
	{
            t++;
        }
        i++;
    }
    int max = a;
    if (c > max)
    {
        max = c;
    }
    if (g > max)
    {
        max = g;
    }
    if (t > max)
    {
        max = t;
    }
    printf("A=%d, C=%d, G=%d, T=%d\n", a, c, g, t);
    printf("%d\n", max);

    return 0;
}
