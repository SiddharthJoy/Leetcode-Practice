/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        map<ListNode*,int> mp;
        
        ListNode *ptr;
        
        ptr = head;
        
        bool f = 0;
        
        while(ptr != NULL){
            mp[ptr]++;
            if(mp[ptr] > 1){
                f = 1;
                break;
            }
            ptr = ptr->next;
        }
        
        return f;
    }
};