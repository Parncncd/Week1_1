#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, i, M, m, j;
	scanf("%d", &n);
	int A[1000];

	for (i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	m = A[0];
	M = A[0];
	for (j = 0; j < n; j++) {
		if (A[j] < m) {
			m = A[j];
		}
		else if (A[j] > M) {
			M = A[j];
		}
		else {
		}
	}
	printf("%d", m);
	printf("\n%d", M);
	return 0;
}

