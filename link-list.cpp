#include<bits/stdc++.h>
using namespace std;


class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAThead( node* &head, int val){
    node* n=new node(val);

    n->next=head;
    head=n;
}


void insertATtail(node* &head, int val){

    node* n=new node(val);

    if(head==NULL){
        head=n;
        return;
    }

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=n;
}


node* reverse(node* &head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}


void display(node* head){
    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}


bool search(node* head,int key){
    node* temp=head;

    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}


int main(){
    node* head=NULL;
    insertATtail(head,1);
    insertATtail(head,2);
    insertATtail(head,3);
    insertAThead(head,4);
    //display(head);

    node* newhead= reverse(head);
    display(newhead);
    //cout<<search(head,2)<<endl;


}