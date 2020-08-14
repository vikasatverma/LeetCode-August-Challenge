class Solution {
public:
    vector<int> findfd(int n){
        vector<int> v;
        int c=0;
        while(n>9){
            c++;
            n/=10;
        }
        v.push_back(n);
        v.push_back(c);
        return v;
    }
    string intToRoman(int n) {
        string ans = "";
        unordered_map<int,string> m;
        m[1]="I";
        m[5]="V";
        m[10]="X";
        m[50]="L";
        m[100]="C";
        m[500]="D";
        m[1000]="M";
        // m[4]=""
        /*
        4 IV
        40 XL
        400 CD
        
        9 = IX
        90 XC
        900 CM
        */
        vector<int> v;
        int zeros=0, digit=0;
        if(n>1000){
            int c = n/1000;
            if(c==3) ans = "MMM";
            if(c==2) ans = "MM";
            if(c==1) ans = "M";
            n%=1000;
            // cout<<n;
        }
        while(n>0){
            v = findfd(n);
            digit=v[0];
            zeros=v[1];
            if(digit==9){
                if(zeros==0) ans+="IX";
                if(zeros==1) ans+="XC";
                if(zeros==2) ans+="CM";
                n=n-9*pow(10,zeros);
            }
            else if(digit==4){
                if(zeros==0) ans+="IV";
                if(zeros==1) ans+="XL";
                if(zeros==2) ans+="CD";
                n=n-4*pow(10,zeros);
                
            }
            else if(digit==1){
                if(zeros==0) ans+="I";
                if(zeros==1) ans+="X";
                if(zeros==2) ans+="C";
                if(zeros==3) ans+="M";
                n=n-pow(10,zeros);
                
            }
            
            else if(digit==2){
                if(zeros==0) ans+="II";
                if(zeros==1) ans+="XX";
                if(zeros==2) ans+="CC";
                if(zeros==3) ans+="MM";
                n=n-2*pow(10,zeros);
            }
            
            else if(digit==3){
                if(zeros==0) ans+="III";
                if(zeros==1) ans+="XXX";
                if(zeros==2) ans+="CCC";
                if(zeros==3) ans+="MMM";
                n=n-3*pow(10,zeros);
                
            }
            
            else if(digit==5){
                if(zeros==0) ans+="V";
                if(zeros==1) ans+="L";
                if(zeros==2) ans+="D";
                n=n-5*pow(10,zeros);
                
            }
            
            else if(digit==6){
                if(zeros==0) ans+="VI";
                if(zeros==1) ans+="LX";
                if(zeros==2) ans+="DC";
                n=n-6*pow(10,zeros);
                
            }
            
            else if(digit==7){
                if(zeros==0) ans+="VII";
                if(zeros==1) ans+="LXX";
                if(zeros==2) ans+="DCC";
                n=n-7*pow(10,zeros);
                
            }
            
            else if(digit==8){
                if(zeros==0) ans+="VIII";
                if(zeros==1) ans+="LXXX";
                if(zeros==2) ans+="DCCC";
                n=n-8*pow(10,zeros);
                
            }
        }
        return ans;
    }
};
