https://leetcode.com/problems/find-and-replace-pattern/submissions/
class Solution {
public:
    string getPattern(string &s){
        map<char,char>m;
        string ans;
        int j = 0;
        for(char c:s){
            if(m.find(c)==m.end()){
                m[c] = 'a'+j;
                j++ ;
            }
            ans.push_back(m[c]);
        }
        return ans ;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans ;
        pattern = getPattern(pattern);
        for(string s:words){
            if(getPattern(s)==(pattern)) ans.push_back(s);
        }
        return ans ;
    }
};
