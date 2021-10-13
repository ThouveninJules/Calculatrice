#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "projet.h"

int main(int argc, const char * argv[]) {
    
    if(argc<4)
    {
        printf("Erreur : vous avez entrez moins de 2 operants separes d'un operateur.\n");
        return 1;
    }
    char op;
    float o1;
    float o2;
    float resultat = 0.0;
    o1 = atof(argv[1]);
    resultat = o1 + 0;
    
    // Calculs
    for(int k=2; k<argc; k=k+2)
    {
        resultat = calcul(argc, argv, k, resultat);
        
        if(argv[k+1][0]=='(')
        {
            while(argv[k][0] != ')' && argv[k+1][0] != ')')
            {      
                k = k + 2;
            }
        }
    }
    if(resultat == errno)
    {
        return 0;
    }
    else
    {
        printf("Le resultat de votre operation est : %g\n", resultat);
        return 0;
    }
}