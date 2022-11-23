#include"Header.h"
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
