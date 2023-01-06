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

// finding max element

     int max=v[0];
     for(int i=0;i<n;i++)
     {
       if(max<v[i])
       {
        max=v[i];
       }
     }
      

      int min = v[0];
      for(int i=0;i<n;i++)
     {
       if(min>v[i])
       {
        min=v[i];
       }
     }

     int sum = min + max;

     cout<<"The sum of min integer and largest interger are"<<endl<<sum;
     return 0;
}