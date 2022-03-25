/* 氣泡排序法 */
#include <stdio.h>
#define SIZE 5

void show(int arr[]), bubble(int arr[]);


int main(void){
	int data[SIZE]={35, 23, 56, 13, 94};
	
	printf("排序前...\n");
	show(data);
	bubble(data);
	
	printf("排序後...\n");
	show(data);
	
	return 0;
}

void show(int arr[]){
	int i;
	for(i=0; i<SIZE; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void bubble(int arr[]){
	int i, j, tmp;
	int flag=0;
	for(i=1; i<SIZE && (!flag); i++){
		flag=1;
		for(j=0; j<(SIZE-i); j++){
			if(arr[j]>arr[j+1]){
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				flag=0;
			}
		}
	}
}