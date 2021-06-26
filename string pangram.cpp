#include<bits/stdc++.h>
using namespace std;
void checkIfPangram(string str) 
{
    transform(str.begin(),str.end(),str.begin(),::tolower);
    set<char>st;
    int i=0;
    while(str[i]!='\0')
    {
        st.insert(str[i]);
        i++;
    }
    if(st.size()==26)
    {
        cout<<"THE STRING IS A PANGRAM AS THE STRING CONSISTS ALL THE ALPHABETS"<<endl;
    }
    else
    {
        cout<<"THE STRING IS NOT A PANGRAM AS THE STRING DOES NOT CONSISTS ALL THE ALPHABETS"<<endl;
    }
}
int main()
{
	string s;
	cout<<"ENTER A SRING TO CHECK WHETHER A STRING IS PANGRAM OR NOT."<<endl;
	cin>>s;
	checkIfPangram(s);
}
