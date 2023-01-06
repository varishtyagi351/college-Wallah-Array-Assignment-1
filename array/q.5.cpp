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

    int left_ptr = 0;
    int right_ptr = n-1;

    int mid_ptr;
    for(int i=0;i<n;i++)
    {
        mid_ptr = (left_ptr + right_ptr)/2;
    }
    
    cout<<"The value of mid element in the array is = "<<a[mid_ptr];
    return 0;
 }