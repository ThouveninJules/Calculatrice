#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    //Variables
    char operateur;
    float operant1;
    float operant2;
    float resultat = 0.0;
    
    // Entrées
    operateur = '+';
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