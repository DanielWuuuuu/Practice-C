/***********指標***********/
#include <stdio.h>
#define SIZE 5

int main(void){
	int i;
	int arr[SIZE]={0, 1, 2, 3, 4};
	int *ptr;		//宣告指向int型態的指標變數ptr
	int *ptr2;
	ptr=&arr[2];	//將arr[2]的位址設定給指標ptr，指標ptr指向變數arr[2]
	/************************************************************
		陣列含兩種資料:	1. 數值				ex: arr[0]
						2. 位址				ex: &arr[0]
					
		指標含三種資料:	1. (別人的)數值		ex: *ptr
						2. (別人的)位址		ex: ptr
						3. 指標自己的位址	ex: &ptr
	
		ptr=&arr[2]的步驟:
			*ptr		arr[2]				*ptr<-------arr[2]
			ptr	------->&arr[2]		==>		ptr -------->&arr[2]	
			&ptr							&ptr
	************************************************************/
	
	printf("陣列元素:");
	for(i=0; i<SIZE; i++)
		printf("%6d ", arr[i]);
	printf("\n");
	
	printf("陣列位址:");
	for(i=0; i<SIZE; i++)
		printf("%x ", &arr[i]);
	printf("\n");
	
	printf("ptr=&arr[2]時的資訊: ");
	printf("\t\t數值:%d,\t位址:%x,\t指標位址:%x\n", *ptr, ptr, &ptr);	/*列印出ptr的數值、位址及指標的位址*/
																		/*由於第10行arr[2]將位址傳給ptr，因此數值(*ptr)及位址(ptr)均等於arr[2]的數值及位址*/
	
	ptr=&arr[4];	//將arr[4]的位址設定給ptr
	printf("ptr=&arr[4]時的資訊: ");
	printf("\t\t數值:%d,\t位址:%x,\t指標位址:%x\n", *ptr, ptr, &ptr);
	
	*ptr=9;	//將數值9設定給*ptr，其位址及指標的位址均未變更
	printf("將數值9設定給*ptr後的資訊:");
	printf("\t數值:%d,\t位址:%x,\t指標位址:%x\n", *ptr, ptr, &ptr);
	
	printf("經過指標變動後的陣列元素:");
	for(i=0; i<SIZE; i++)
		printf("%2d", arr[i]);
	printf("\n");
	
	ptr2=ptr;
	printf("指標ptr2的資訊:");
	printf("\t\t\t數值:%d,\t位址:%x,\t指標位址:%x\n", *ptr2, ptr2, &ptr2);
	/************************************************************
		ptr2=ptr的步驟:
			*ptr2		*ptr		*ptr2<------*ptr		*ptr2<-----arr[4]
			ptr2 ------->ptr	==>	ptr2 ------->ptr	==>	ptr2------>&arr[4]
			&ptr2		&ptr		&ptr2		&ptr		&ptr2
	************************************************************/
}