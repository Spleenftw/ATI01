#include <stdio.h>
#include <math.h>

struct complex_s {
    double reel;
    double imaginaire;
};

typedef struct complex_s complex_t ;

double complex_reel(complex_t A) {
double R = A.reel;
return R;
};

double complex_im(complex_t A) {
double R = A.imaginaire;
return R;
};

complex_t complex_add(complex_t A, complex_t B) {
   complex_t R ;
   R.reel = A.reel + B.reel ;
   R.imaginaire = A.imaginaire + B.imaginaire ;

    return R;
}

complex_t complex_sub(complex_t A, complex_t B) {
   complex_t R ;
   R.reel = A.reel - B.reel ;
   R.imaginaire = A.imaginaire - B.imaginaire ;

    return R;
}

complex_t complex_mul(complex_t A, complex_t B) {
   complex_t R ;

   R.reel = A.reel*B.reel - A.imaginaire*B.imaginaire ; // aa' - bb'
   R.imaginaire = A.reel*B.imaginaire + B.reel*A.imaginaire; // ab' + a'b

    return R;
}

complex_t complex_div(complex_t A, complex_t B) {
   complex_t R ;

   double Numerateur1 = A.reel*B.reel + A.imaginaire*B.imaginaire ; //aa' + bb'
   double Denominateur = pow(B.reel,2) + pow(B.imaginaire,2); //a'² + b'²
   R.reel = Numerateur1/Denominateur; // (aa' + bb')/a'² - b'²

   double Numerateur2 = -A.reel*B.imaginaire + A.imaginaire * B.reel ; // -ab'+ba'
   R.imaginaire = Numerateur2/Denominateur ; // (-ab'+ba')/a'² - b'²

    return R;
}

double complex_mod(complex_t A) {
   double R ;
   double X = pow(A.reel,2);
   double Y = pow(A.imaginaire,2);
   double Z = X+Y;
   R = sqrt(Z);
   return R;
}

complex_t complex_conj(complex_t A) {
    complex_t R ;
     R.reel = A.reel ;
     R.imaginaire = -A.imaginaire ;
     return R;
 }



int main () {
complex_t A ;
complex_t B ;
A.reel = 1 ;
A.imaginaire = 2 ;
B.reel = 3 ;
B.imaginaire = 4 ;

complex_t resultatadd ;
resultatadd = complex_add(A,B);
complex_t resultatsub ;
resultatsub = complex_sub(A,B);
complex_t resultatmul ;
resultatmul = complex_mul(A,B);
complex_t resultatdiv ;
resultatdiv = complex_div(A,B);
double resultatmod ;
resultatmod = complex_mod(A);
complex_t resultatconj ;
resultatconj = complex_conj(A);

printf("Partie réelle de A: %lf\nPartie imaginaire de A: %lf\n", complex_reel(A), complex_im(A));
printf("\nPartie réelle de B: %lf\nPartie imaginaire de B: %lf\n", complex_reel(B), complex_im(B));
printf("        \n[Résultat Addition] : \nPartie réelle de R: %lf\nPartie imaginaire de R: %lf\n", complex_reel(resultatadd), complex_im(resultatadd));
printf("        \n[Résultat Soustraction] : \nPartie réelle de R: %lf\nPartie imaginaire de R: %lf\n", complex_reel(resultatsub), complex_im(resultatsub));
printf("        \n[Résultat Multiplication] : \nPartie réelle de R: %lf\nPartie imaginaire de R: %lf\n", complex_reel(resultatmul), complex_im(resultatmul));
printf("        \n[Résultat Division] : \nPartie réelle de R: %lf\nPartie imaginaire de R: %lf\n", complex_reel(resultatdiv), complex_im(resultatdiv));
printf("        \n[Résultat Module] : \nModule : %lf\n", resultatmod);
printf("        \n[Résultat Conjugué] : \nPartie Réelle du conjugué : %lf\nPartie Imaginaire du conjugué %lf\n", complex_reel(resultatconj), complex_im(resultatconj));

return 0 ;
};
