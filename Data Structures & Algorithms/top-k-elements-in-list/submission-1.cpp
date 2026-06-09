class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int x:nums){
            mp[x]++;
        }
        vector<pair<int,int>> as;
        for(auto it:mp){
            as.push_back({it.first,it.second});

        }
        vector<int> ans;
        sort(as.begin(),as.end(),[](const pair<int,int>& a,const pair<int,int>& b){
            return a.second>b.second;});

        for(int i=0;i<k;i++){
            ans.push_back(as[i].first);
        }
        return ans;
        }

            
   

   


       
    
};
