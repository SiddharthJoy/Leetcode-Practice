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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *ptr,*ans;
            
        while(head){
            if(head -> val != val){
                break;
            }
            head = head -> next;
        }
        
        ptr = ans = head;
        bool f = 0;
        
        
        while(head){
            if(head->val == val){
                f = 1;  
            }
            else if(f){
                ptr -> next = head;
                ptr = head;
                f = 0;
            }
            else{
                ptr = head;
            }
            head = head -> next;
        }
        
        if(ptr) ptr -> next = NULL;
        
        return ans;
        
    }
};