#include <stdio.h>

int main(){

    FILE *archivo=NULL;
    char buffer[100];
    double pi;

    archivo=fopen("vector.txt","w");
    
    if (archivo==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }

    for(int i=0; i<100; i+=3){
        fprintf(archivo,"%d\n",i);
    }
     fclose(archivo);
     return 0;
}