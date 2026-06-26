#include<iostream>
#include <string>
using namespace std;

int main(){
    int n,
    count=0;
    cin>>n;
    string name[100];
    for(int i=0;i<n;i++)
        cin>>name[i];

    cin>>n;
    int price[100];
    for (int i=0;i<n;i++)
        cin>>price[i];

    cin>>n;
    int weight[100];
    for (int i=0;i<n;i++)
        cin>>weight[i];

    for (int i=0;i<n;i++) {
        for (int j=0;j<i;j++) {
            if (name[i]==name[j] && price[i]==price[j] && weight[i]==weight[j]) 
            {
                count++;
                break;
            }
        }
    }
    cout << count;
    return 0;
}