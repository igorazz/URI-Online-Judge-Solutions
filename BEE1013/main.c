#include <stdio.h>
#include <math.h>

int maior_entre_dois(int x, int y) {
    return (x + y + abs(x - y)) / 2;
}

int main() {
    int a, b, c, maior;

    scanf("%d %d %d", &a, &b, &c);

    maior = maior_entre_dois(a, b);
    maior = maior_entre_dois(maior, c);

    printf("%d eh o maior\n", maior);

    return 0;
}
