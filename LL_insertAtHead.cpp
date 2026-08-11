#include<bits/stdc++.h>
using namespace std;

//part A constructor formation 

class node{
    public:
    int data;
    node*next;

         //constructor 1
    node(int data1,node*next1){
        data=data1;
        next=next1;
    }

              //constructor 2
        node(int data1){
            data=data1;
            next=nullptr;
        }
    };  //semicolon kyu ??

     class solution {
            public:
                   node*insertathead(node*head,int newdata){
                   node*newnode=new node(newdata,head);
                   return newnode;

        }

        void printlist(node*head){
            node*temp=head;
            while(temp!=nullptr){
                cout << temp->data << " " ;
                temp=temp->next;

            }
            cout<<endl;
        }
    };

        int main(){
        solution sol;
        node* head = new node (2);//yha newnode name wla nhi h balki new walal h
        head->next=new node(3);
        cout<<"original list: ";
        sol.printlist(head);

        head=sol.insertathead(head,999);
        cout<<"after length at head ";
        sol.printlist(head);

        return 0;

    }
    

