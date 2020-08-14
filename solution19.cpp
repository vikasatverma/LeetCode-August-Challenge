class Solution {
public:
    int romanToInt(string s) {
        int ans=0,f=0,i,taken=0;
        unordered_map<char,int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        
        for(i = 0; i<size(s);i++){
            if(i>0 && m[s[i-1]]<m[s[i]]){
                ans-=2*m[s[i-1]];
                ans+=m[s[i]];
            }
            else{
                ans+=m[s[i]];
            }
        }
        return ans;
    }
};
