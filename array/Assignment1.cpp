#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n";
    cin>>n;

    vector<int> v;
    int even=0;
    int odd = 0;
    

    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    for(int i=0;i<n;i++)
    {
        if(v[i]%2==0)
        {
            even=even+1;
        }
        else{
            odd=odd+1;
        }
    }
    cout<<"Even numbers are = "<<even<<endl<<"odd numbers are = "<<odd<<endl;

    return 0;

}