#include <stdio.h>
int verificarPrimo (int n){
	
	int i, aux = 0;
	
	for (i = 2; i <= (n/2); i++) {
    	if (n%i == 0) {
       		aux++;
       		break;
    	}
 	}
 	return aux;
}

int main(){
	int num, primo;
		
	scanf("%d", &num);
	primo = verificarPrimo(num);
	
	if (primo == 0)
    	printf("%d e um numero primo\n", num);
 	else
    	printf("%d nao e um numero primo\n", num);
	return 0;
}
