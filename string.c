#include <stdio.h>
#include <string.h>

int main(void){
	
	//字元 要用單引號''
	char aa='A';	// char aa=65 也可以宣告變數值為ASCII碼為65的字元
	printf("ch: %c\n",aa);	//%c為字元格式,印出字元
	printf("ch字元碼: %d\n",aa);	//%d為整數格式,印出字元碼
	
	//字串 要用雙引號""
	//要在字串的最後面加入一個空(null)字元 '\0'
	char bb[13]="hellow world\0";
	printf("%s\n",bb);	//%s為字串格式,印出字串
	
	char cc[]="hellow world";
	printf("%s\n",cc);
	printf("字串長度: %d\n",strlen(cc)); //函數strlen需要include <string.h>
	
	//中文字串 多位元組字元(multibyte character)
	//中文字並非一個位元組,使用Big5時是2位元組,使用UTF-8是3位元組
	//因此在宣告字元時要加[]
	char dd[]="伍";
	printf("中文字: %s\n",dd);
	
	long ee = 124000L;	//長整數命名為 long int, 其中int可省略
	short ff = 123;	//短整數命名為 short int, 其中int可省略
	unsigned long gg = 12345000L;	//無號整數僅能儲存0及正整數
	printf("長整數:%d\n", ee);
	printf("短整數:%d\n", ff);
	
	char beep='\a';
	printf("%c", beep);
	printf("ASCII of beep=%d", beep);
			
	return 0;
}