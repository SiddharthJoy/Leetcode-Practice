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
    
    void solve(ListNode *node,ListNode *prev){
        if(node == NULL) return;
        solve(node -> next,node);
        if(HEAD == NULL) HEAD = node;
        node -> next = prev;
    }

    
    ListNode* reverseList(ListNode* head) {
        solve(head,NULL);
		return HEAD;
    }
};