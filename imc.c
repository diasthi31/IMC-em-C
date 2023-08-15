#include<stdio.h>

int main() {
    double massa, altura, imc;

    printf("Digite sua massa em [KG]: ");
    scanf("%lf", &massa);

    printf("Digite sua altura em [M]: ");
    scanf("%lf", &altura);

    imc = massa / (altura * altura);

    if (imc >= 18.5 && imc <= 25)
    printf("Seu IMC é %.2lf, você está no seu peso ideal!\n", imc);
      else
      printf("Seu IMC é %.2lf, você está acima do peso ideal!\n", imc);

    return 0;
}