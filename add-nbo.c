#include <stdio.h>
#include <stdint.h>

int main(){
	FILE *p1 = fopen("./thousand.bin","r");
	FILE *p2 = fopen("./five-hundred.bin","r");
	uint32_t n1, n2 = 0;
	uint32_t res = 0;

	fread(&n1, sizeof(n1), 1, p1);
	n1 = ntohl(n1);

	fread(&n2, sizeof(n2), 1, p2);
	n2 = ntohl(n2);

	res = n1+n2;

	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n\n",n1, n1, n2, n2, res, res);

	fclose(p1);
	fclose(p2);

	return 0;
}
