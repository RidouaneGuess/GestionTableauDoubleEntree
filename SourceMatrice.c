#include<stdio.h>
#include<stdlib.h>
int** Allocation(int Ligne,int Colonne)       {
	int** mat;
	int i,j;
	//mat=(int**)calloc(Ligne,sizeof(int*));
	mat=(int**)malloc(sizeof(int*)*Ligne);//Création d'un tableau de Pointeur
	for(i=0;i<Ligne;i++)
		mat[i]=(int*)malloc(sizeof(int)*Colonne);//Creation d'un tableau d'entier pour chaque pointeur
							 //fin de l'allocation
	for(i=0;i<Ligne;i++)
		for(j=0;j<Colonne;j++)
			mat[i][j]=0;//initialisation de la matrice à zéro (ça ne vaut pas la peine, en cas d'allocation avec calloc, il le fait par defaut
				
	return mat;
}
void Saisie(int** mat,int Ligne,int Colonne)
{
	int i,j;
	for(i=0;i<Ligne;i++){
		for(j=0;j<Colonne;j++)
		{
			printf("\nmat[%d][%d]=",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
}
void Afficher(int **mat,int Ligne,int Colonne)
{
	int i,j;
	for(i=0;i<Ligne;i++)
	{
		printf("\n");
		for(j=0;j<Colonne;j++)
		{
			printf("%d\t",mat[i][j]);
		}
	}
}
void Liberation(int** mat, int Ligne,int Colonne)
{
	int i;
	for(i=0;i<Ligne;i++)
		if(Colonne>0)
			free(mat[i]);
	if(Ligne>0)
		free(mat);
}

