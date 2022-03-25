#include <stdio.h>

#define ROW 2 //行
#define COLUMN 3 //列

int main(void){
	int matrix[ROW][COLUMN];
	
	for(int i=0; i<ROW; i++){
		for(int j=0; j<COLUMN; j++){
			matrix[i][j] = (i + 1)*(j + 1);
		}
	}
	
	for(int i=0; i<ROW; i++){
		for(int j=0; j<COLUMN; j++){
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
		//putchar('\n'); //第19行可用putchar(寫入一個字元)取代
	}
}