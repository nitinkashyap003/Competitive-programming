//
// Created by kniti on 23-10-2022.
//

/***
 * Creating Driver code for LinkedList
 */
#include "LinkedListTemplate.h"
#include "bits/stdc++.h"

using namespace std;

/***
 * defing the linked list node using struct
 */
class ListNode {
    int data;
    struct ListNode *next;

public:
    ListNode() {
        this->next = NULL;
        this->data = -1;
    }

    ListNode(int data, ListNode *prevNode) {
        this->data = data;
        this->next = NULL;
        if(prevNode != NULL)
            prevNode->next = this;
    }

    int getData() const {
        return data;
    }

    ListNode *getNext() const {
        return next;
    }

};

 void print(ListNode *head) {
    while(head != NULL) {
        cout<<head->getData()<<"->";
        head = head->getNext();
    }
    cout<<endl;
}
int main() {
     int n; // number of nodes
     int itr = n;
     ListNode *head, *prev;
     while(itr--) {
         int val;
         cin>>val;
         if(itr == n-1) {
             head = new ListNode(val, NULL);
             prev = head;
         } else {
             prev = new ListNode(val, prev);
         }
     }
//    head = first;
    print(head);
    ListNode *first = new ListNode(3, NULL);
    ListNode *second = new ListNode(5, first);
    ListNode *third = new ListNode(2, second);

    head = first;
    print(head);
}
