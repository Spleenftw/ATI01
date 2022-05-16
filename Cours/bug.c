#include <stdio.h>

void ma_fct(char* T, int p){
int i;
i=0;
while(i<(p-1)){
  T[i]='A';
  i++;
  }
T[i]='\0';
}

int main(){
int a;
a=42;
char tab[40]="Hello \n";
printf("%s \n", tab);
ma_fct(tab,40);
printf("%s \n", tab);
return 0;

}
