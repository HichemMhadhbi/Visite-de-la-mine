# Visite de la mine 
## Description 
L'un des produits nécessaires pour la fabrication de l'onguent magique, un minerai très rare, ne se trouve qu'en un seul endroit sur la planète, au fond de la plus vieille mine existante, jadis exploitée par le peuple nain. Désormais seuls quelques uns d'entre eux sont encore sur place, afin de guider les voyageurs (commerçants et touristes) au sein de ce dédale de cavernes et galeries.

Après avoir engagé un guide, il vous mène jusqu'à l'endroit prévu mais un petit désaccord sur le paiement de ses services le pousse à vous laisser sur place, sans aucune chance de retrouver la sortie. Heureusement votre robot à conservé en mémoire la suite des déplacements qui vous ont amené de l'entrée jusqu'à votre position actuelle, il ne vous reste plus qu'à suivre le chemin inverse !

## Ce que doit faire votre programme :
Il existe 5 types de déplacements, représentés par 5 entiers différents : aller à gauche (1), aller à droite (2), aller tout droit (3), monter (4) et descendre (5).

Le premier entier à lire est le nombre total de déplacements (1000 au maximum). Ensuite, chaque déplacement (représenté par un entier) est indiqué sur sa propre ligne.

Vous devez afficher la suite des déplacements à faire pour aller de votre position actuelle à la sortie.

### EXAMPLE
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

### Explication de code 

#### Stockage des déplacements :
Les déplacements sont stockés dans un tableau "Tdep" de taille "nbDep".

#### Lecture des déplacements :
Une boucle "for" est utilisée pour lire chaque déplacement et les stocker dans le tableau "Tdep".

#### Affichage de la séquence inverse des déplacements :
Une boucle "for" inverse (commençant par la fin du tableau) est utilisée pour afficher la séquence inverse des déplacements. Pour chaque déplacement, le déplacement inverse correspondant est affiché.

#### Utilisation de "switch" pour les déplacements inverses :*
Le switch permet de déterminer quel déplacement inverse doit être affiché pour chaque déplacement stocké dans le tableau.