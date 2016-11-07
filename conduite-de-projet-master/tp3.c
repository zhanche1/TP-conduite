

#include <stdio.h>
#define N 8
int matrice [N][N];
 
void init_matrice(char mat[N][N])
{
	int i,j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
			mat[i][j]='.';
	}
}

void afficher_matrice(int mat[N][N])
{
	int i,j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
			printf("%c ",mat[i][j]);
		printf("/n");
	}
}


void coord_valides(int x, int y)
{
    	if(x<1||x>N||y<1||y>N)
       	 	return 0;
    	else
        	return 1;
}	


void tour(char mat[N][N], int x, int y)
{
    	printf("Tour :\n");
    	int i;
    	for(i = 0; i < N; i++)
        	mat[i][y] = '*';
    	for(i = 0; i < N; i++)
       		mat[x][i] = '*';
    	mat[x][y] = 't';
}

int main()
{
    	char matrice[N][N];
    	int x, y;
    	printf("Saissez les cooordonnees: ");
    	scanf("%i%i",&x,&y);
    	if(x>N||y>N)
    	{
        	printf("Saissez les cooordonnees entre 0 et 8.\n");
       		return 0;
    	}
 
    	x--;
    	y--;
 
    	init_matrice(matrice);
    	tour(matrice,x,y);
    	afficher_matrice(matrice);
    
}