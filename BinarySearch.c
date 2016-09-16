#include<stdio.h>

int busca(int menor,int maior,int valor,int *vet);

int main(void){

    int menor,maior;
    int valor;
    int vet[10]={2,3,6,9,12,16,18,25,36,40};
    int indice;
    printf("Digite o valor de que deseja procurar no vetor: ");
    scanf("%d",&valor);

    menor=0;
    maior=9;

    indice=busca(menor,maior,valor,vet);

    //printf("volta");
    //printf("%d",indice);{indice tem valor incoerente tipo 2001244}
    //getchar();
    //getchar();
    if(indice!=-1)printf("Valor %d encontrado no vetor.",vet[indice]);
    else printf("O valor procurado nao existe no vetor.");

    getchar();
    getchar();
    return(0);
}
int busca(int menor,int maior,int valor, int *vet){
    int meio;

    if(menor>maior)return(-1);

    meio=(maior+menor)/2;
    if(valor==vet[meio])return(meio);

    if(valor<vet[meio])
        busca(menor,meio-1,valor,vet);
    else
        busca(meio+1,maior,valor,vet);
}
