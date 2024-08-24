#include <stdio.h>
#include <stdlib.h>



int main() {

	/*bit wise operator on real data
	 * we can't apply bitwise operator on real data
	 * it will give us compilation error
	 *
	float a = 2.5;
	float c = 3.5;
	float b = (a & c);

	printf("value of b = %f\n",b);
	*/

	/* unsigned char: 0 - 255, singned char : -128 to 127
	 *
	char a = 128;
	printf("a =%d\n",a);  //it will print -128
	printf("a = %c\n",a); // this will print ascii of -128 ,which mostly
			      // not printable
	unsigned char b = 257;
	printf("b =%d\n",b);
	*/

	/* 2's complement = 1's complement + 1
	 * 1's complement = 2's complement - 1
	 * 2's complement of a positive number is always
	 * -ve of that number
	 *

	int a = 20;
	printf("~a = %d\n",~a);
	printf("2's complement of a = %d\n", ~a + 1);
	*/

	/* if right openrand is -ve or its more than the number
	 * of bits , then result will e undefined or zero
	 *
	int a = 1;
	a = a >> -20;
	printf("a = %d\n",a);
	a = a >> 32;
	printf("a = %d\n",a);
	*/

	/* Toggle 5-th bit
	 *
	int a = 10;

	int mask = 0x20;

	a = a ^ mask;  // 5-th bit  = 0
	a = a ^ mask; //5-th bit = 1
	*/

	/* bit filed in structure
	 *

	struct data {
		unsigned a:2;
		unsigned b:5;
	};

	struct data val;
	val.a = 3;
	val.b = 5;

	printf("a = %d\n",val.a);
	printf("b = %d\n",val.b);

	val.a = 50;  //invalid outside range
	
	printf("size :%ld\n",sizeof(val.a)); // we can't apply sizeof operator on bit field
					     // also we can't use & (address) operator on bit field
	*/	

	return 0;
}
