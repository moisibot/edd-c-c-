#include <stdio.h>


void insercion(int[], int);

int main(){
    int i, tam;
    int A[]={65,1,21,8,152,123,2};
    tam=sizeof (A)/sizeof (A[0]);
    printf("arreglo : ");

    for(i = 0; i < tam; ++i) {
        printf(" %d",A[i]);


    }
    insercion(A,tam);
    printf("\nse ordena : ");
    for ( i = 0; i < tam; ++i) {
        printf(" %d",A[i]);
    }
    printf("\n");
    printf("");
    printf("");
}
void insercion(int A[], int tam){
    int indice;
    for (int i = 0; i < tam; ++i) {
        indice =A[i];
        int j=i-1;
        while (j>=0 && A[j]>indice){
            A[j+1] = A[j];
            j--;

        }
        A[j+1]= indice;

    }


}