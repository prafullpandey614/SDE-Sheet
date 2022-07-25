class Solution {
public:
    string ans = "";
    string rot(int b , string s){
        string ans = "";
        int n  =s.length();
        ans += s.substr(n-b);
        ans+= s.substr(0,n-b);
        return ans;
    }
    string add(int a,string s){
        string ans = "";
        for(int i = 0; i<s.length();++i){
            if(i%2) ans+=(s[i]-'0'+a)%10+'0';
            else ans+=s[i];
        }
        return ans ;
    }
    void dfs(string s , int a ,int b ,set<string>&v){
        if(v.find(s)!=v.end()) return ;
        v.insert(s);
        ans = min(ans,s);
        dfs(add(a,s) , a,b,v);
        dfs(rot(b,s), a,b,v);
    }
    string findLexSmallestString(string s, int a, int b) {
        ans = s;
        set<string>v;
        dfs(s,a,b,v);
        return ans ;
    }
};
