#include<stdio.h>
#include<stdlib.h>


int main()
{
	int a;
	int b;
	printf("Veuillez choisir la difficulter du jeux svp : 1(Facile = illimiter) , 2(Moyen = 25) , 3(Difficile = 10)\n");
	int val;
	scanf("%d",&val);
	printf("Entrez votre valeur : ");
	scanf("%d",&a);
	b =(rand()%100)+1;
	printf("Valeur a trouver est : %d\n\n ",b);

	switch(val)
	{
		case 1:
			while ( b != a )
			{
				printf("La valeur entrer n'est pas valide veuillez ressayer svp !\n");
				scanf("%d",&a);
			}
			printf("Bingo\n");
			break;

		case 2:
			for (int x = 0; x <= 25;x++)
			{
				if ( b != a )
				{
					printf("La valeur entrer n'est pas valide veuillez ressayer svp !\n le nombre d'essaie disponible est de : %d\n", 25 - x);
					scanf("%d",&a);
				}	
				else 
				{
					printf("Bingo\n");
					break;
				}
			}
			break;

		case 3:
			for (int x = 0; x <= 10;x++)
			{
				if ( b != a )
				{
					printf("La valeur entrer n'est pas valide veuillez ressayer svp !\n le nombre d'essaie disponible est de : %d\n", 10 - x);
					scanf("%d",&a);
				}				
				else 
				{
					printf("Bingo\n");
					break;
				}
			}
			break;

		default:
			printf("Vous deviez choisir: 1 , 2 ou 3\n");
			break;
	}

	return 0;
}
















