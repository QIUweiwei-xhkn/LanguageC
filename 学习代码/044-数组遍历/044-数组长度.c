#include<stdio.h>

int main() {
	//
	int weight[10];

	weight[0] = 101;
	weight[1] = 102;
	weight[2] = 103;
	weight[3] = 104;
	weight[4] = 105;
	weight[5] = 106;
	weight[6] = 107;
	weight[7] = 108;
	weight[8] = 109;
	weight[9] = 110;

	int weight2[] = { 100,101,102,103,104 };
	
	
	//long long num = 1000;
	//printf("%lld\n", sizeof(num));
	/*for (int i = 0; i < 10; i++) {
		printf("第%d天的体重%d\n", i+1,weight[i]);
	}*/

	// sizeof(weight2)
	printf("%lld\n", sizeof(weight2)/sizeof(int));




	for (int i = 0; i < sizeof(weight2) / sizeof(int); i++) {
		printf("第%d天的体重%d\n", i + 1, weight2[i]);
	}
}

