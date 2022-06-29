class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        
        vector<int> v,ans;
        
        for(auto it: nums){
            if(mp[it] == 0) v.push_back(it);
            mp[it]++;
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        
        for(auto it: v){
            pq.push({mp[it],it});
            if(pq.size() > k) pq.pop();
        }
        
        while(pq.size()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans;
    }
};