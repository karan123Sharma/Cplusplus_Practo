#include<iostream>
using namespace std;
class Node{
    public:
    int Data;
    Node * next;

    Node(int Val){
        Data = Val;
        Node * next = NULL;
    }
};
void InsertAtFirst(Node * &head,int Val){
     Node * New_Node = new Node(Val);
    New_Node->next = head;
    head = New_Node;
}
void InsertAtLast(Node * &head,int Val){
    Node * New_Node = new Node(Val);
    if(head == NULL){
        head = New_Node;
    }
    Node * Temp = head;
    while(Temp->next!=NULL){
        Temp->next;
    }
    Temp->next = New_Node;
}
void Display(Node *head){
    Node *Temp = head;
    while(Temp->next!=NULL){
        cout<<Temp->Data<<"->";
        Temp = Temp->next;
    }
    cout<<"NULL"<<endl;
}
bool Search(Node *head,int key){
    Node *Temp = head;
    while(Temp!=NULL){
        if(Temp->Data == key){
            return true;
        }
        Temp = Temp->next;

    }
    return false; 
}

int main(){
    Node *head = NULL;
    InsertAtLast(head,3);
    InsertAtLast(head,5);
    Display(head);
    cout<<"HEllo"<<endl;
    cout<<Search(head,5);
}
