/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *HEAD;
    
    void reverse(ListNode* ptr,ListNode* prev){
        if(ptr -> next == NULL){
            ptr-> next = prev;
            HEAD = ptr;
            return ;
        }
         
        reverse(ptr->next,ptr);
        ptr -> next = prev;
    } 
    
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return NULL;
        reverse(head,NULL);
        return HEAD;
    }
};