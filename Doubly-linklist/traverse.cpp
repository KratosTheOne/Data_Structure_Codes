
//!https://www.tutorialspoint.com/cplusplus-program-to-implement-doubly-linked-list
#include<iostream>
using namespace std;
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* head = NULL;

void insert(int newdata){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = newdata;
    newnode->prev = NULL;
    newnode->next = head;
    if(head != NULL)
    head->prev = newnode;
    head = newnode;
}
void display_forward() {
   struct Node* ptr;
   ptr = head;
   while(ptr != NULL) {
      cout<< ptr->data <<" "<<endl;
      ptr = ptr->next;
   }
}

void display_backward() {
    struct Node* ptr = head;
    //ptr = head;
    if(head == NULL){
        cout<<"EMpty";
    }
    else{
        while(ptr->next != NULL){
            ptr=ptr->next;
        }
        while(ptr != NULL)
        {
            cout<< ptr->data <<" ";
            ptr = ptr->prev;
        }
    }
    
}
int main() {
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The doubly linked list is: ";
   display_forward();
   display_backward();
   return 0;
}