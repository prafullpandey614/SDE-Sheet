class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxans = 0;
        int l = 0;
          unordered_set<char>st;
        for(int r=0;r<s.size();++r){
          
            if(st.find(s[r])!=st.end()){
                
                while(l<r && st.find(s[r])!=st.end()){
                    st.erase((s[l]));
                    l++;
                }
                
            }
            st.insert(s[r]);
            maxans = max(maxans,r-l+1);
        }
        return maxans;
    }
};
