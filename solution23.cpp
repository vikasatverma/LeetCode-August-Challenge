vector<int> getnext(int n, int k){
    vector<int> ans;
    n%=10;
    if(n-k>-1){
        ans.push_back(n-k);
        cout<<n-k<<" ";
    
    }    
    if(n+k<10){
        cout<<n+k<<" ";
        ans.push_back(n+k);
    }

    cout<<endl;
    return ans;
}


class Solution {
    
    
public:
    vector<int> numsSameConsecDiff(int N, int k) {
        vector<int> v;
        queue<long> ans;
              
        if(N==1){
            return vector<int>{0,1,2,3,4,5,6,7,8,9};
        }
        
        ans.push(1);
        ans.push(2);
        ans.push(3);
        ans.push(4);
        ans.push(5);
        ans.push(6);
        ans.push(7);
        ans.push(8);
        ans.push(9);
        
        
        for(int i=1; i<=N; i++){
            cout<<endl<<"i = "<<i<<"Taking only <"<<pow(10,i+1)<<endl;
            int s = size(ans);
            for(int j=0;j<s;j++){
                long n = ans.front();
                long orig = n;
                ans.pop();
                n%=10;
                cout<<"\nPopped"<<orig<<" Pushing"<<orig*10+(n-k) <<" or "<<orig*10+(n+k)<< "Pushed ";
                if(n-k>-1 && orig*10+(n-k) < pow(10,i+1)){
                    ans.push(orig*10+(n-k));
                    cout<<orig*10+(n-k)<<" ";

                }    
                cout<<"Debug "<<n+k<<" "<<orig*10+(n+k);
                if(n+k<10 && orig*10+(n+k)< pow(10,i+1)){
                    cout<<orig*10+(n+k)<<" ";
                    ans.push(orig*10+(n+k));
                }
            }
        }
        
    set<int> s;
    while (!ans.empty())
    {
        s.insert(ans.front()/10);
        ans.pop();
    }
    
        for(auto& a:s){
            v.push_back(a);
        }
        
        return v;
    }
};
