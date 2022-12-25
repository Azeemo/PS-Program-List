// Program for finding word count in the Paragraph

#include<bits/stdc++.h>
using namespace std;
int  coumt = 0 ;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define alice cout<<"Alice"<<endl;
#define bob cout<<"Bob"<<endl;
int function(){

}

int main(){

	string s;
	getline(cin,s);
	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] == ' ' )
		{
			coumt++;
		}
	}

cout<<(coumt+1)<<endl;
return 0 ;

}
