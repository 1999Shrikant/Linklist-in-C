#include"Header.h"

void InsertFirst(PPNODE Head,int iNo)
{
  PNODE newn=NULL;
  
  newn=(PNODE)malloc(sizeof(NODE));
  newn->data=iNo;
  newn->next=NULL;
  
  if(*Head==NULL)
  {
    *Head=newn;
  }
  else
  {
    newn->next=*Head;
    *Head=newn;
  }
}

void Display(PNODE Head)
{
  while(Head!=NULL)
  {
    printf("|%d|->",Head->data);
    Head=Head->next;
  }
  printf("NULL\n");
}

void Reverse(PNODE Head)
{
  int iDigit=0,iNo=0,iRev=0;
  while(Head!=NULL)
  {
     iNo=Head->data;
     iRev=0;
     while(iNo!=0)
     {
        iDigit=iNo%10;
        iRev=(iRev*10)+iDigit;
        iNo=iNo/10;
     }
     printf("Reverse of data |%d| is:|%d|\n",Head->data,iRev);
     Head=Head->next;
  }
}

void DisplayPallindrome(PNODE Head)
{
  int iRev=0,iDigit=0,iNo=0;
  while(Head!=NULL)
  {
    iNo=Head->data;
    iRev=0;
    while(iNo!=0)
    {
       iDigit=iNo%10;
       iRev=(iRev*10)+iDigit;
       iNo=iNo/10;
    }
    if(Head->data==iRev)
    {
      printf("Number |%d| is pallindrome\n",iRev);
    }
    Head=Head->next;
   }
}

void DisplayProduct(PNODE Head)
{
   int iDigit=0,iNo=0,iPro=1;
   while(Head!=NULL)
   {
     iNo=Head->data;
     iPro=1;
     while(iNo!=0)
     {
       iDigit=iNo%10;
       if(iDigit==0)
       {
         iNo=iNo/10;
       }
       else
       {
         iPro=iPro*iDigit;
         iNo=iNo/10;
       }
     }
     printf("Product of |%d| is :|%d|\n",Head->data,iPro);
     Head=Head->next; 
   }
}

void DisplaySmall(PNODE Head)
{
  int iSmall=0,iDigit=0,iNo=0;
  while(Head!=NULL)
  {
     iNo=Head->data;
     iSmall=Head->data%10;
     while(iNo!=0)
     {
       iDigit=iNo%10;
       if(iSmall>iDigit)
       {
         iSmall=iDigit;
       }
       iNo=iNo/10;
     }
     printf("Smallest digit in |%d| is :|%d|\n",Head->data,iSmall);
     Head=Head->next;
  }
}

void DisplayLarge(PNODE Head)
{
    int iLarge=0,iDigit=0,iNo=0;
    while(Head!=NULL)
    {
       iNo=Head->data;
       iLarge=Head->data%10;
       while(iNo!=0)
       {
          iDigit=iNo%10;
          if(iLarge<iDigit)
          {
             iLarge=iDigit;
          }
          iNo=iNo/10;
       } 
       printf("Largest digit in |%d| is :|%d|\n",Head->data,iLarge);
       Head=Head->next;
   }
}

