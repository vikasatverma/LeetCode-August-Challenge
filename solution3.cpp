class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num<1){
            return false;
        }
        if(num==1)
            return true;
        const string s = bitset<32> (num).to_string();
        
        const auto loc1 = s.find('1'); 
      
        const auto loc2= (s.substr(loc1+1)).find('1');
        
        if(size(s.substr(loc1+1))%2==0  && loc2==string::npos)
        
        return true;
        return false;
    }
};
