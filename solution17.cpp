class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> m;
        for(int i=0;i<size(s);i++){
            if(m.find(s[i])==m.end()){
                m[s[i]]=1;
            }
            else
                m[s[i]]++;
        }
        int odd=0, ans = 0;
        for(auto i=m.begin();i!=m.end();i++){
                // cout<<i->first<<" "<<i->second<<endl;
                if(i->second%2==1){
                    odd = 1;
                    ans+=i->second -1;
                }
            else{
                ans+=i->second;
                // cout<<"adding"

            }
        }
        if(odd==1)
            ans++;
        return ans;
    }
};
