#include <stdio.h> 
#include <stdlib.h>


struct point* point_new(double x double y) {
    point* tmp ;
    tmp=(struct point*) malloc (sizeof (struc point)); 

    tmp->x = x ;
    tmp->y = y ;

    return tmp;
}


void point_del( struc point* tmp) {
    free(tmp);
};

void point_affiche( struc point* tmp) {
    printf("X : %lf \n", tmp->x);
    printf("Y : %lf \n", tmp->y);
)