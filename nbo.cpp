#include<stdio.h>
#include<stdint.h>
#include <netinet/in.h>

using namespace std;

int nbo(char *a, char *b) {
	//Same as HW guide, uint32
	uint32_t aa, bb;
	//reading from bin file, count 1 to read 4 bytes
	fread(&aa, sizeof(aa), 1, fopen(a, "r"));
	fread(&bb, sizeof(bb), 1, fopen(b, "r"));

	//print aa, bb, aa+bb, use ntohl for long bytes with endian
	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)", ntohl(aa),ntohl(aa), ntohl(bb), ntohl(bb), (ntohl(aa) + ntohl(bb)), (ntohl(aa) + ntohl(bb)));

}
