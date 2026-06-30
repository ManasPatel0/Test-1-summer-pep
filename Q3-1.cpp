#include <iostream>
using namespace std;
int getMaxProfit(int a[], int n, int k) {
    int ans=-1000000000; 
    for (int i=0;i<n;i++) {
        int sum=0;
        for (int j=i;j<n && j<i+k;j++) {
            sum+=a[j];
            if(sum>ans)
                ans=sum;
        }
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    int a[200005];
    for (int i=0;i<n;i++)
        cin>>a[i];

    int k;
    cin>>k;

    cout<<getMaxProfit(a, n, k);
    return 0;
}
