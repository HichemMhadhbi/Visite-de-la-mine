#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbDep, i, j;
    do {
            printf("Veuillez saisir le nombre total de deplacements : ");
            scanf("%d", &nbDep);
    }while(nbDep > 1000 || nbDep <= 0);

    int Tdep[nbDep];
    for(i = 0 ; i < nbDep ; i++){
        printf("\nVeuillez saisir les deplacements : \n");
        scanf("%d", &Tdep[i]);
    }

    printf("Sequence inverse des deplacements : \n");
    for(j = nbDep - 1 ; j >=0 ; j--){
        switch(Tdep[j]) {
            case 1: // Aller à gauche -> revenir à droite
                printf("2\n");
                break;
            case 2: // Aller à droite -> revenir à gauche
                printf("1\n");
                break;
            case 3: // Aller tout droit -> revenir en arrière (tout droit)
                printf("3\n");
                break;
            case 4: // Monter -> redescendre
                printf("5\n");
                break;
            case 5: // Descendre -> remonter
                printf("4\n");
                break;
            default:
                printf("Deplacement inconnu : %d\n", Tdep[j]);
        }
    }

    return 0;
}


/*
L'un des produits nécessaires pour la fabrication de l'onguent magique, un minerai très rare, ne se trouve qu'en un seul endroit sur la planète, au fond de la plus vieille mine existante, jadis exploitée par le peuple nain. Désormais seuls quelques uns d'entre eux sont encore sur place, afin de guider les voyageurs (commerçants et touristes) au sein de ce dédale de cavernes et galeries.

Après avoir engagé un guide, il vous mène jusqu'à l'endroit prévu mais un petit désaccord sur le paiement de ses services le pousse à vous laisser sur place, sans aucune chance de retrouver la sortie. Heureusement votre robot à conservé en mémoire la suite des déplacements qui vous ont amené de l'entrée jusqu'à votre position actuelle, il ne vous reste plus qu'à suivre le chemin inverse !

Ce que doit faire votre programme :
Il existe 5 types de déplacements, représentés par 5 entiers différents : aller à gauche (1), aller à droite (2), aller tout droit (3), monter (4) et descendre (5).

Le premier entier à lire est le nombre total de déplacements (1000 au maximum). Ensuite, chaque déplacement (représenté par un entier) est indiqué sur sa propre ligne.

Vous devez afficher la suite des déplacements à faire pour aller de votre position actuelle à la sortie.

EXAMPLE
input:

6
1
3
2
4
4
5
output:

4
5
5
1
3
2
 */
