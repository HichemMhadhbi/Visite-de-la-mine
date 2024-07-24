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
            case 1: // Aller � gauche -> revenir � droite
                printf("2\n");
                break;
            case 2: // Aller � droite -> revenir � gauche
                printf("1\n");
                break;
            case 3: // Aller tout droit -> revenir en arri�re (tout droit)
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
L'un des produits n�cessaires pour la fabrication de l'onguent magique, un minerai tr�s rare, ne se trouve qu'en un seul endroit sur la plan�te, au fond de la plus vieille mine existante, jadis exploit�e par le peuple nain. D�sormais seuls quelques uns d'entre eux sont encore sur place, afin de guider les voyageurs (commer�ants et touristes) au sein de ce d�dale de cavernes et galeries.

Apr�s avoir engag� un guide, il vous m�ne jusqu'� l'endroit pr�vu mais un petit d�saccord sur le paiement de ses services le pousse � vous laisser sur place, sans aucune chance de retrouver la sortie. Heureusement votre robot � conserv� en m�moire la suite des d�placements qui vous ont amen� de l'entr�e jusqu'� votre position actuelle, il ne vous reste plus qu'� suivre le chemin inverse !

Ce que doit faire votre programme :
Il existe 5 types de d�placements, repr�sent�s par 5 entiers diff�rents : aller � gauche (1), aller � droite (2), aller tout droit (3), monter (4) et descendre (5).

Le premier entier � lire est le nombre total de d�placements (1000 au maximum). Ensuite, chaque d�placement (repr�sent� par un entier) est indiqu� sur sa propre ligne.

Vous devez afficher la suite des d�placements � faire pour aller de votre position actuelle � la sortie.

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
