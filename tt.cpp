#include<bits/stdc++.h>

using namespace std;

int main() {

    long long int t,n,i,pos1,pos2,pos3;
    cin>>t;
    while(t--) {
        cin>>n;

        long long int arr[n+1];

        for(i=1;i<=n;i++) {
            cin>>arr[i];
        }

        pos1 = -1,pos2 = -1,pos3 = -1;
        for(i=2;i<=n-1;i++) {

            if(arr[i-1]<arr[i] && arr[i]>arr[i+1]) {
                pos1 = i-1;
                pos2 = i;
                pos3 = i+1;
                break;
            }

        }

        if(pos1!=-1) {
            cout<<"YES"<<endl;
            cout<<pos1<<" "<<pos2<<" "<<pos3<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

}