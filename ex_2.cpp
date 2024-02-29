#include <stdio.h>
int i_ano;

int main() {
    printf("Insira o ano: \n");
    scanf("%d", &i_ano);

    if(!(i_ano % 4)){
        if(!(i_ano % 100)){
            if(!(i_ano % 400)){
                printf("O ano é bissexto.\n");
            } else printf("O ano não é bissexto.\n");
        } else printf("O ano é bissexto.\n");
    } else printf("O ano não é bissexto.\n");

    return 0;
}
