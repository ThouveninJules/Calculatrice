Calculatrice : 

Entrez votre calcul après votre binaire (Exemple : ./main 2 + 3).

Les opérants valides sont : 
    + pour l'addition
    - pour la soustraction
    x pour la multiplication
    : pour la division
    ^ pour la puissance
    % pour le modulo
    "("...")" pour un calcul prioritaire (Les guillemets sont nécessaires !!!)

Les règles de priorité ne s'appliquent pas seules, le calcul se fait de gauche à droite à l'exception des parenthèses qui se font avant.
Le calcul n'a pas de limite de longueur, cependant il est impossible de mettre des parenthèses à l'intérieur d'autres parenthèse.

Exemples : 
    //Exemple valide
    3 + "(" 6 x 7 + 3 ")" : 2 + 4 
    = 3 + "(" 42 + 3 ")" : 2 + 4 
    = 3 + 45 : 2 + 4 
    = 48 : 2 + 4 
    = 24 + 4
    = 28

    //Exemple d'erreur
    3 + "(" 6 x 7 + "(" 3 ^ 3 ")" ")" : 2 + 4 
    = Erreur

