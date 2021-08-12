#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;

    int m1[n][m];
    int m2[m][k];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin>>m1[i][j];
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<k;j++)
        cin>>m2[m][k];
    }

    int ans[n][k];
    for (int i=0;i<n;i++){
        for(int j=0;j<k;j++)
        cin>>ans[i][j];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            for(int t=0;t<m;t++)
            {
                ans[i][j]= m1[n][m]*m2[m][k];
            }
        }
    }



    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
         cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}