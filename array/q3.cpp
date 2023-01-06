#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of size of array";
    cin>>n;
    
    vector<int> v;
     for(int i=0;i<n;i++)
     {
        int ele;
        cin>>ele;
        v.push_back(ele);
     }

     for(int i=0;i<n;i++)
     {
        cout<<v[i];
     }
     cout<<endl;
   

     for(int i=0;i<n;i++)
     {
       for(int j=n-1;j>i;j--)
       {
        if(v[i]<v[j])
        {
          swap(v[i],v[j]);
        }
       }
       cout<<v[i];
     }
  
     return 0;
}