#include<bits/stdc++.h>
using namespace std;
void square(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=n;j++){
            cout<<" *";
        }
        cout<<endl;
    }
    
}
int main(){
    int n;
    cin>>n;
    square(n);
    return 0;
}