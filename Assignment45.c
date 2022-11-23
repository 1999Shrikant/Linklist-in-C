#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
  int data;
  struct node *next;
}NODE,* PNODE,** PPNODE;

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

int main()
{
    PNODE first=NULL;
    int iChoice = 1,iNo=0,iRet=0;
    
    while(iChoice!=0)
    {
       printf("\n--------------------------------------------------------------\n");
       printf("Enter operation to performe on link list          \n");
       printf("1:Insert data at first node                       \n");
       printf("2:Display link list                               \n");
       printf("3:Display revese number of each node in link list \n");
       printf("4:Display pallindrome numbers in link list        \n");
       printf("5:Display product of Digits in number in link list\n");
       printf("6:Display smallest digit in numbers of link list  \n");
       printf("7:Display largest digit in nembers of link list   \n");
       printf("0:Terminate the link list                         \n");
       scanf("%d",&iChoice);
       printf("\n---------------------------------------------------------------\n");
       
       switch(iChoice)
       {
           case 1:
                  printf("Enter Data to insert\n");
                  scanf("%d",&iNo);
                  InsertFirst(&first,iNo);
                  break;
                  
           case 2:
                  Display(first);
                  break;
                  
           case 3:
                  Reverse(first);
                  break;
           
           case 4:
                  DisplayPallindrome(first);
                  break;
                  
           case 5:
                  DisplayProduct(first);
                  break;
            
           case 6:
                  DisplaySmall(first);
                  break;
           
           case 7:
                  DisplayLarge(first);
                  break;
                  
           case 0:
                  printf("Link list is now terminated\n");
                  break;
                         
           default:
                   printf("Enter Valid Choice\n");
                   break;              
       }
    }
    
   return 0; 
}
