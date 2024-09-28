#include<iostream>

using namespace std;

struct Node  //Linked list structure
{
    int data;  //store's value
    Node* link; // store's address
};




int main()
{
    Node* A;  //point's to the first node i.e(Head)
    A = nullptr;
    Node* temp = new Node(); //create a new node
    temp->data=2;
    temp->link=nullptr;
    A = temp;


    temp = new Node(); //create a new node
    temp->data = 4;
    temp->link = nullptr;

    Node* temp1 = A;
   
    //cout << "Data : "<< A->data <<" Address : "<<A->link;

    while (temp1->link != nullptr)
    {
        temp1 = temp1->link;
        cout << "Data : "<< temp1->data <<" Address : "<<temp1->link;
    }
    A=temp1;
    cout << "Data : "<< A->data <<" Address : "<<A->link;
}