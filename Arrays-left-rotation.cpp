#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,i;
    cin>>m>>n;
    int a[m];
    for( i = 0;i<m;i++)
    cin>>a[i];
    while(n!=0){
   int x = a[0];
    for(i=1;i<=m;i++)
       a[i-1]=a[i];
       a[m-1]=x;
       --n;
        }
   for( i =0;i<m;i++)
    cout<<a[i]<<" ";
}
 
