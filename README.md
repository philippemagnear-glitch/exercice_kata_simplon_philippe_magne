# exercice_kata_simplon_philippe_magne
Bonjour, dans ce fichier texte je vous explique les étapes que j'ai réalisées pour finir l'exercice.

IMPORTANT :

J'ai préféré coder en C car je suis depuis 1,5 mois un cours d'introduction en ligne au computer science afin d'acquérir les bases pour augmenter mes chances de rentrer chez Simplon et le cours est organisé de manière à ce que l'on apprenne d'abord à coder en C puis à la fin du cours ils parlent de SQL, Python et HTML.

J'ai presque fini la partie C du cours mais je n'ai pas encore commencé la partie Python.

J'ai donc codé dans VSCode le programme en C, voici les étapes que j'ai suivies :

J'ai d'abord travaillé sur une grille de 10*10 afin de mieux me représenter mentalement le problème.

J'ai commencé par écrire en pseudo-code la logique du programme tout en divisant étape par étape les éléments pour simplifier mentalement la marche à suivre.

Puis j'ai codé 3 fonctions simples pour juste allumer ou éteindre une case.

Et j'ai fait des tests pour voir si mon code marchait en utilisant des directives simples comme ça :


    // Directives et tests

    turn_on(2, 3);
    toggle(2, 3);
    toggle(0, 0);

Et printf :


   for (int i = 0; i < N; i++)
        {
            for (int j = 0; j< N; j++)
            {
                printf("%d", lights[i][j]);
            }
            printf("\n");
        }
         return 0;

Puis j'ai rajouté une fonction pour allumer et éteindre toute une ligne à la fois ou plusieurs cases à la fois.

Pareil, j'ai fait un test simple et j'ai utilisé printf.

Par la suite, j'ai ajouté une fonction pour compter les lumières allumées, puis printf pour compter à la main le nombre de lumières allumées et voir si ça correspond à la fonction pour compter.

Pour finir, j'ai remplacé N par 1000 et j'ai utilisé les directives données dans l'énoncé du kata. La réponse finale est : 151 467 lumières allumées.

Pour la question 2, j'ai créé une copie de mon fichier original, puis j'ai simplement remplacé la logique d'incrémentation dans mes fonctions, en rajoutant un if pour ne pas soustraire quand une case = 0 afin de ne pas passer en négatif. J'ai modifié la fonction qui compte l'éclairage pour simplement additionner les valeurs et j'ai tout recompilé.

La réponse finale à la question 2 est : 400 729 d'éclairage



