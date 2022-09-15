#include<bits/stdc++.h>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    string erase,replace;
    cout<<"Enter the string to erase:- ";
    cin>>erase;
    int limit=erase.length();
    cout<<"Enter the string to replace it:- ";
    cin>>replace;
    ifstream obj("sample.txt");
    string a;
    while(getline(obj,a))
    {
        int size=a.length();
        string a1,a2;
        int flag=0;
        for(int i=0;i<size;i++)
        {
            int count=0;
            int flag=0;
            if(a[i]==erase[count])
            {
                while(count!=limit && flag==0)
                {
                    if(a[i+count]==erase[count])
                    {
                        count++;
                    }
                    else
                    {
                        flag=1;
                    }
                }
                if(flag==0)
                {
                    a1+=replace;
                    i=i+count;
                }   
            }
            a1+=a[i];
        }
        fstream sub("result.txt",ios::app);
        sub<<a1<<endl;
    }
    obj.close();
    return 0;
}
