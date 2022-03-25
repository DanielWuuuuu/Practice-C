//AllMan Type Style
#include <stdio.h>
#include <stdlib.h>

//Macro Declare


//Callback Function Declare
int    (*intcb)(int x1,int x2);
double (*dbcb)(double x1,double x2);

//Prototype Declare
int isum(int x,int y);
int isub(int x,int y);
double dsum(double x,double y);
double dsub(double x,double y);

//Main Code
int main(void)
{

  printf("[Regsit Callback Function Start]\n");
  //Regist Callback Function
  intcb=isum;         //Regist sum
  dbcb=dsum;          //Regist sum
  printf("[Regsit Callback Function Finish]\n");

  printf("[Excute Callback Function Start]\n");
  intcb(10,7);        //Excute Callback Function
  dbcb(11.1,22.2);    //Excute Callback Function
  printf("[Excute Callback Function Finish]\n");


  printf("[Regsit Callback Function Start]\n");
  //Regist Callback Function
  intcb=isub;         //Regist sub
  dbcb=dsub;          //Regist sub
  printf("[Regsit Callback Function Finish]\n");

  printf("[Excute Callback Function Start]\n");
  intcb(10,7);        //Excute Callback Function
  dbcb(22.2,11.1);    //Excute Callback Function
  printf("[Excute Callback Function Finish]\n");

  return 0;
}

//Function : isum
//Descript : Add Two Integer Value
int isum(int x,int y)
{
  printf("x + y = %d\n",x+y);
  return x+y;
}

//Function : isub
//Descript : Sub Two Integer Value
int isub(int x,int y)
{
  printf("x - y = %d\n",x-y);
  return x-y;
}

//Function : dsum
//Descript : Add Two Double Value
double dsum(double x,double y)
{
  printf("x + y = %f\n",x+y);
  return x+y;
}

//Function : dsub
//Descript : Sub Two Double Value
double dsub(double x,double y)
{
  printf("x - y = %f\n",x-y);
  return x-y;
}

