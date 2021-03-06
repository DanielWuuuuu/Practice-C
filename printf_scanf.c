#include <stdio.h>

/****************************************************************
 * 使用printf時要指定格式,以下為幾個可用的格式指定碼:			*
 * %c：以字元方式輸出											*
 * %d：10 進位整數輸出											*	
 * %o：以 8 進位整數方式輸出									*
 * %u：無號整數輸出												*
 * %x、%X：將整數以 16 進位方式輸出								*
 * %f：浮點數輸出												*
 * %e、%E：使用科學記號顯示浮點數								*
 * %g、%G：浮點數輸出，取 %f 或 %e（%f 或 %E），看哪個表示精簡	*
 * %%：顯示 %													*
 * %s：字串輸出													*
 * %lu：long unsigned 型態的整數								*	
 * %p：指標型態													*
 ****************************************************************/

int main(void){
	/************************************************************
	 *							printf							*
	 ***********************************************************/
	//將訊息輸出至主控台,"This is a test!\n"當中包括換行字元共16個字元
	int count = printf("This is a test!\n");
	printf("%d\n", count);
	
	//輸出浮點數時可指定精度
	printf("原浮點數:%f\n", 12.345);
	printf("指定精度浮點數:%.2f\n", 12.345);
	printf("預留字元寬度:%7.2f\n", 12.345);	//不足部分由空白字元補上,12.34只佔5個字元,所以在最前面補上2個空白
	printf("向右靠齊:%6.2f\n", 12.345);
	printf("向左靠齊:%-6.2f\n", 12.345);	//在%之後指定負號則表示靠左對齊
	
	//若事先無法決定字元寬度,則可使用*
	//*將被之後的第一個引數所取代
	printf("%*d\n", 1, 1);	//預留1個字元
	printf("%*d\n", 2, 1);	//預留2個字元
	printf("%*d\n", 3, 1);	//預留3個字元
	
	//若是字串可用%.*s
	//顯示字串中0到多個字元,實際的字元數可在第二個參數指定
	printf("%.*s\n", 3, "Daniel");
	printf("%.*s\n", 5, "Daniel");
	printf("%.*s\n", 7, "Daniel");
	
	
	/************************************************************
	 *							scanf							*
	 ***********************************************************/
	//取得使用者的輸入可使用scanf函式
	//必須告知程式儲存資料的變數位址.為此,必須使用&取址運算子,這會將變數的記憶體位址取出,
	//則輸入的數值就知道變數的記憶體位址並儲存之(但字元陣列名稱本身就有位址資訊,故不用&來取址)
	int input;
    printf("請輸入數字：");
    scanf("%d", &input);
    printf("你輸入的數字：%d\n", input);
	printf("你輸入數字的位址：%x\n", &input);	//輸出指定數字的位址
	
	//scanf在接受輸入時可接收多個值,也可指定輸入的格式
	int num1, num2;
	printf("請輸入兩個數字，請用空白區隔：");
    scanf("%d %d", &num1, &num2);
    printf("%d+%d=%d\n", num1, num2, num1+num2);

    printf("請再輸入兩個數字，請用,區隔：");
    scanf("%d,%d", &num1, &num2);
    printf("%d+%d=%d\n", num1, num2, num1+num2);
	
	//scanf可指定接受的長度避免緩衝區溢位
	char buf1[10];	//包括結尾空字元,buf只能再填入9個字元
	printf("請輸入字串:");
	scanf("%9s", buf1);	//設定buf只能接受9個字元,超過的字元會留在輸入緩衝區
	printf("指定長度為9的字串:%s\n", buf1);

	//scanf可指定接受的字元集合,連續讀入符合集合的字元並放入陣列中,直到不符合為止
	char buf2[5];

	scanf("%*[^\n]");
	scanf("%*c");		// 清除輸入緩衝區
	
    printf("請輸入 1 到 5 的字元：");
    scanf("%[1-5]", buf2);
    printf("輸入的字元為 %s\n", buf2);

    scanf("%*[^\n]");
	scanf("%*c");		// 清除輸入緩衝區

    printf("請輸入 XYZ 任一字元：");
    scanf("%[XYZ]", buf2);
    printf("輸入的字元為 %s\n", buf2);
	
	return 0;
}