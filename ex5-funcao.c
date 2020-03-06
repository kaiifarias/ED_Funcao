#include <stdio.h>

void acha_maior (int a, int b){    
	if (a > b) printf ("Marior: %d", a);
	else printf ("Maior: %d", b);	
}

void ver_diferente (int a, int b){
	if(a == b) printf ("Digite valores diferentes!");
	else acha_maior(a, b);
}

int main (){
    int x, y;
    scanf ("%d", &x);
    scanf ("%d", &y);
    ver_diferente(x,y);
     
	return 0;
}
