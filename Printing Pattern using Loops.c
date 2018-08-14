#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
	int n;
	scanf("%d", &n);
	// Complete the code to print the pattern.
	
	for (int i = 1; i <= n * 2 - 1; i++) {
		for (int j = 1; j <= n * 2 - 1; j++) {
			int currentRowDiff = i <= n ? i - 1 : n - 1 - (i - n);
			int currentColDiff = j <= n ? j - 1 : n - 1 - (j - n);
			
			int layer = currentRowDiff < currentColDiff ? currentRowDiff : currentColDiff;
			
			printf("%d ", n - layer);
		}
		printf("\n");
	}
	return 0;
}
