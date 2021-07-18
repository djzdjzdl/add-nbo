#include<stdio.h>
#include<stdint.h>
#include <netinet/in.h>

using namespace std;

int nbo(char *a, char *b) {
	uint32_t aa, bb;
	fread(&aa, sizeof(aa), 1, fopen(a, "r"));
	fread(&bb, sizeof(bb), 1, fopen(b, "r"));

	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)", ntohl(aa),ntohl(aa), ntohl(bb), ntohl(bb), (ntohl(aa) + ntohl(bb)), (ntohl(aa) + ntohl(bb)));

}
