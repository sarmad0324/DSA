#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data=val;
        next=nullptr;
        prev=nullptr;
    }
};

void InsertHead(node* &head, int val){
    node * n = new node(val); 
    n->next=head;
     if(head!=nullptr){
        head->prev=n;
    }
    head =n;
}

void InsertEnd(node* &head, int val){
    node * n = new node(val); 

    if(head==nullptr){
        InsertHead(head, val);
        return;
    }
    node* temp1= head;
    while(temp1->next != nullptr){
        temp1=temp1->next;
    }
    temp1->next = n;
    n->prev=temp1;
}
void Print(node* head){
    node* temp = head;
  
    while (temp != nullptr){
        cout<< temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"Null"<<endl;
}

int main(){
    node* head=nullptr;
     InsertEnd(head,4);
      InsertEnd(head,4);   
     InsertEnd(head,4);
      InsertEnd(head,4);
   
    Print(head);
    InsertHead(head,5);
     
      Print(head);

}