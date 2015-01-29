#include <stdio.h>

main()
{
	int i,j;
	printf("Start running run1.c\n");
	for(i=0;i<=100000;i++)
		for(j=0;j<=100000;j++)
			printf("%d + %d = %d\n",i,j,i+j);
	printf("Completed running run1.c\n");
}
