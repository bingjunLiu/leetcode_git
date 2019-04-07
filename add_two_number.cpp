/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 *};
 */
#include <iostream>
class Solution {
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (l1==NULL &&l2==NULL) return NULL;
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        int a= l1->val+l2->val;
        ListNode* P=new ListNode(a%10);
        P->next=addTwoNumbers(l1->next,l2->next);
        if(a>=10) P->next=addTwoNumbers(P->next,new ListNode(1));
        return P;
    }
};