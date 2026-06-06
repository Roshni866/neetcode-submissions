class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> res;
        for (string s :strs){
            vector<int> count(26,0);
            for(char c:s){
                count[c-'a']++;
            }
            string key="";
            for(int i=0;i<26;i++){
                key+='#' + count[i];
            }
            res[key].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto& [s,lst]:res){
            ans.push_back(lst);
        }
        return ans;
        
    }
};
