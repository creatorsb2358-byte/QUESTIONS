#include <iostream>
using namespace std;


class node {
public:
    int age;
    node* next; 
    node(int val){
        age = val;
        next = NULL;
    }
};
class ll {
    node* head;
    node* tail;
    public:
    ll() {
        head = tail = NULL;
    }
    void push_front(int val){
        node* newnode = new node(val);
        if(head == NULL){
            head = tail = newnode;
        }else {
            newnode-> next = head;
            head = newnode;
        }
    }

    void push_back(int val){
        node* newnode = new node(val);
        if(head == NULL){
            head = tail = newnode;
        }else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    void pop_front(){
        if(head == NULL){
            return;
        }
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        node* temp = head;
        if(head == NULL){
            return;
        }
        while(temp->next != tail){
            temp= temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void insert(int val , int pos){
        node* temp = head;
        if(pos < 0){
            return;
        }
        if(pos == 0){
            push_front(val);
            return;
        }
        for(int i = 0 ; i<pos-1 ; i++){
            if(temp == NULL){
                cout << "invalid pos";
                return;
            }
            temp = temp->next;
        }
        node* newnode = new node(val);
        newnode->next = temp->next;
        temp->next = newnode; 
    }

    void search(int val){
        node* temp = head;
        int idx= 0;
        while(temp != NULL){
            if(temp->age == val){
                cout << idx;
            }
            temp = temp->next;
            idx++;
        }
    }

    void print_ll() {
        node* temp = head;
        while(temp != NULL){
            cout << temp->age ;
            temp = temp->next;
        }
    }

};

int main(){
    ll list;
    list.push_front(10);
    list.push_back(20);
    list.print_ll();
    return 0;
}
    
