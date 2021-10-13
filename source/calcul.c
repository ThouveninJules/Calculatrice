#include <stdio.h>
#include <stdlib.h>

float calcul (int argc, const char * argv[], int k, float resultat){

    //initialisation des variables
    char op;
    char mop;
    float o1;
    float o2;

    op = argv[k][0];
    o2 = atof(argv[k+1]);

    //parenthèses
    if(argv[k+1][0]=='(' || argv[1][0]=='(' || argv[k][0]=='(' || argv[k-1][0]=='(')
        {
            
            mop = op;
            o1 = atof(argv[k+2]);
            k = k + 1;

            //calcul des parenthèses
            while(argv[k+2][0] != ')' && op != ')')
            {
                k = k + 2;
                o1 = calcul(argc, argv, k, o1);
            }

            //Calcul une fois les parenthèses terminées :

            //addition
            if (mop == '+') 
            {
                resultat = resultat + o1;
            }
            else

            //soustraction        
            if (mop == '-') 
                {
                    resultat = resultat - o1;
                }
            else

            //multiplication
            if (mop == 'x') 
                {
                    resultat = resultat * o1;
                }
            else

            //division
            if (mop == ':') 
                {
                if(o2 == 0){
                        printf("Erreur : vous essayez de diviser par 0.\n");
                        return 1;
                }else{
                        resultat = resultat / o1;
                    }
                }
            else

            //modulo
            if (mop == '%')
                {
                    float m = 0;
                    m = resultat / o1;
                    resultat = resultat - (o1 * m);
                }
            else

            //puissance
            if (mop == '^')
            {
                float p = resultat;

                //puissance nulle
                if(o1 == 0)
                {
                    resultat = 1;
                }
                else

                //puissance négative
                if(o1 < 0)
                {
                    o1 = -o1;
                    for(int i = 1; i < o1; i++)
                    {
                        resultat = resultat * p;
                    }
                    resultat = 1 / resultat;
                }
                else

                //puissance positive
                {
                    for(int i = 1; i < o1; i++)
                    {
                        resultat = resultat * p;
                    }
                }
            }

            //envoi du résultat après les parenthèses
            return resultat;
        }

    //addition
    if (op == '+') 
        {
            resultat = resultat + o2;
        }
    else    

    //soustraction   
    if (op == '-') 
        {
            resultat = resultat - o2;
        }
    else

    //multiplication
    if (op == 'x') 
        {
            resultat = resultat * o2;
        }
    else

    //division
    if (op == ':') 
        {
        if(o2 == 0){
                printf("Erreur : vous essayez de diviser par 0.\n");
                return 1;
        }else{
                resultat = resultat / o2;
            }
        }
    else

    //modulo
    if (op == '%')
        {
            float m = 0;
            m = resultat / o2;
            resultat = resultat - (o2 * m);
        }
    else

    //puissance
    if (op == '^')
        {
        float p = resultat;

        //puissance nulle
        if(o2 == 0)
            {
                resultat = 1;
            }
        else

        //puissance négative
        if(o2 < 0)
            {
            o2 = -o2;
            for(int i = 1; i < o2; i++)
                {
                    resultat = resultat * p;
                }
            resultat = 1 / resultat;
            }
        else

        //puissance positive
            {
            for(int i = 1; i < o2; i++)
                {
                    resultat = resultat * p;
                }
            }
        }
        else

        //erreur en cas d'opérateur invalide
        {
            printf("Erreur : L'operateur %c en position %d que vous avez entre n'est pas valide.\nVeuillez vous referer au README pour voir la liste des operateurs valides\n", op, k);
            return errno;
        }

    //envoi du résultat
    return resultat;
}