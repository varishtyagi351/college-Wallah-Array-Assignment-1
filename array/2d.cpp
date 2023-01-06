#include<iostream>
#include<vector>
using namespace std;

int rectangleSum(vector<vector<int>> &matrix,int l1,int r1,int l2,int r2)
{
   int sum = 0;
    
    for(int i = l1; i <= l2; i++)
    {
       for(int j = r1; j <= r2; j++)
       {
        sum+=matrix[i][j];
       }
    }
    return sum;
}
int main()
{
    int n, m;

    cout<<" Enter the value of n and m ";
    cin>>n>>m;

    vector<vector<int>> matrix( n, vector<int> (m));
    
    for(int i = 0; i < n; i++ )
    {
        for(int j = 0; j < m; j++)
        {
           cin>>matrix[i][j];
        }
    }

// For Print The Matrix?

 for(int i = 0; i < n; i++ )
    {
        for(int j = 0; j < m; j++)
        {
           cout<<matrix[i][j]<<" ";
        }cout<<" "<<endl;
       
    }

// For Making function?
int l1, r1, l2, r2;
cout<<" Enter The value of rows and columns items ";
cin>>l1>>r1>>l2>>r2;


int sum = rectangleSum(matrix,l1,r1,l2,r2);
cout<<sum<<endl;


}