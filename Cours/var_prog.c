#include <stdio.h>

void swap(int * i, int * j){
int c;
c=*i;
*i=*j;
*j=c;
}

int main(){
int a,b;
a=42;
b=17;
swap(&a,&b);

printf("Valeur de A : %d et de B : %d \n",a,b);

return 0;
}
