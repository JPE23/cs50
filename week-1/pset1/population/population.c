#include <cs50.h>
#include <stdio.h>

int n;
int endSize;
int years;
int gain;
int lose;
int newPopulation;

int main(void)
{
    // Get start size
    do{
        n = get_int("Start Size: ");
    } while (n < 9);

    // Get end size
    do{
        endSize = get_int("End Size: ");
    } while (endSize < n);


    for (int i = 0; i < n; i++){

    //Number of new llamas
    gain = n/3;

    //Number of llamas died
    lose = n/4;

    if(n == endSize){
        printf("Years: %i\n", years);
        return 0;
    }

    newPopulation = n + gain - lose;
    years++;
    n = newPopulation;
    printf("Population: %i\n", n);

        if(newPopulation >= endSize){
            printf("Years: %i\n", years);
            return 0;
        }
    }
}