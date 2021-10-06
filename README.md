Calculatrice : 

Entrez votre calcul après votre binaire (Exemple : ./main 2 + 3).

Les opérants valides sont : 
    + pour l'addition
    - pour la soustraction
    x pour la multiplication
    : pour la division
    "("...")" pour un calcul prioritaire (Les guillemets sont nécessaires !!!)

Les règles de priorité ne s'appliquent pas seules, le calcul se fait de gauche à droite à l'exception des parenthèses.
Le calcul n'a pas de limite sauf à l'intérieur des parenthèse où le calcul est limité à 2 opérateurs.

Exemples : 
    //Exemple valide
    3 + "(" 6 x 7 ")" : 2 + 4 
    = 3 + 42 : 2 + 4 
    = 45 : 2 + 4 
    = 22.5 + 4 
    = 26.5

    //Exemple d'erreur
    3 + "(" 6 x 7 + 2 ")" : 2 + 4 
    = Erreur : Le "+ 2" est en trop.

