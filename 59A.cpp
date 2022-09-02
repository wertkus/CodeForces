#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,a=0,b=0;
    cin>>s;
    for(i=0; s[i]!='\0'; i++)
    {
        if (s[i]>=65 && s[i]<=90)
            a++;
        else
            b++;
    }
    if(b>=a)
    {
        for(i=0; s[i]!='\0'; i++)
        {
            if(s[i]<97)
                s[i]+=32;
        }

            for(i=0; s[i]!='\0'; i++)
                cout<<s[i];




    }
    else
    {
        for(i=0; s[i]!='\0'; i++)
        {
            if(s[i]>90)
                s[i]-=32;
        }
            for(i=0; s[i]!='\0'; i++)
                cout<<s[i];


    }
}