#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j;
	int **ptr;
	ptr=(int *) malloc(2*sizeof(int));
	
	for(i=0; i<2; i++)
		ptr[i]=malloc(3*sizeof(int));
	
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			printf("(%d, %d): ", i, j);
			scanf("%d", *(ptr+i)+j);
		}
	}
	
	for(i=0; i<2; i++){
		for(j=0; j<3; j++)
			printf("%3d ", *(*(ptr+i)+j));
		printf("\n");
	}
	
	free(ptr);
	
	
	
	return 0;
}

