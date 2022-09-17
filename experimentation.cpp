#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
main(){
	int N, min, max, i, j, cap;
	int A[25];
	printf(" \n Donnons la taille du tableau : ");
	scanf("%d", &N);
	printf(" \n Donnons les valeurs du tableau : \n");
	for(i=0; i<N; i++){
		scanf("%d", &A[i]);
	}
	printf(" \n Le tableau est la suivante : ");
	printf(" [");
	for(i=0; i<N; i++){
		if(i!=N-1){
			printf("%d, ", A[i]);
		}else{
			printf("%d", A[i]);
		}
	}
//	i=0;
//	while (i<N){
//		if(i!=N-1){
//			printf("%d, ", A[i]);
//		}else{
//			printf("%d", A[i]);
//		}
//		i++;
//	}
	printf("] \n");
	max, min = A[0];
	for(i=1; i<N; i++){
		if(max < A[i]){
			max = A[i];
		}
		if(min > A[i]){
			min = A[i];
		}
	}
	printf(" \n Le maximum du tableau est : %d.", max);
	printf(" \n Le minimum du tableau est : %d.", min);
	for(i=0; i<N; i++){
		for(j=i+1; j<N; j++){
			cap = A[i];
			A[i] = A[j];
			A[j] = cap;
		}
	}
	printf("\n Le tableau inversé donne : ");
	printf(" [");
	for(i=0; i<N; i++){
		if(i!=N-1){
			printf("%d, ", A[i]);
		}else{
			printf("%d", A[i]);
		}
	}
	printf("] \n");
}
