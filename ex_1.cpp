#include <stdio.h>
float f_peso;
float f_altura;
float f_imc = 0.0;

int main() {
    printf("Insira seu peso, em kilogramas: \n");
    scanf("%f", &f_peso);
    printf("Insira sua altura, em metros: \n");
    scanf("%f", &f_altura);
    f_imc = f_peso / (f_altura * f_altura);

    if(f_imc < 17){
        printf("O seu IMC é %f e ele se enquadra na categoria \"muito abaixo do peso\".\n", f_imc);
    } else if(f_imc >= 17 and f_imc < 18.5){
        printf("O seu IMC é %f e ele se enquadra na categoria \"abaixo do peso\".\n", f_imc);
    } else if(f_imc >= 18.5 and f_imc < 25){
        printf("O seu IMC é %f e ele se enquadra na categoria \"peso normal\".\n", f_imc);
    } else if(f_imc >= 25 and f_imc < 30){
        printf("O seu IMC é %f e ele se enquadra na categoria \"acima do peso\".\n", f_imc);
    } else if(f_imc >= 30 and f_imc < 35){
        printf("O seu IMC é %f e ele se enquadra na categoria \"obesidade\".\n", f_imc);
    } else if(f_imc >= 35 and f_imc < 40){
        printf("O seu IMC é %f e ele se enquadra na categoria \"obesidade severa\".\n", f_imc);
    } else if(f_imc >= 40){
        printf("O seu IMC é %f e ele se enquadra na categoria \"obesidade mórbida\".\n", f_imc);
    }

    return 0;
}
