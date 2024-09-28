#include <iostream>
using namespace std;



class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=nullptr;
    }
};

void InsertStart(node* &head, int val){
    node* n= new node(val);
    n->next=head;
    head= n;
}

void InsertEnd(node* &head, int val){
    node* n= new node(val);

    if(head==nullptr){
        head = n;
        return;
    }
    node* temp1= head;
    while(temp1->next != nullptr){
        temp1=temp1->next;
    }
    temp1->next = n;
}

void InsertN(node* &head,int val, int index){
    node* n = new node(val);
    if(head==nullptr){
        head=n;
        return;
    }
    node* temp=head;
    int count = 0;
   while (temp != nullptr && count < index)
        {
            if (count == index - 1)
            {
                if (temp->next != nullptr)
                {
                    n->next = temp->next;
                }
                temp->next = n;
                cout << "new node added at index " << index << " !" << endl;
                break;
            }
            count++;
            temp = temp->next;
        }
}

bool Search(node* head, int key){
    node* temp=head;
    while (temp!=nullptr)
    {
        /* code */
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

node* Reverse(node* &head){
    node* prev=nullptr;
    node* current=head;
    node* next;
    while(current!= nullptr){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    return prev;
}

void print(node* head){
    node* temp = head;
  
    while (temp != nullptr){
        cout<< temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"Null"<<endl;
}

int main(){
    node* head=nullptr;
    InsertEnd(head,3);
    InsertStart(head,4);
    InsertEnd(head,7);
    InsertEnd(head,12);
    InsertStart(head,2);
    InsertN(head,10,3 );
    print(head);
    node* newhead=Reverse(head);
    print(newhead);
    int found=Search(head,2);
    cout<<found;
}