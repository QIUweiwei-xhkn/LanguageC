#include<stdio.h>

typedef struct {
	unsigned char b0:1;
	unsigned char b1:1;
	unsigned char b2:1;
	unsigned char b3:1;
	unsigned char b4:1;
	unsigned char b5:1;
	unsigned char b6:1;
	unsigned char b7:1;
}Bits;

typedef union {

	Bits bits;
	unsigned char all;
}Header ;

int main() {
	Header header;
	//printf("%lld", sizeof(header));

	header.all = 0;
	printf("%d\n", header.bits.b0);
	printf("%d\n", header.bits.b1);
	printf("%d\n", header.bits.b2);
	printf("%d\n", header.bits.b3);
	printf("%d\n", header.bits.b4);
	printf("%d\n", header.bits.b5);
	printf("%d\n", header.bits.b6);
	printf("%d\n", header.bits.b7);
}