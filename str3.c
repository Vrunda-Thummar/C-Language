#include<stdio.h>

int main()
{
 
	char str1[50],str2[50],str3[50];
	int i = 0, j;
	
	printf("Enter value : ");
	scanf("%[^\n]s",&str1);

	printf("Enter value : ");
	scanf("%[\n]s",&str2);

	for(int i = 0; str1[i] != '\0'; i++)
	{

		str3[j] = str1[i];

		j++;
	}

	for(int i = 0; str2[i] != '\0'; i++)
	{

		str3[j] = str2[i];

		j++;
	
	}

	str3[j] = '\0';

	printf("joint str : %s",str3);

	return  0;

}