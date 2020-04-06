#include<stdio.h>
#include<stdlib.h>

void plus_moins(int a,int b)
{
	if (a > b)
		printf("plus\n");
	else if (a < b)
		printf("moins\n");
	else
		printf("Bingo\n");
}

int main()
{
	int a;
	int b;
	printf("Entrez votre valeur\n");
	scanf("%d",&a);
	b =(rand()%100)+1;
	printf("Valeur a trouver est : %d \n",b);

	while ( b != a )
	{
		printf("La valeur entrer n'est pas valide veuillez ressayer svp !\n");
		scanf("%d",&a);
	}
	plus_moins(a,b);
	return 0;
}
















