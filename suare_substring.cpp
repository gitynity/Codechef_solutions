//https://www.codechef.com/HK362020/problems/MULSTR

#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin>>s;
	size_t n = s.size();
	//cout<<n<<endl;
	//cout<<ceil(n/2.0)<<endl;
	string product_string = s.substr(ceil(n/2.0) , n - (n/2));
	
	cout<<"product = "<<product_string<<endl;
	
	string factor_string;
	
	if(n%2!=0)
	factor_string = s.substr(0 , floor(n/2.0)+1);
	else
	factor_string = s.substr(0 , floor(n/2.0));
	
	cout<<"factor string :"<<factor_string<<endl;
	size_t len = factor_string.size();
	cout<<"length of factor string: "<<len<<endl;
	string sub_str1 = factor_string.substr(0,len/2);
	string sub_str2 = factor_string.substr(len/2  , len/2 );
	
	cout<<"factor1 = "<<sub_str1<<endl;
	cout<<"factor2 = "<<sub_str2<<endl;
	
	
	
	if(sub_str1 == sub_str2)
	{
		stringstream chef1(sub_str1);		//stringstream is used to convert string to integer , float , double , etc.
		int x = 0 , y = 0;
		chef1 >> x;
		
		stringstream chef2(product_string);
		chef2>>y;
		
		if(x*x == y)
			cout<<x<<"*"<<x<<"="<<y;
		else
			cout<<"Impossible";
		
	}
	else
		cout<<"Impossible";

	return 0;
}
