#include <stdio.h>
#include "main.h"

int main()
{
	int MyArray[7];
	int* MyArrayPtr = MyArray;
	int max;

	MyArray[0] = 3;
	MyArray[1] = 5;
	MyArray[2] = 9;
	MyArray[3] = 2;
	MyArray[4] = 3;
	MyArray[5] = 6;
	MyArray[6] = 7;

	max = findMaximum(MyArray);

	printf("%d", max);
	return(max);
}
