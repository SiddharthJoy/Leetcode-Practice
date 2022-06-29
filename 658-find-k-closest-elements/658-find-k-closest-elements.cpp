class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int> > pq;
        vector<int> v;
        for(auto it: arr){
            pq.push({abs(it - x),it-x});
            if(pq.size() > k) pq.pop();
        }
        
        
        while(pq.size()){
            v.push_back(x + pq.top().second);
            pq.pop();
        }
        
        sort(v.begin(),v.end());
        
        return v;
        
    }
};