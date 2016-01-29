#include <stdio.h>


int main(){

	int binaryNumber = 0b11111111;
	int hexNumber = 0xff;
	char c = 0x42;


	printf("The binary Number is %d\n", binaryNumber);
	printf("The hex number is %d\n", hexNumber);
	printf("The number 10 in hex is 0x%x\n", 10);
	
	printf("Our character is %c\n", c);
	
	return 0;

}
