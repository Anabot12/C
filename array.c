#include <stdio.h>
int main()
{
    int marks[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j; j < 4; j++)
        {
            printf("enter the value of %d,%d element of the array \n", i, j);
            scanf("%d", &marks[i][j]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j; j < 4; j++)
        {
            printf("the value of array  %d,%d element is %d\n", i, j, marks[i][j]);
        }
    }
}
{

	//Two dimensional array
	int Matrice[3][3]; 
	printf("This Program will print no. from 1-9 in matrice form : \n\n");
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			printf("Enter no. (1-9) : ");
			scanf("%d", &Matrice[i][j]);
		}
	}
	printf("\n\n\n");
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			printf("%d\t", Matrice[i][j]);
		}
		printf("\n");
	}

	printf("\n\n\n So that's the matrice form of no from 1-9");
	return 0;
}