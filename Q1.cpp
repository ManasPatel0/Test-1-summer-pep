#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string key[100], value[100];

    for(int i=0;i<n;i++)
    {
        cin>>key[i]>>value[i];
    }

    string path;
    cin>>path;

    for(int i=0;i<n;i++)
    {
        if(path==key[i])
        {
            cout<<value[i];
            return 0;
        }
    }

    cout<<"None";

    return 0;
}