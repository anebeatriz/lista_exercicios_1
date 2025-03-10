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
