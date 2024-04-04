#include <stdio.h>

int main(){
int n1 , n2 , result , cont = 1;
char operacao;

while (cont == 1){
    printf("insira o primeiro numero: ");
    scanf("%d" , &n1);

    printf("insira qual operacao (+ , - , * , /): ");
    scanf(" %c" , &operacao);

    printf("insira o segundo numero: ");
    scanf("%d" , &n2);

    printf("VALOR DO N1: %d \n" , n1 );
    printf("VALOR DO N2: %d \n" , n2);

    switch (operacao){
        
        case '+' : result = n1 + n2;
        printf("o resultado entre %d + %d : %d\n" , n1 , n2 , result);
        break;

        case '-' : result = n1 - n2;
        printf("o resultado entre %d - %d : %d \n" , n1 , n2 , result);
        break;

        case '*' : result = n1 * n2;
        printf("o resultado entre %d * %d : %d \n" , n1 , n2 , result);
        break;

        case '/' : result = n1 / n2;
        printf("o resultado entre %d / %d : \n %d" , n1 , n2 , result);
        break;

        default: printf("Insira uma operacao valida\n");
        break;
}

    printf("Deseja fazer outra conta? 1-Sim , 2-Nao");
    scanf("%d" , &cont);

    if (cont != 1){
        return 1 ;
    }
    
}    
}


