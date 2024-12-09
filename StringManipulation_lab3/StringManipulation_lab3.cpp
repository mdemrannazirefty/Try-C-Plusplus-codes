#include<iostream>
#include<string>

using namespace std;


void encode(string s,int j)
{
  for(int i=j;i<s.length();i+=j+1)
  {
     s[i]=s[i]+2;

  }
  cout<<"Updated String: "<<s<<endl;

}

int main()
{
    string s="I am a student";
    encode(s,2);

    string s1="I am a Teacher";
    encode(s1,3);

    return 0;

}
