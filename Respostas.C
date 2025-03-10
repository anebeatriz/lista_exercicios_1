Escreva um programa que imprima os números de 1 a 10 usando um loop while.

#include <stdio.h>

int main() {
    int i = 1;
    
    while(i<=10){
        printf("%d \n" , i);
        i++;
    }

    return 0;
}

------------------------------------------------
 Crie um programa que solicite um número ao usuário e imprima se ele é positivo, negativo ou zero.

#include <stdio.h>

int main() {
    int a;
    printf("Digite um número: ");
    scanf("%d" , &a);
    
    if(a < 0){
        printf("O número é negativo");
    } else if(a > 0){
        printf("O número é positivo");
    }
    else{
        printf("O número é 0");
    }

    return 0;
}

------------------------------------------------
Faça um programa que conte de 0 a 20, mas só imprima os números pares.

#include <stdio.h>

int main() {
    int n = 0;
    
    while(n <= 20 && n >= 0){
        if(n % 2 == 0){
            printf(" %d \n" , n);
        }
        n = n + 1;
    }

    return 0;
}

------------------------------------------------
 Escreva um programa que peça ao usuário para adivinhar um número e informe se o palpite está correto.

#include <stdio.h>

int main(){
    int n = 10;
    int resp;
    printf("Advinhe o número de 0 a 50: ");
    scanf("%d" , &resp);
    
    if(resp != n){
        printf("Você errou o número :(");
    }
    else{
        printf("Você acertou o número!");
    }
    
    return 0;
}

------------------------------------------------
 Crie um programa que imprima os números de 10 a 1 em ordem decrescente.

#include <stdio.h>

int main(){
    int n = 10;
    
    while(n > 0){
        printf("%d \n" , n);
        n = n-1;
    }
    
    return 0;
}

------------------------------------------------
Faça um programa que calcule a soma dos números de 1 a 50 usando um loop while.
