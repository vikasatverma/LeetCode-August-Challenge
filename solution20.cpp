class Solution {
public:
    static bool sortint(vector<int> a,vector<int> b){
        return a[1]<b[1];
    }
    
    int eraseOverlapIntervals(vector<vector<int>>& v) {
           int len = v.size();
        if(len == 0 || len == 1)
            return 0;
        sort(v.begin(),v.end(),sortint);
        cout<<v[0][1];
        int count = 1;
        int end = v[0][1];
        for(int i = 1;i<len;++i){
            if(end > v[i][0])
                continue;
            end = v[i][1];
            ++count;
        }
        return len-count;

        return 1;
    }
};
