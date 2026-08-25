class Solution {
public:
    string removeDuplicates(string s, int k) {
        string ans = "";
        vector<int> count;

        for (int i = 0; i<s.length(); i++){
            char ch = s[i];
            if (ans.empty() || ch != ans.back()){
                ans.push_back(ch);
                count.push_back(1);
            }
            else{
                ans.push_back(ch);
                count.back()++;
                if (count.back()==k){
                    for (int j = 0; j<k; j++){
                        ans.pop_back();
                    }
                    count.pop_back();
                }
            }
        }
        return ans;
        
    }
};