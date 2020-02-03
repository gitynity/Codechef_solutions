//https://www.codechef.com/HK362020/problems/PLEAS

#include <bits/stdc++.h>
using namespace std;

int main() {
	long n , input;
	cin>>n;
	
	vector<int> v;
	for(int i = 0; i < n; i++)
	    {
	        cin>>input;
	        v.push_back(input);
	    }
	    
	    auto min = min_element(v.begin() , v.end());
	    auto max = max_element(v.begin() , v.end());
	    
	    if(*max == *min + (n-1))
	        cout<<"YES\n";
	    else
	        cout<<"NO\n";
	    
	return 0;
}
