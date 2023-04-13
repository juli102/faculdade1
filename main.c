#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAXT 100 
int Pilha[MAXT];
int Topo;




void Pilha_Inicializa(){
    Topo = -1;
}


int Pilha_Vazia(){
    if(Topo==-1)
        return 1;
    else
        return 0;
}


int Pilha_Tamanho(){
    return Topo+1;
}

int Pilha_Cheia(){
    if(Topo==MAXT-1)
	
        return 1;
    else
	
        return 0;

}
int Pilha_Empilhar(int valor) {
    if( Pilha_Cheia() )
       return 1;
    else
        Topo++;
        Pilha[Topo] = valor;
        return 0;
    
}

int Pilha_Desempilhar(int valor){

    if( Pilha_Vazia() )
        return 1;
    else
        valor=Pilha[Topo];
        Topo--;
        return 0;
    
}

int Pilha_Consulta(int valor){
    if( Pilha_Vazia() )
        return 1;
    else
        valor=Pilha[Topo];
        return 0;
    
}

int main(){

    int valor;
	setlocale(LC_ALL,"portuguese");
	
	printf(" ------EXERCICIO 2 EXPLICADO EM C------\n\n");
	printf(" Os valores que serão inseridos na pilha: 1,2,3,4,5,3,6.");
	printf("\n\n Se o numero for diferente de 3 ele será empilhado, senão será desempilhado");
	printf("\n e x passará a ser o elemento que foi retirado do topo.");
	
    Pilha_Inicializa();
    
    Pilha_Empilhar(1);
    printf("\n\n Foi empilhado o numero: 1");
    
    Pilha_Empilhar(2);
    printf("\n\n Foi empilhado o numero: 2");
    
    Pilha_Desempilhar(valor);
    printf("\n\n O numero 3 chama a função para desempilhar");
    printf("\n então ele desempilha o 2 e o x se torna o 2 por ter sido o ultimo a ser desempilhado");
    printf("\n\n X nesse momento é: %d \n\n", valor);
    
    Pilha_Empilhar(4);
	printf("\n\n Foi empilhado o numero: 4");
	
    Pilha_Empilhar(5);
    printf("\n\n Foi empilhado o numero: 5");
    
    Pilha_Desempilhar(valor);
  	printf("\n\n O numero 3 chama a função para desempilhar");
  	printf("\n então ele desempilha o 5 e o x se torna o 5 por ter sido o ultimo a ser desempilhado");
    printf("\n\n X nesse momento é :%d \n\n", valor);
    
    Pilha_Empilhar(6);
 	printf("\n\n Foi empilhado o numero: 6");
 	
 	printf("\n\n final da pilha: ");
 
    printf("\n\n %d", Pilha[Topo]);
    printf("\n %d", Pilha[Topo-1]);
    printf("\n %d", Pilha[Topo-2]);
    
    printf("\n\n x será: %d", valor);
    printf("\n\n");
    

    system("pause");
    return 0;
}

