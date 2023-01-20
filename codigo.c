#include <stdio.h>

int main(){

int numero;
FILE *vector=NULL;
vector=fopen("vector.txt","r");

FILE *vector2=NULL;


vector2=fopen("vector2.txt","w");
   
   int cont=1;
   while (!feof(vector))
   {
    fscanf(vector, "%d", &numero);

        if (numero%5==0)
        {
            fprintf(vector2," %d Es multiplo de 5 \n", numero);
        }else{
            fprintf(vector2," %d \n ", numero);
        }
        

   }
   
    
    fclose(vector);
    fclose(vector2);

    return 0;


}