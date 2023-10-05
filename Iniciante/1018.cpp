#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, aux, inicial;
    int n100=0, n50=0, n20=0, n10=0, n5=0, n2=0, n1=0;

    scanf("%d", &n);

    inicial = n;

    // 100
    aux = n % 100;
    n100 = n/100; 

    // 50
    n = aux;
    aux = n % 50;
    n50 = n/50;

    //20
    n = aux;
    aux = n % 20;
    n20 = n/20;

    //10
    n = aux;
    aux = n % 10;
    n10 = n/10;

    //5
    n = aux;
    aux = n % 5;
    n5 = n/5;

    //2
    n = aux;
    aux = n % 2;
    n2 = n/2;

    n1 = aux;

    printf("%i\n", inicial);
    printf("%i %s\n", n100, "nota(s) de R$ 100,00");
    printf("%i %s\n", n50, "nota(s) de R$ 50,00");
    printf("%i %s\n", n20, "nota(s) de R$ 20,00");
    printf("%i %s\n", n10, "nota(s) de R$ 10,00");
    printf("%i %s\n", n5, "nota(s) de R$ 5,00");
    printf("%i %s\n", n2, "nota(s) de R$ 2,00");
    printf("%i %s\n", n1, "nota(s) de R$ 1,00");

    return 0;

}

