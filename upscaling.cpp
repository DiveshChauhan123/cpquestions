
#include <iostream>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k=2*n;
        char arr[k][k];
        for(int i=0;i<k;i+=4)
        {
            for(int j=0;j<k;j+=4)
            {
                arr[i][j]='#';
                arr[i+1][j]='#';
                arr[i+1][j+1]='#';
                arr[i][j+1]='#';
            }
        }
        for(int i=2;i<k;i+=4)
        {
            for(int j=2;j<k;j+=4)
            {
                arr[i][j]='#';
                arr[i+1][j]='#';
                arr[i+1][j+1]='#';
                arr[i][j+1]='#';
            }
        }
        for(int i=0;i<k;i+=4)
        {
            for(int j=2;j<k;j+=4)
            {
                arr[i][j]='.';
                arr[i+1][j]='.';
                arr[i+1][j+1]='.';
                arr[i][j+1]='.';
            }
        }
        for(int i=2;i<k;i+=4)
        {
            for(int j=0;j<k;j+=4)
            {
                arr[i][j]='.';
                arr[i+1][j]='.';
                arr[i+1][j+1]='.';
                arr[i][j+1]='.';
            }
        }
        for(int i=0;i<k;i++)
        {
            for(int j=0;j<k;j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}