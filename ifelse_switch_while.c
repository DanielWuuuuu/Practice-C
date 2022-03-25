#include <stdio.h>

int main(void){
	//if else條件判斷例題
	int age = 100;
	if(age > 18){
		printf("成年\n");
	}else{
		printf("未成年\n");
	}
	
	//switch判斷例題
	printf("請輸入單一英文a~e字元");
	char input = getchar();	//接收使用者輸入字元
	switch (input){
		case 'a':
			printf("a, apple\n");
			break;
		case 'b':
			printf("b, banana\n");
			break;
		case 'c':
			printf("c, cat\n");
			break;
		case 'd':
			printf("d, dog\n");
			break;
		case 'e':
			printf("e, yeeeeeeeeeeee\n");
			break;
		default:
			printf("超出範圍了哦\n!");
	}
	
	//do while迴圈例題: 條件while放在do的下方,因此至少會執行一次
	int result = 0;
	int i = 0;
	do{
		result += 1;
		i++;
	}while(i<3);
	printf("result: %d\n", result);
	
	//指標
	char x = 10;
	char *pointer = &x;	//將x變數記憶體位置指定給pointer指標變數
	char y = *pointer;	//將pointer只到的值給定y變數
	printf("取出指標值，也是x變數值: %d", y);
	
	char xxx=&x;
	printf("%d",xxx);
}