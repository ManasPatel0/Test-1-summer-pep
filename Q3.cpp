#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[200005];

    for(int i=0;i<n;i++)
        cin>>a[i];

    int k;
    cin>>k;

    long long ans = -1000000000;

    for(int i=0;i<n;i++)
    {
        long long sum = 0;

        for(int j=i;j<n && j<i+k;j++)
        {
            sum+=a[j];

            if(sum>ans)
                ans=sum;
        }
    }
    cout<<ans;
    return 0;
}