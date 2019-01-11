// Selection sort, from small to large

#include <stdio.h>

#define N 20

void main()
{
	int i, j, p, t, a[N];
	printf("Input %d numbers:\n", N);
	for(i=0; i<N; i++) {
		scanf("%d", &a[i]);
	}
	for (i=0; i<N-1; i++) {
		p = i;
		for (j=i+1; j<N; j++)
			if(a[p]<a[j]) p = j;    // p points to the smallest number
		// Pick the smallest number and exchange with i
		t = a[i];
		a[i] = a[p];
		a[p] = t;
	}
	for (i=0; i<N; i++) {
		printf("%d ", a[i]);
		if ((i+1)%10==0)
			printf("\n");
	}
}
