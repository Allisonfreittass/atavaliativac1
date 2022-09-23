#include <stdio.h>

int main()
{
    int t = 0;
    printf("\nQual tabuada que você deseja ? \n\t\t\t\n");
    scanf("%i", &t);

    for(int x = 1; x<=10; ++x){
        //1 x 5 = 5
        printf("%ix%i = %i\n", x, t, x * t);
    }

    return 0;
}