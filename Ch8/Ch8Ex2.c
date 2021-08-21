/* Output of characters and their ASCII code
   filename: Ch8Ex2.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>
#define SPACE ' '

int main()
{
	int ch;
	int i; 				/* index for loop */
	
	printf("Enter any characters(EOF to exit):\n");
	for(i = 0; (ch = getchar()) != EOF; i++) {
		if(i % 10 == 0)
			printf("\n");
		if(ch >= SPACE)
			printf("%2c(%3d) ", ch, ch);
		else if(ch == '\t')
			printf("\\t(%3d) ", ch);
		else if(ch == '\n') {
			printf("\\n(%3d) \n", ch);
			i = -1;
		}
		else
			printf("^%c(%3d) ", ch+64, ch);
	}
	
	
	return 0;
}	
