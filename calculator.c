#include <stdio.h>

/* A basic calculator */

int main() {
	float num[2];
	char op, exit, q;
	
	while(1)
	{
		scanf("%f%c%f", &num[0], &op, &num[1]);
		switch(op)
		{
			case '+':
			{
					printf("%f\n", num[0] + num[1]);
					break;
			}
			case '-':
			{
					printf("%f\n", num[0] * num[1]);
					break;
			}
			case '/':
			{		
					printf("%f\n", num[0] / num[1]);
					break;
			}
			case '*':
			{
					printf("%f\n", num[0] * num[1]);
					break;
			}
					
			default:
			{		
					printf("invalid operation!\n");
					break;
			}
										
		}
		exit = getchar();
		if(exit == 'q') break;		
	}
	return 0;
}
		 

