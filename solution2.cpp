class Solution {
public:
    bool isPalindrome(string s) {
        int i,j,len = size(s);
        // cout<<s[2];
        i=0;
        while(i<len && !isalnum(s[i])){
            i++;
        }
        // cout<<"ht"<<i;
        if(i==len)
                return true;
        
        for(i=0, j = len-1; i<j ; i++,j--){
            while(i< len && !isalnum(s[i]) )
                i++;
            while(j>-1 && !isalnum(s[j]) )
                j--;
            if(tolower(s[i])!=tolower(s[j])){
                return false;
            }
            
        }
        return true;
    }
};
