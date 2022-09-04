#include<stdio.h>
#include<stdlib.h>


void preenche_ordenado(int n, int *v){
    int i, y, aux;

  for (i=0; i<n; i++){
  	printf("\n----preencher vetor----\n\n");

    printf("Digite a posicao (%d), do vetor::\n", i);
    scanf("%d",&v[i]);
  }
     for(i=0; i<n; i++){
     	
      for( y= i+1; y<n; y++){
        if(v[i] > v[y]){// se a posicao [i] for verdadeira 
            aux = v[i];
            v[i]= v[y];
            v[y]= aux;


        }

      }
	 }
      
    
      
      for (i=0; i< n; i++){
		  printf(" Numero :%d\n",v[i]);
		  

	  }
     
}


int main() {

   int n;
   
  printf("digite a quantidade de elementos:\n");
    scanf("%d", &n);

int*vetor = (int*)malloc(n*sizeof(int));
  
  preenche_ordenado(n, &vetor);


free(vetor);
    return 0;

}