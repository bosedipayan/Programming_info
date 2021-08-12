#include<bits/stdc++.h>
using namespace std;

signed main(){

    int n,m;
    cin>>n>>m;

    int a[n][m];

    for(int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
        
    }

    int row_start=0,row_end=n-1,col_start=0,col_end=m-1;

    while(row_start<=row_end && col_start<=col_end)
    {
        for(int col=col_start;col<=col_end;col++)
        {
            cout<<a[row_start][col]<<" ";
        }

        row_start++;

        for(int row=row_start;row<=row_end;row++)
        {
            cout<<a[row][col_end]<<" ";
        }

        col_end--;

        for(int col=col_end;col>=col_start;col--)
        {
            cout<<a[row_end][col]<<" ";
        }

        row_end--;

        for(int row=row_end;row>=row_start;row--)
        {
            cout<<a[row][col_start]<<" ";
        }

        col_start++;

    }
}

/*


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int target;
    cin>>target;

    int a[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    int r=0,c=m-1;

    bool check=false;

    while(r<n && c>0){
        if(a[r][c]==target)
        {
            check=true;
        }
    }

    if(a[r][c]>target)
    {
        c--;
    }
    else{
        r++;
    }

    if(check==true){
        cout<<"Element Found";
    }
    else{
        cout<<"Element does not exists";
    }


}

*/