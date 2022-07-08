class Solution {
public:
    string reverseWords(string s) {
 
        
        string temp = "";
        string ans=  "";
        int l = 0;
        int h = s.length()-1;
        while(l<=h){
             bool t=0;
        for(auto c:temp){
            if(c!=' ') t=1;
        }
           char ch= s[l];
        if (ch != ' ') {
            temp += ch;
        } else if (ch == ' ' &&  t) {
            if (ans!="") ans = temp + " " + ans;
            else ans = temp;
            temp = "";
        }
        l++;
        }
        bool t=0;
        for(auto c:temp){
            if(c!=' ') t=1;
        }
         if (temp!="" && t) {
        if (ans!="") ans = temp + " " + ans;
        else ans = temp;
        }
        return ans;
    }
};
