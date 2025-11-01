#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
#define null 0
using namespace std;

 struct node
{
  int data;
    node *next;
};
node *first,*temp,*ttemp,*p,*q,*r,*ptemp,*pttemp,
*ntemp,*nttemp;

void init()
{
 first=temp=ttemp=null;
}
void addnode(int val)
{
  temp=first;
  while(temp->next!=null)
  {
  temp=temp->next;
  }
  ttemp=new node;
  ttemp->data=val;
  ttemp->next=null;
  temp->next=ttemp;
}
void createfirst(int val)
{
 first=new node;
  first->data=val;
  first->next=null;
}
void disp()
{
 temp=first;
 while(temp!=null)
 {
   cout<<temp->data<<endl;
   temp=temp->next;
 }
}
// void add_after(int x,.int y)
//{
// temp=first;
//while(temp->data!=x)
//temp =temp->next;
// ttemp=temp->next;
//p=new node;}
// add node before a given code 
void add_before(intx,int y)
{
    temp first;
    while(temp->data!=x)
    {
        ttemp= temp;
        temp= temp->next;
    }
    p = new node;
    p->data=y;
    p->next=temp;
    ttemp->next = p;
}
//add node before first node
void add_before_first(int x)
{
    temp = new node;
    temp->data = x;
    temp->next = first;
    first = temp;
}
// add before last node
void add_before_last(int x)
{
    temp = first;
    while(temp->next !=null)
    {
        ttemp = temp;
        temp = temp->next;
    }
    p = new node;
    p->data = x;
    p->next = temp;
    ttemp->next = p;
}
//delete node after
void Del_after(int x)
{
    temp=first;
    while(temp->data!=x)
    temp = temp->next;
    ttemp  = temp->next;
    p = ttemp->next;
}                    

}
}