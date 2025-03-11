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

------------------------------------------------------------------------------------------------------------------------------------------------
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

------------------------------------------------------------------------------------------------------------------------------------------------
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

------------------------------------------------------------------------------------------------------------------------------------------------
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

------------------------------------------------------------------------------------------------------------------------------------------------
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

------------------------------------------------------------------------------------------------------------------------------------------------
Faça um programa que calcule a soma dos números de 1 a 50 usando um loop while.

#include <stdio.h>

int main() {
    int soma = 0;
    int n = 1;
    
    while(n <= 50){
        soma = soma + n;
        n++;
        printf("a soma vale %d \n" , soma);
    }

    return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------
Escreva um programa que solicite a idade do usuário e informe se ele é uma criança, adolescente, adulto ou idoso.

#include <stdio.h>

int main() {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d" , &idade);
    
    if(idade < 12){
        printf("Você é uma criança!");
    }else if(idade < 18){
        printf("Você é um adolescente!");
    }else if(idade < 60){
        printf("Você é um adulto!");
    }else{
        printf("Você é um idoso!");
    }

    return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------
Crie um programa que conte de 1 a 100, mas só imprima os números divisíveis por 7.

#include <stdio.h>

int main() {
    int n = 0;
    
    while(n <= 100 && n >= 0){
        if(n % 7 == 0){
            printf(" %d \n" , n);
        }
        n = n + 1;
    }

    return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------
Faça um programa que peça dois números ao usuário e imprima o maior deles.

#include <stdio.h>

int main() {
    int a;
    int b;
    printf("Digite o primeiro número: ");
    scanf(" %d", &a);
    printf("Digite o segundo número: ");
    scanf(" %d" , &b);
    
    if(a < b){
        printf(" %d é o maior número", b);
    }else{
        printf(" %d é o maior número", a);
    }

    return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------
Crie um programa que peça um número ao usuário e imprima se é ímpar ou par.

#include <stdio.h>

int main() {
    int n;
    printf("Escreva um número: ");
    scanf("%d" , &n);
    
    if(n % 2 == 0){
        printf("Esse número é par!");
    }else{
        printf("Esse número é ímpar!");
    }

    return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------
Faça um programa que conte de 1 a 30, mas pule os números múltiplos de 3.


