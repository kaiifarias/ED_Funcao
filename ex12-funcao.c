#include<stdio.h>

void verificaRepetido (float vetor[ ]){
	
	int i, repetidos = 1;
	float aux;
	
	aux = vetor[0]; 
	for (i=1; i<10; i++) {
    	if( vetor[i] == aux ){
        	repetidos++; 
    	}
    	else {
           	if( repetidos > 1 ) {
            	printf("O valor %.1f esta repetido %d vezes\n", aux, repetidos);
            	repetidos = 1;
        	}
        	aux = vetor[i];
   	 	}
	}
		if(repetidos > 1) {
    printf("O valor %.1f esta repetido %d vezes\n", aux, repetidos);

}
}

int main(){
	float vetor[ ] = {0,0,1,2,3,3,3,5,7,7,6};
	verificaRepetido(vetor);
	
	return 0;
}
