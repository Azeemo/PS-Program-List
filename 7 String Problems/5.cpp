//Program for converting all lower case letters to upper case
// and vice versa in the given sentence
#include<bits/stdc++.h>
using namespace std;
int  coumt = 0 ;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define alice cout<<"Alice"<<endl;
#define bob cout<<"Bob"<<endl;
int function(){

}

int main()
{

  string s;
  getline(cin,s);


  for (int i = 0; i < s.size(); ++i)
  {
      if (s[i]>='A'&&s[i]<='Z')
{
      s[i]=s[i]+32;
}
else if(s[i]>='a'&&s[i]<='z'){
	s[i]=s[i]-32;
}

else{

}

  }

cout<<s<<endl;

return 0 ;

}
