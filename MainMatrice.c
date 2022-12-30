#include "BiblioMatrice.h"
int main()
{
	int **M1;
	M1=Allocation(3,3);
	Saisie(M1,3,3);
	Afficher(M1,3,3);
	Liberation(M1,3,3);
	return 0;
}
