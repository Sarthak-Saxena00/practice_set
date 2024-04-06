
#include <iostream>
using namespace std;
int main() {
    int n,s=0;
    cout<<"enter lenght";
    cin>>n;
    int arr[n];
    for(int i=1;i<=arr[n];i++){
        cin>>arr[i];
    }

    for(int i=1;i<=arr[n];i++){
        cout<<arr[i]<<" ";
    }
    for(int i=1;i<=arr[n];i++){
        s=s+arr[i];
    }
cout<<"sum="<<s;

    return 0;
}