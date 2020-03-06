#include<stdio.h>

int calculaFatorial (int n){
	int aux;	
	for(aux = 1; n > 1; n --)
		aux = aux * n;
	return aux;
}

int main(){	
	int num, fat;
	scanf("%d", &num);
	fat = calculaFatorial(num);
	printf("fatorial: %d", fat);
	return 0;
}
