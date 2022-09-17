#include <stdio.h>
#include <wchar.h>
main(){
	int N, min, max, i, j, cap, m;
	N = 14;
	int A[] = {8, 36, 5, 21, 7, 43, 65, 2, 23, 12, 56, 124, 75, 89, 9};
//	printf("\n Le tableau contient %d valeurs . \n", sizeof A);
	min = A[0];
	max = A[0];
	for (i=1; i<N; i++){
			if(min > A[i]){
				min = A[i];
			}
			if(max < A[i]){
				max = A[i];
			}
		}
	printf("\n Le minimum du tableau est %d . \n", min);
	printf("\n Le maximum du tableau est %d . \n", max);
	printf("\n Le tableau inverse donne : \n");
	for(i=0; i<N; i++){
		for(j=i+1; j<N+1; j++){
			cap = A[i];
			A[i] = A[j];
			A[j] = cap;
		}
	}
	for(i=0; i<N+1; i++){
		printf("%d, ",A[i]);
	}
}
