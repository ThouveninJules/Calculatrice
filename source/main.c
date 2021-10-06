#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

float parent(float r, int o1, int o2, char op1, char op2){
        if (op1 == '+') 
        {
            if (op2 == '+') 
            {
                o2 = o1 + o2;
            }
            else        
            if (op2 == '-') 
            {
                o2 = o1 - o2;
            }
            else
            if (op2 == 'x') 
            {
                o2 = o1 * o2;
            }
            else
            if (op2 == ':') 
            {
                o2 = o1 / o2;
            }
            else
            {
                printf("Erreur : L'operateur %c que vous avez entre n'est pas valide.\nVeuillez vous referer au README pour voir la liste des operateurs valides", op1);
                return 1;
            }
            r = r + o2;
        }
        else        
        if (op1 == '-') 
        {
            if (op2 == '+') 
            {
                o2 = o1 + o2;
            }
            else        
            if (op2 == '-') 
            {
                o2 = o1 - o2;
            }
            else
            if (op2 == 'x') 
            {
                o2 = o1 * o2;
            }
            else
            if (op2 == ':') 
            {
                o2 = o1 / o2;
            }
            else
            {
                printf("Erreur : L'operateur %c que vous avez entre n'est pas valide.\nVeuillez vous referer au README pour voir la liste des operateurs valides", op1);
                return 1;
            }
            r = r - o2;
        }
        else
        if (op1 == 'x') 
        {
            if (op2 == '+') 
            {
                o2 = o1 + o2;
            }
            else        
            if (op2 == '-') 
            {
                o2 = o1 - o2;
            }
            else
            if (op2 == 'x') 
            {
                o2 = o1 * o2;
            }
            else
            if (op2 == ':') 
            {
                o2 = o1 / o2;
            }
            else
            {
                printf("Erreur : L'operateur %c que vous avez entre n'est pas valide.\nVeuillez vous referer au README pour voir la liste des operateurs valides", op1);
                return 1;
            }
            r = r * o2;
        }
        else
        if (op1 == ':') 
        {
            if (op2 == '+') 
            {
                o2 = o1 + o2;
            }
            else        
            if (op2 == '-') 
            {
                o2 = o1 - o2;
            }
            else
            if (op2 == 'x') 
            {
                o2 = o1 * o2;
            }
            else
            if (op2 == ':') 
            {
                o2 = o1 / o2;
            }
            else
            {
                printf("Erreur : L'operateur %c que vous avez entre n'est pas valide.\nVeuillez vous referer au README pour voir la liste des operateurs valides", op2);
                return 1;
            }
            r = r / o2;
        }
        else
        {
            printf("Erreur : L'operateur %c que vous avez entre n'est pas valide.\nVeuillez vous referer au README pour voir la liste des operateurs valides", op1);
            return 1;
        }
    return r;
}

int main(int argc, const char * argv[]) {
    if(argc<4)
    {
        printf("Erreur : vous avez entrez moins de 2 operants separes d'un operateur.");
        return 1;
    }
    char op;
    float o1;
    float o2;
    float resultat = 0.0;

    o1 = atoi(argv[1]);
    resultat = o1 + 0;
    
    // Calculs
    for(int k =2; k<argc; k=k+2)
    {
        op = argv[k][0];
        o2=atoi(argv[k+1]);

        if(argv[k+1][0]=='(')
        {
            if(argv[k+5][0]!=')')
            {
                printf("Erreur : un calcul entre parentheses est limite a 2 operateurs.\nVeuillez vous referer au README pour l'utilisation de parentheses.");
                return 1;
            }else{
            resultat = parent(resultat, atoi(argv[k+2]), atoi(argv[k+4]), op, argv[k+3][0]);
            k=k+4;
            }
        }
        else
        {

        if (op == '+') 
        {
            resultat = resultat + o2;
        }
        else        
        if (op == '-') 
        {
            resultat = resultat - o2;
        }
        else
        if (op == 'x') 
        {
            resultat = resultat * o2;
        }
        else
        if (op == ':') 
        {
            resultat = resultat / o2;
        }
        else
        {
            printf("Erreur : L'operateur %c que vous avez entre n'est pas valide.\nVeuillez vous referer au README pour voir la liste des operateurs valides", op);
            return 1;
        }
        }
        
    }
    printf("Le resultat de votre operation est : %.2f\n", resultat);
    return 0;
}