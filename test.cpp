#include<iostream>
#include "test.h"
using namespace std;
class Node
{
public:
    int data;
     Node*Next;
 };
 class linkedlist{
public:
Node*head;

linkedlist(){
    head=NULL; 
}
bool isempty(){
    if(head==NULL){
        return true;
    }
    else 
    return false;
}

  void insertFirst(int value){
    //add to head 
    if (isempty()){
       Node*newnode ;
       newnode->data=value;
       newnode->next=NULL;
       head=newnode;
    }
    else {
        Node*newnode;
        newnode->data=value;
        newnode->next=head;
        head=newnode;
    }
  }
  

void diplay(){
    Node* q= head;
    while (q != NULL)
     {
        cout<<q->data<<"";
        q=q->next;
     }
}
 int count(){
        int counter;
    Node* q= head;
    while (q != NULL)
     {
       counter++;
        q=q->next;
     }
    return counter;   
}
 bool isfound(int key){
   bool found= false;
   Node*q=head ;
   while (q!=Null)
   {
    /* code */
    if (Q->data==key)
    {
        /* code */
        found= true;

    }
    return found;

   }
   

 }
};
int main(){
linkedlist lis;
if(lis.isempty())
   cout<<"the list is empty";
   else
   cout<<"rle list contains"<<lis.count()<<endl;
   int item ;
   cout << "enter the insert in the list \n" ;
   cin>>item;
   lis.insertFirst(item);
   lis.diplay();
 cout << "enter the insert in the list \n" 
   cin>>item;
   lis.insertFirst(item);
   lis.diplay();
    cout << "enter the insert in the list \n" 
   cin>>item;
   lis.insertFirst(item);
   lis.diplay();
    cout << "enter the insert in the list \n" 
   cin>>item;
   lis.insertFirst(item);
   lis.diplay();
    cout << "enter the insert in the list \n" 
   cin>>item;
   lis.insertFirst(item);
   lis.diplay();







    return 0;
}
int NewFunction()
{
    cin >> item;
}