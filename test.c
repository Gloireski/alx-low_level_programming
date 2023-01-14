#include <string.h>
#include <stdio.h>

int main()
{
	char esther[10];
	int i = 0;

	printf("entrer un prenom\n");
	scanf("%s", esther);
	/**
	 * while (esther[i] != '\0')
	{
		printf("ascii: %d, hexa: %x", esther[i], esther[i]);
		i++;
	}*/
	//avec for
	for (i = 0; i < strlen(esther); i++)
	{
		printf("ascii: %d, hexa: %x", esther[i], esther[i]);
	}
	printf("\n");
	return (0);
}
