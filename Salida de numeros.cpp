#include <stdio.h>

int main() {
	int i, j, rows = 7;
	
	for (i = 1; i <= rows; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d ", j);
		}
		printf("\n");
		if (i == 4) {
			break;
		}
	}
	
	for (i = 3; i >= 1; i--) {
		for (j = 1; j <= i; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}
	
	return 0;
}

