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
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        
        while(head){
            v.push_back(head -> val);
            head = head -> next;
        }
        
        vector<int> :: iterator itt;
        
        // it = v.begin();
        itt = v.end();
        itt--;
        
        for(auto it: v){
            if(it != *itt){
                return false;
            }
            itt--;
        }
        
        return true;
    }
};