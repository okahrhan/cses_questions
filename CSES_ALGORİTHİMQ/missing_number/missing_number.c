#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int n = atoi(argv[1]);
    int total_sum = n * (n + 1) / 2;
    int given_sum = 0;
    int i = 2;

    while(i < argc)
    {
        int num = atoi(argv[i]);
        given_sum += num;
	i++;
    } 
    int missing_number = total_sum - given_sum;
    printf("%d\n", missing_number);

    return 0;
}
