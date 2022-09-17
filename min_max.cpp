#include <stdio.h>
main(){
	int min, max, i, j, n, sum;
	float mean;
	int A[25] = {8, 36, 5, 21, 7, 43, 65, 2, 23, 12, 56, 124, 75, 89, 9};
	min = A[1];
	n = 0;
	sum =0;
	for (i=0; i<14;i++){
		if (min > A[i]){
			min = A[i];
		};
		if (max < A[i]){
			max = A[i];
		};
		n++;
		sum += A[i];
	}
	mean = sum/n;
	printf("\n Le minimum du tableau est : %d", min);
	printf("\n Le maximum du tableau est : %d", max);
	printf("\n La moyenne du tableau est : %f", mean);
	scanf("Taper sur le bouton entree");
}

