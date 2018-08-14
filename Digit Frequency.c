#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	char str[1001];
	scanf("%s", str);
	int lut[10] = {0, };
	for (int i = 0; i < strlen(str); ++i) {
		if (str[i] >= '0' && str[i] <= '9') {
			++lut[str[i] - '0'];
		}
	}
	for (int i = 0; i < 10; ++i) {
		printf("%d ", lut[i]);
	}  
	return 0;
}
