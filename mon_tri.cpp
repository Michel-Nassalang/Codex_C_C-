#include <stdio.h>
main(){
	int min, max, i, j;
	int A[25] = {8, 36, 5, 21, 7, 43, 65, 2, 23, 12, 56, 124, 75, 89, 9};
	for (i=0; i<14; i++){
		for (j=i+1; j<14; j++){
			if(A[i] > A[j]){
				min = A[j];
				max = A[i];
				A[i] = min;
				A[j] = max;
			}
		};
		printf("\n La %deme valeur est : %d . \n", i, A[i]);
	}
	printf("donnez les valeurs du tableau : ");
	int Tab[10];
	for (i=0;i<9;i++){
		printf("Donnez la valeur suivante du tableau :");
		Tab[i] = scanf("");
	}
	for (i=0;i<9;i++){
		printf("%d, ",Tab[i]);
	}for (i=0; i<14; i++){
		for (j=i+1; j<14; j++){
			if(Tab[i] > Tab[j]){
				min = Tab[j];
				max = Tab[i];
				Tab[i] = min;
				Tab[j] = max;
			}
		};
		Tab[i] = Tab[i];
		printf("\n La %deme valeur est : %d . ", i, Tab[i]);
	}
	
}
