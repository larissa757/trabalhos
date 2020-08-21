#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

	int vet[8] = {10, 1, 200, 450, 2031, -25, 0, 40};
	int valmax, valmin, i;
	
    main() {
    	
    	setlocale(LC_ALL, "Portuguese");
    	
    	valmax = vet[0];
    	valmin = vet[0];
    	
    for (i=0;i<8;i++){
    	
    	if (vet[i] > valmax)
    	valmax = vet[i];
    	
    	if (vet[i] < valmin)
    	valmin = vet[i];
    }
    
    printf ("\nO Valor Máximo é: %d", valmax);
    printf ("\nO Valor Mínimo é: %d", valmin);
}