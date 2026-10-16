#include<bits/stdc++.h>
using namespace std;
 
class Node{
    public:
        int data;
        Node* next;
        Node(int val){
            data = val;
            next = nullptr;
        }
};
 
int main(){
    int n;
    cin>>n;
    Node* head;
    Node* tail;
 
    // Node* n1 = new Node(10);
    // n1->next = new Node(20);
    // n1->next->next = new Node(30);
    // n1->next->next->next = new Node(40);
    // n1->next->next->next->next = new Node(50);

// INSERTION AT BEGINNING
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        Node* newNode = new Node(a);
        newNode->next = head;
        head = newNode;
    }



// INSERTION AT END
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        if(i==0){
            head = tail = new Node(a);
        }else{
            tail->next = new Node(a);
            tail = tail->next;
        }
    }
    Node* temp = head;
 
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
 
    return 0;
}
 