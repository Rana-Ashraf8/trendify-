#include<iostream>
using namespace std;
struct node 
{
    /* data */
    int data;
    node* next;

};
void insertNode(int value);




int main (){

}
void insertNode(int value){
    node*New_node;
    New_node=new node;
    New_node->data=value;
    // when the first node exist
    if( head == NULL){
      head= New_node;
    }
}
