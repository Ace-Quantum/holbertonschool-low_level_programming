#include <stdio.h>

int findMaximum(int *numbers)
{
	int temp;
	int i = 0;

	temp = numbers[i];

	i++;

	while(numbers[i])
	{
		if (temp < numbers[i])
			temp = numbers[i];
		i++;
	}

	return(temp);
}
