#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float n, aux, inicial, aux2;
    int n100=0, n50=0, n20=0, n10=0, n5=0, n2=0, n1=0;
    int m1=0, m50=0, m25=0, m10=0, m05=0, m1cent=0;

    scanf("%f", &n);

    //100
    while (n >= 100.0) {

        n100++;
        n = n - 100.0;
    }

    while (n >= 50.0) {

        n50++;
        n = n - 50.0;
    }

    while (n >= 20.0) {

        n20++;
        n = n - 20.0;
    }

    while (n >= 10.0) {

        n10++;
        n = n - 10.0;
    }

    while (n >= 5.0) {

        n5++;
        n = n - 5.0;
    }

    while (n >= 2.0) {

        n2++;
        n = n - 2.0;
    }

    while (n >= 1.0) {

        m1++;
        n = n - 1.0;
    }

    while (n >= 0.50) {

        m50++;
        n = n - 0.50;
    }
    
    while (n >= 0.25) {

        m25++;
        n = n - 0.25;
    }

    while (n >= 0.10) {

        m10++;
        n = n - 0.10;
    }

    while (n >= 0.05) {

        m05++;
        n = n - 0.05;
    }

    

    while (n >= 0.0059) {
        m1cent++;
        n = n - 0.01;
    }



    printf("%s\n", "NOTAS:");
    printf("%i %s\n", n100, "nota(s) de R$ 100.00");
    printf("%d %s\n", n50, "nota(s) de R$ 50.00");
    printf("%d %s\n", n20, "nota(s) de R$ 20.00");
    printf("%d %s\n", n10, "nota(s) de R$ 10.00");
    printf("%d %s\n", n5, "nota(s) de R$ 5.00");
    printf("%d %s\n", n2, "nota(s) de R$ 2.00");

    printf("%s\n", "MOEDAS:");
    printf("%i %s\n", m1, "moeda(s) de R$ 1.00");
    printf("%d %s\n", m50, "moeda(s) de R$ 0.50");
    printf("%d %s\n", m25, "moeda(s) de R$ 0.25");
    printf("%d %s\n", m10, "moeda(s) de R$ 0.10");
    printf("%d %s\n", m05, "moeda(s) de R$ 0.05");
    printf("%d %s\n", m1cent, "moeda(s) de R$ 0.01");

    return 0;

}

