/* ZHAN Che */
#include<stdio.h>
#define N 2
int symétrique_matrice(int mat[N][N])
{
	int matrice[N][N];
	int i,j;
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
		matrice
		if(mat[i][j]==mat[j][i])
	return 1;
		else
	return 0;
}
void transpose_matrice(int mat[N][N])
{
	int i,j,a;
	for(i=0;i<N;i++)
	for(j=0;j<N;j++)
	{
	a=mat[i][j];
	mat[i][j]=mat[j][i];
	mat[j][i]=a;
	}
}
void afficher_matrice(int mat[N][N])
{
	int i,j;
	for(i=0;i<N;i++)
	{
	for(j=0;j<N;j++)
	printf("%i" ,mat[i][j]);
	printf("\n");
	}
}

void main()
{	 
	FILE*fich;
    int i,j;
	int mat[N][N];
	char nom[20];
		printf("donnez le nom du fichier");
		scanf("%s",&nom);
	fich=fopen("nom","r");
			for(i=0;i<N;i++)
				for(j=0;j<N;j++)
					do
						fscanf("nom","%i",&mat[i][j]);
					while(!feof(fich));
	
	if(symétrique_matrice(mat)==1)
		printf("Cette matrice est symétrique");
	else
	{
		transpose_matrice(mat);
		afficher_matrice(mat);
	}
}