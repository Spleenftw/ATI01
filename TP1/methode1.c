#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Fonction pour écrire la f(x)=x³ en C

double f (double x) {
    return pow(x, 3.0);
};

// Fonction pour calculer l'aire d'un rectangle
double aire_rec (double cote1, double cote2) {
    double aire ;
    aire = cote1*cote2 ;
    return aire ;
};

// Fonction pour déclarer la taille des rectangle 
double taille_rectangle (double a, double b, double N) {
    double h ;
    h = (b-a)/N ;
    return h ;
};


int main () {

    double cote1 = 1.1;
    double cote2 = 1.2;

    double a = 1;
    double b = 6;
    printf("Aire : %f. \n", aire_rec(cote1, cote2));
    printf("h vaut : %f \n", taille_rectangle(a,b,3));
    printf("");
};