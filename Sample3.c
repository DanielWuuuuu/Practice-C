//Allman Type Code

#include <stdio.h>
#include <stdlib.h>


//Callback Function Declare
typedef void (*Sunday)(void);       //Sunday
typedef void (*Monday)(void);       //Monday
typedef void (*Tuesday)(void);      //Tuesday
typedef void (*Wednesday)(void);    //Wendesday
typedef void (*Thursday)(void);     //Thursday
typedef void (*Friday)(void);       //Friday
typedef void (*Saturday)(void);     //Saturday

typedef void (*DayCbf)(void);        //Day Callback Function

//Enum Declare
enum EEweek
{
  SUN_DAY=0,
  MON_DAY=1,
  TUE_DAY=2,
  WED_DAY=3,
  THU_DAY=4,
  FRI_DAY=5,
  STA_DAY=6,
};

typedef enum EEweek Eweek;

//Struct Declare
struct TTweek
{
  Eweek Today;    //Today

  Sunday      SUN;
  Monday      MON;
  Tuesday     TUE;
  Wednesday   WED;
  Thursday    THU;
  Friday      FRI;
  Saturday    SAT;
};

typedef struct TTweek Tweek;
typedef struct TTweek *pTweek;

//Prototype Declare
void Do_Reg(pTweek ptrday,Eweek Day,DayCbf DayCb);
void Do_UnReg(pTweek ptrday,Eweek Day);

void Do_Sleep(void);
void Do_Eat(void);
void Do_Study(void);
void Do_Rest(void);
void Do_Work(void);
void Do_Jog(void);


int main(void)
{
  //Scheduler
  Tweek Week;
  
  Do_Reg(&Week,SUN_DAY,Do_Sleep);
  Do_Reg(&Week,MON_DAY,Do_Study);
  Do_Reg(&Week,TUE_DAY,Do_Jog);
  Do_Reg(&Week,WED_DAY,Do_Rest);
  Do_Reg(&Week,THU_DAY,Do_Eat);
  Do_Reg(&Week,FRI_DAY,Do_Rest);
  Do_Reg(&Week,STA_DAY,Do_Rest);

  Week.MON();
  Week.TUE();
  Week.WED();
  Week.THU();
  Week.FRI();
  Week.SAT();
  Week.SUN();

  Do_UnReg(&Week,SUN_DAY);
  Do_UnReg(&Week,MON_DAY);
  Do_UnReg(&Week,TUE_DAY);
  Do_UnReg(&Week,WED_DAY);
  Do_UnReg(&Week,THU_DAY);
  Do_UnReg(&Week,FRI_DAY);
  Do_UnReg(&Week,STA_DAY);

  return 0;
}


//Function List
void Do_Sleep(void)   {  printf("Sleeping...\n"); }
void Do_Eat(void)     {  printf("Eatting...\n");  }
void Do_Study(void)   {  printf("Study...\n");    }
void Do_Rest(void)    {  printf("Resting...\n");  }
void Do_Work(void)    {  printf("Working...\n");  }
void Do_Jog(void)     {  printf("Jogging....\n"); }


void Do_Reg(pTweek ptrday,Eweek Day,DayCbf DayCb)
{
  ptrday->Today=Day;

  switch(Day)
  {
    case SUN_DAY:      ptrday->SUN=DayCb;   break;
    case MON_DAY:      ptrday->MON=DayCb;   break;
    case TUE_DAY:      ptrday->TUE=DayCb;   break;
    case WED_DAY:      ptrday->WED=DayCb;   break;
    case THU_DAY:      ptrday->THU=DayCb;   break;
    case FRI_DAY:      ptrday->FRI=DayCb;   break;
    case STA_DAY:      ptrday->SAT=DayCb;   break;
    default:
      printf("Regist Fail\n");
      break;
  }
}

void Do_UnReg(pTweek ptrday,Eweek Day)
{
  switch(Day)
  {
    case SUN_DAY:      ptrday->SUN=NULL;   break;
    case MON_DAY:      ptrday->MON=NULL;   break;
    case TUE_DAY:      ptrday->TUE=NULL;   break;
    case WED_DAY:      ptrday->WED=NULL;   break;
    case THU_DAY:      ptrday->THU=NULL;   break;
    case FRI_DAY:      ptrday->FRI=NULL;   break;
    case STA_DAY:      ptrday->SAT=NULL;   break;
    default:
      printf("UnRegist Fail\n");
      break;
  }
}















