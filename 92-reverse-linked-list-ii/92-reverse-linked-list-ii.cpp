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
    
    queue<ListNode *> q;
    void reverse(int cnt,ListNode* left, ListNode* right, int mid,bool f)
    {
        
        if(left == right){
            if(q.size()){
                //cout << q.front() -> val <<endl;
                swap(q.front() -> val,right -> val);
                q.pop();
            }
            return;
        }
        
        if(cnt < mid + f){
            q.push(left);
         }
  
        reverse(cnt + 1,left->next,right,mid,f);
        
        if(cnt > mid){
            if(q.size()){
                swap(q.front() -> val,left -> val);
                q.pop();
            }
        }
    }
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *here = head;
        int cnt = 1;
        
        while(head){
            if(cnt == left) break;
            head = head -> next;
            cnt++;
        }
        
        ListNode *lft = head;
        
        while(head){
            if(cnt == right) break;
            head = head -> next;
            cnt++;
        }
        
        ListNode *rght = head;
        
        cout << lft -> val <<" "<<rght->val<<endl;
        
        reverse(left,lft,rght,(left + right) / 2, (left + right)%2);
        
        return here;
        
    }
};