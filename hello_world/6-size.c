/**
 * function_name - Short description, single line
 * @parameterx: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
#include<stdio.h>
int main(void)
{
	printf("Size of a char: %u byte(s)\n",sizeof(char));
	printf("Size of a short: %u byte(s)\n",sizeof(short));
	printf("Size of a int: %u byte(s)\n",sizeof(int));
	printf("Size of a double: %u byte(s)\n",sizeof(double));
	printf("Size of a long: %u byte(s)\n",sizeof(long));
	printf("Size of a long long: %u byte(s)\n",sizeof(long long));
	printf("Size of a float: %u byte(s)\n",sizeof(float));
	printf("Size of a long double: %u byte(s)\n",sizeof(long double));
	return (0);
}
