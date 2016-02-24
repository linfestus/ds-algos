nclude <vector>
#include <iostream>

using namespace std;

struct Node{
    int value;
    Node *next;
};

Node *createNode(int data){
    Node *newNode = new Node;
    newNode->value = data;
    newNode->next = NULL;
    return newNode;
}

Node *deleteNode(Node *head,int data){
    
    Node *temp = head;
    
    if(temp->value == data)
        head = head->next;
    
        while(temp->next!=NULL){
            if(temp->next->value==data){
                temp->next = temp->next->next;
                return head;
            }
            temp = temp->next;
        }
        
    return head;
    
}

Node *append(Node *head, int data){
    
    Node *newNode = createNode(data);
    
    if(head == NULL){
        head = newNode;
    }
    else{
        Node *temp = head;
        while (temp->next!=NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}

void printList(Node *head){
    
    Node *temp = head;
    
    while (temp!=NULL) {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
}
int main() {
    Node *head = NULL;
    int n,a;
    
    cout<<"How many elements in the list? \n";
    cin>>n;
    
    for (int i=0; i<n; i++) {
        cin>>a;
        head = append(head, a);
    }
    
    printList(head);
    cout<<"\nElement to delete?\n";
    cin>>a;
    head = deleteNode(head, a);
    printList(head);
    
    return 0;
}



