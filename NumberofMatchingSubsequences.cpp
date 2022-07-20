class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
     vector<vector<int>> charInd(26);
        for(int i= 0; i< s.size();++i){
            charInd[s[i]-'a'].push_back(i);
        }
        int count = 0;
        for(auto word : words){
            bool isSubseq  = true ;
            int lastInd= -1;
            for(char c:word){
                auto it  = upper_bound(charInd[c-'a'].begin(),charInd[c-'a'].end(),lastInd);
                if(it == charInd[c-'a'].end()){
                    isSubseq = false;
                    break;
                }
                else lastInd = *it;
            }
            if(isSubseq) {
                count++;
            }
        }
    return count ;
    }
};
