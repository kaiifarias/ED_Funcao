#include<stdio.h>

void meses (int op){
	switch (op){
		case 1:
			printf("janeiro");
			break;
		case 2:
			printf("fevereiro");
			break;
		case 3:
			printf("marco");
			break;
		default:
			printf("valor invalido");
			break;
	}
}

int main(){
	int i;
	scanf("%d", &i);
	meses(i);
	return 0;
}
