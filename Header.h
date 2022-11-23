#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
  int data;
  struct node *next;
}NODE,* PNODE,** PPNODE;

void InsertFirst(PPNODE Head,int);
void Display(PNODE Head);
void Reverse(PNODE Head);
void DisplayPallindrome(PNODE Head);
void DisplayProduct(PNODE Head);
void DisplaySmall(PNODE Head);
void DisplayLarge(PNODE Head);
