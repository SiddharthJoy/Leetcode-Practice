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
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode *ptr;
        ListNode *a,*b;
        
        ptr = head;
        
        int cnt = 1;
        
        while(ptr){
            cnt++;
            ptr = ptr -> next;
        }
        
        int n = cnt;
        
        ptr = head;
        
        cnt = 1;
        
        while(head){
            if(cnt == k){
                a = head;
            }
            if(cnt == n - k){
                b = head;
            }
            head = head -> next;
            cnt++;
        }
          
        swap(a->val,b->val);
        
        return ptr;
    }
};