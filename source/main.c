#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    //Variables
    char operateur;
    float operant1;
    float operant2;
    float resultat = 0.0;
    
    // Entrées
    printf("Veuillez taper votre opération (par exemple: 1 + 2):\n");
    scanf("%f%c%f", &operant1, &operateur, &operant2);
    while (operateur != '+' && operateur != '-' && operateur != '*' && !(operateur == '/' && operant2 != 0)) {
        printf("Cet opérateur n'est pas disponible ou vous essayer de diviser par ZÉRO!\nSaisissez à nouveau votre opération: ");
        scanf("%f%c%f", &operant1, &operateur, &operant2);
    }
    
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