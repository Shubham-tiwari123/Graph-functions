#include <iostream>
#include "Graph.h"
using namespace std;

void Graph::undirectedGraph(){
    cout<<"Enter the number of vertices:-";
    cin>>v;
    cout<<"Enter the edges:-";
    cin>>e;
    for(i=1;i<=v;i++){
        A[i] = NULL;
    }
    i =1;
    while(i<=e){
        int flag =0;
        cout<<"\nEnter source and destinations:-";
        cin>>source>>dest;
        
        if(source == dest){
            cout<<"\nInvalid input";
            break;
        }
        else{
            temp = A[source];
            while(temp!=NULL){
                if(temp->data == dest){
                    cout<<"Edge already exists";
                    flag =1;
                    break;
                }
                temp = temp->next;	
            }
            if(flag ==0){
                newnode = new node;
                newnode->data =dest;
                newnode->next = NULL;

                newnode1 = new node;
                newnode1->data =source;
                newnode1->next = NULL;

                if(A[source]== NULL)
                    A[source] = newnode;

                else{
                    temp = A[source];
                    while(temp->next!=NULL){
                        temp = temp->next;
                    }	
                    temp->next = newnode;
                }

                if(A[dest] == NULL)
                    A[dest]= newnode1;
                else{
                    temp = A[dest];
                    while(temp->next!=NULL){
                            temp = temp->next;
                    }
                    temp->next = newnode1;
                }
                i++;
            }
        }
    }	
}

void Graph::displayGraph(){
    for(i=1;i<=v;i++){
        cout<<endl;
        cout<<i<<" ->"<<" ";
        temp = A[i];
        while(temp!=NULL){
            cout<<temp->data<<"  ";
            temp = temp->next;
        }
    }
}

void Graph::directedGraph(){
    cout<<"Enter the number of vertices:-";
    cin>>v;
    cout<<"Enter the edges:-";
    cin>>e;
    for(i=1;i<=v;i++){
        A[i] = NULL;
    }
    i =1;
    while(i<=e){
        int flag =0;
        cout<<"\nEnter source and destinations:-";
        cin>>source>>dest;
        if(source == dest){
            cout<<"\nInvalid input";
            break;
        }
        else{
            temp = A[dest];
            while(temp!=NULL){
                if(temp->data == source){
                    cout<<"Edge already exists";
                    flag =1;
                    break;
                }
                temp = temp->next;	
            }
            if(flag ==0){
                newnode = new node;
                newnode->data =dest;
                newnode->next = NULL;

                if(A[source]== NULL)
                    A[source] = newnode;

                else{
                    temp = A[source];
                    while(temp->next!=NULL){
                        temp = temp->next;
                    }	
                    temp->next = newnode;
                }
                i++;
            }
        }
    }
}
