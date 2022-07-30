class Solution {
public:
    vector<int> freqFinder(string s){
        vector<int>v(26,0);
        for(char c:s){
            v[c-'a']++;
        }
        return v ;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int>finalFreq(26,0);
        for(auto c:words2){
            vector<int>freq = freqFinder(c);
            for(int i = 0; i<26;++i){
                finalFreq[i] = max(freq[i],finalFreq[i]);
            }
        }
        vector<string>ans ;
        for(auto c:words1){
            bool flag = 1;
            vector<int>temp = freqFinder(c);
            for(int i = 0; i<26;++i){
                if(finalFreq[i]>temp[i]){
                    flag  = 0;
                    break;
                }
              
            }
              if(flag) ans.push_back(c);
        }
        return ans ;
        
        
    }
};
