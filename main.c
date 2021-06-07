#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int nombre,i;
	int fact;
    do{
        printf("Entrez un nombre Positif : ");
        scanf("%d", &nombre);
    }while(nombre <= 0);

    fact = 1;
    for(i = 2; i < nombre; i++)
    {
        fact = fact * i;
    }

	printf("%d ! = %d", nombre, fact);

	

	return 0;
}
