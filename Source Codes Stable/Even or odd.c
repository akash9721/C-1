#include <stdio.h>

void main()
	{
		int n;
		printf("Enter a number:\n");
		scanf("%d", &n);
		if (n == 0)
			printf("Zero is neither odd nor even.");
		else if (n % 2 == 0)
			printf("%d is a even number.\n", n);
		else
			printf("%d is a odd number.\n", n);
	}
