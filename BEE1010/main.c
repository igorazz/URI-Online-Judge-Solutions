#include <stdio.h>
#include <stdlib.h>

int main () {

    int codigo1;
    int peca1;
    float valor_peca1;

    int codigo2;
    int peca2;
    float valor_peca2;

    scanf("%d %d %f", &codigo1, &peca1, &valor_peca1);
    scanf("%d %d %f", &codigo2, &peca2, &valor_peca2);

    printf("VALOR A PAGAR: R$ %.2f\n",(peca1*valor_peca1)+(peca2*valor_peca2));
	
	return 0;
}