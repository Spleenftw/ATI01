#include <stdio.h>

char* cree_tab(int N, int M){
int tab[N][M];
}

struct nombre{
int x;
int y;
};

void affiche_tab(struct nombre nb){
printf("Tableau de départ : \n");
int i;
int j;
i=0;
j=0;
while(j<nb.y){
   for(i=0;i<nb.x;i++){
      printf("0");
      }
   printf("0\n");
   j++;
   }
}

int main(){
struct nombre nombr={10,10};
affiche_tab(nombr);

}





//Programmation en dure :

/*
void affiche_tab(char* nom, int N, int M){
int j;
int i;
j=0;
printf("Tableau de départ : \n");
while(j<M){
   for(i=0;i<N;i++){
      printf("0");
      }
   printf("0\n");
   j++;
   }
}
*/

//Dans le main :

//char* tableau;
//tableau = cree_tab(10,10);
//affiche_tab(tableau, 10, 10);
