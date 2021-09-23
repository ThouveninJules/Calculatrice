#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void my_putchar(char c)
{
    write (1, &c, 1);
}

void my_putnbr(int nb){
    if (nb < 0){
        my_putchar('-');
        nb = -nb;
    }
    if (nb <= 9){
        my_putchar(nb+'0');
    }else {
        my_putnbr(nb / 10);
        my_putchar(nb  % 10+'0');
    }
}

int my_strlen(char* s){
    int i = 0;
    while(s[i]!='\0'){
        i++;
    }
    return i;
}

void my_putstr(char* s){
    for(int j=0; j<my_strlen(s); j++){
        my_putchar(s[j]);
    }
}

int main(int argc, const char * argv[]) {
    //Variables
    char operateur;
    float operant1;
    float operant2;
    float resultat = 0.0;
    
    // Entrées
    operateur = '*';
    operant1 = 3612;
    operant2 = 6;
    
    // Calculs
    if (operateur == '+') {
        resultat = operant1 + operant2;
        printf("Le résultat de l'addition est: %.2f\n", resultat);
    }
    
    if (operateur == '-') {
        resultat = operant1 - operant2;
        printf("Le résultat de la soustraction est: %.2f\n", resultat);
    }
    
    if (operateur == '*') {
        resultat = operant1 * operant2;
        printf("Le résultat de la multiplication est: %.2f\n", resultat);
    }
    
    if (operateur == '/') {
        resultat = operant1 / operant2;
        printf("Le résultat de la division est: %.2f\n", resultat);
    }
    return 0;
}