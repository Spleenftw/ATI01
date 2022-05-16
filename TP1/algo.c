// R = 0
// calculer le nombre de rectangle
// calculer h (la taille d'un rectangle)
// trouver le milieu d'un rectangle
// trouver la hauteur d'un rectangle
// calculer l'aire avec hauteur x h
// R = R + aire, réitérer

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Fonction pour écrire la f(x)=x² en C
double f (double x) {
    return pow(x, 2.0);
};

// Fonction pour calculer l'aire d'un rectangle
double aire_rec (double a, double b) {
    double aire ;
    aire = a*b ;
    return aire ;
};

// calculer h (la taille d'un rectangle)
double taille_rectangle (double a, double b, double N) {
    double h ;
    h = (b-a)/N ;
    return h ;
};

//trouver le milieu d'un rectangle 
double milieu_rectangle (double a, double i, double h) {
    double milieu;
    milieu = a+(i*h)+(h/2);
    return milieu; 
}

// trouver la hauteur d'un rectangle
double hauteur_rectangle (double a, double i, double h) {
    double hauteur = f(a+(i*h)+(h/2));
}

// MAIN


int main() {
// calculer le nombre de rectangle (ou plutot le définir)
double N = 3;

// calculer h (la taille d'un rectangle)
double a = 1;
double b = 10;
double t = taille_rectangle(a,b,N);
double hauteur = hauteur_rectangle(a,b,t);

// trouver le milieu d'un rectangle
int i = 1;

//trouver la taille d'un rectangle
printf("la taille d'un rectangle vaut : %f \n", taille_rectangle(a,b,N));

//trouver le milieu du rectangle
printf("milieu rectangle n°%d: %f\n", i+1, milieu_rectangle(a,i,t)); // i+1 car on part de 0.

// trouver la hauteur d'un rectangle
printf("hauteur rectangle n°%d : %f\n", i+1, hauteur_rectangle(a,b,t));

// Calculer l'aire du rectangle 
printf("aire du recteur n°%d : %f\n", i+1, aire_rec(t, hauteur));

};