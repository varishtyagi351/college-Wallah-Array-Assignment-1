 #include<iostream>
 #include<vector>
 using namespace std;
 int main()
 {
    int n;
    cout<<"Enter the element of n";
    cin>>n;

    vector<int> a;

    cout<<"Enter the element of array A"<<endl;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        a.push_back(ele);
    }

    vector<int> b;
    cout<<"Enter the element of array B"<<endl;
    for(int j=0;j<n;j++)
    {
        int num;
        cin>>num;
        b.push_back(num);
    }

    int minA = a[0];
    int minB = b[0];

    for(int i=0;i<n;i++)
    {
        if(minA>a[i])
        {
            minA=a[i];
        }
    }
     

    for(int j=0;j<n;j++)
    {
        if(minB>b[j])
        {
            minB=b[j];
        }
    }
    int sum = minA + minB;

    cout<<"The sum of minA and minB is equal to = "<<sum;
    return 0;
 }
