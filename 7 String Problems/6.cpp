// user defined function for compare of two strings
#include<bits/stdc++.h>
using namespace std;
int  coumt = 0 ;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define alice cout<<"Alice"<<endl;
#define bob cout<<"Bob"<<endl;
int function1 (string str1,string str2){

if (str1.size()!=str2.size())
{  return -1;}

else{
	for (int i = 0; i < str1.size(); ++i)
	{
		if (str1[i]!=str2[i])
		{
		   return -1;
		}

	}
	return 0;
}

}

int main()
{

  string s1,s2;
  getline(cin,s1);
getline(cin,s2);

int k = function1 (s1,s2);
if (k==0)
{
	cout<<"strings are same "<<endl;
}
else{
	cout<<"not equal"<<endl;
}

return 0 ;

}
