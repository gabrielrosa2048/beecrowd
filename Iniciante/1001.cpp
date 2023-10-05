#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n1, n2;

    scanf("%d", &n1);
    scanf("%d", &n2);

    int sum = n1 + n2;

    printf("%s %d\n", "X =", sum);
    cout << endl;

    return 0;
}

