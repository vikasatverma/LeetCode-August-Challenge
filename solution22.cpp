class Solution {
public:
    vector<int> distributeCandies(int c, int n) {
        vector<int> ans(n,0);
        int needed=1,i=0;
        while(needed<c){
            // cout<<ans[0]<<" "<<c<<" "<<i<<endl;
            ans[i]+=needed;
            c-=needed;
            needed++;
            i++;
            i%=n;
        }
        ans[i]+=c;
        return ans;
    }
};
