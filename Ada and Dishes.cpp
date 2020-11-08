#include <iostream>
#include<bits/stdc++.h>  
#define long long int
using namespace std;

int main() {
	// your code goes here
	int n;
	std::cin >> n;
	while(n--){
	    int d;
	    cin>>d;
	    vector<int> v;
	   
	    while(d--){
	        int t;
	        std::cin >> t;
	       // cout<<t;
	        v.push_back(t);
	    }
	    make_heap(v.begin(),v.end());
	    int s1=0,s2=0;
	    while(!v.empty()){
	        int max = v.front();
	        pop_heap(v.begin(), v.end()); 
            v.pop_back(); 
            if(s1>s2)
                s2+=max;
            else
                s1+=max;
	    }
	    
	    cout<<max(s1,s2)<<endl;
	    
	}
	return 0;
}
