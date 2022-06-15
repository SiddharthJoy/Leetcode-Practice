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
    int k;
    void remove(ListNode* node){
        if(node -> next == NULL){
            k--;
            return;
        }
       
        remove(node->next);
        k--;
        if(k == -1) node -> next = node -> next -> next;
    }
    
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        k = n;
        remove(head);
        if(k > -1) head = head -> next;
        return head;
    }
    
};