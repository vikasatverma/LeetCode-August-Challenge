class Solution {
public:
    bool isHappy(int n) {
            if(n<0)
        return false;
        int ss = 0;
        set <int> s;
        int setsize=0;
        int newno = n;
        // cout<<size(s);
        // s.insert(1);
        // cout<<size(s);
        
        for(   s.insert(newno)   ;   setsize<size(s) && ss!=1  ;  s.insert(ss)  )
        {   
            ss=0;
            setsize = size(s);
            while(n!=0){
                ss = ss + ((n%10)*(n%10));
                n/=10;
            }
            cout<<ss<<endl;
            
            n=ss;
        }
        if(ss==1)
            return true;
        return false;
    
    }   
    
};
