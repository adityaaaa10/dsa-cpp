#include <stdio.h>
using namespace std;

class ListNode{
  public:
    int data;
    ListNode *next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x), next(next) {}
};


class Solution {
    public:
        ListNode* sortList(ListNode* &head) {
           ListNode* zeroHead = new ListNode(-1);
           ListNode* oneHead = new ListNode(-1);
           ListNode* twoHead = new ListNode(-1);
           ListNode* zero = zeroHead;
           ListNode* one = oneHead;
           ListNode* two = twoHead;
           ListNode* temp = head;
        while(temp != NULL){
            if(temp->data==0){
                zero->next=temp;
                zero=temp;
            }
            if(temp->data==1){
                one->next=temp;
                one=temp;
            }
            if(temp->data==2){
                two->next=temp;
                two=temp;
            }
            temp = temp->next;
        }
        zero->next = (oneHead->next)? oneHead->next:twoHead->next;
        one->next = twoHead->next;
        two->next = NULL;
        head=zeroHead->next;
        return head;

        }
};