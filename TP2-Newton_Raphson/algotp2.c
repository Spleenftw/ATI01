#include <stdio.h>
#include <math.h>



// structure

struct reponse_s {
    int i;
    double n;
};

typedef struct reponse_s reponse_t ;

// partie 1

double f (double x) {
    
    double f;
    f = 1/sqrt(x) - 12 *cos(x) ;
    return f;
};


// partie 2

double derivee (double x) {
    double f;
    f = (12*sin(x) - (1/(2*pow(x,3/2)))) ;
    return f ;
}

// trouver a
double coef_a (double(derivee1)(double), double x) {
    double a;
    a = derivee1(x) ;
    return a;
};

// trouver b

double coef_b (double(derivee1)(double), double(f1)(double), double x) {
    double b;
    b = f1(x) - derivee1(x)*x ;
    return b;
};

// methode newton-raphson
double /*reponse_t*/ newton(double(derivee1)(double), double(f1)(double), double x) {
    double n = x - (f1(x)/derivee1(x));
    double eps = 0.00001 ;
    //double i ;
    //reponse_t rep ;

    while (fabs(n-x) > eps) {
        x=n;
        n = x - (f1(x)/derivee1(x));
        //i++;
    };
    //i = rep.i ;
    //n = rep.n ;

    return n ;
    //return rep ;
};


// main

int main () {
double x = 1 ;
//reponse_t reponse ;
printf("f vaut %f\n",f(x)) ;
printf("la dérivée de f vaut %f\n",derivee(x)) ;
printf("a vaut %f\n", coef_a(derivee,x));
printf("b vaut %f\n", coef_b(derivee,f,x));
//reponse = newton(derivee,f,x) ;
//printf("racine : %f\n", reponse.n);
printf("racine : %f\n", newton(derivee,f,x));

//printf("nombre d'itération : %d\n", reponse.i);
};
/* tips

abs(x) = ||x||, cos(x), sin(x), sqrt(x), x²=pow(x,2)


*/

