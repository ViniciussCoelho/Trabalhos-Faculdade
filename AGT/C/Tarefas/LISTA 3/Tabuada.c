#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x = 1;
	int y;
	int n;
	
	printf("Digite um valor: ");
	scanf("%d", &n);
	
	while( x <= 10 ){
		y = x * n;
		printf("%d x %d = %d \n", x, n, y);
		x++;
	}

	return 0;
}
