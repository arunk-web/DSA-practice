#include<bits/stdc++.h>
using namespace std;

struct Node {
    public:
        int data;
        Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

Node* solution(Node* h1, Node* h2){
    int carry = 0;
    Node* dummy = new Node(-1);
    Node* temp = dummy;
    

    while(h1 != NULL || h2 != NULL){
        int sum = carry;
        
        if(h1 != NULL){
            sum += h1->data;
            h1 = h1->next;
        }

        if(h2 != NULL){
            sum += h2->data;
            h2 = h2->next;
        }
        
        Node* node = new Node(sum%10);
        carry = sum/10;

        temp->next = node;
        temp = temp->next;
    }

    if(carry != 0){
        temp->next = new Node(carry);
        temp = temp->next;
        temp->next = NULL;
    }
    
    Node* head = dummy->next;
    delete dummy;
    return head;

}

Node* arrtoLL(vector<int> &arr,int size){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1 ; i < size ; i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    mover->next = NULL;
    return head;
}

void printlist(Node* h1){
    Node* temp = h1;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }

    cout<<"NULL";
}


int main() {
    int n,m;  cin>>n>>m;
    vector<int> v1(n);
    vector<int> v2(m);

    for(int i = 0 ; i < n ; i++){
        cin>>v1[i];
    }

    for(int j = 0 ; j < m ; j++){
        cin>>v2[j];
    }


    Node* h1 = arrtoLL(v1,n);
    Node* h2 = arrtoLL(v2,m);
    
    Node* head = solution(h1,h2);

    cout<<head->data;

    printlist(head);

    return 0;
}