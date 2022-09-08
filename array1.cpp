#include <iostream>
using namespace std;
int main (){
int n;
int arr[n]; 
cout<<"Enter the number of data you want store i this array";
cin>>n;
cout<<"Enter your data.";
for (int j = 0; j<n; j++)
{
    cin>>arr[j];
}
cout<< "your data"<<endl;

for (int i = 0; i <n; i++)
{
  cout<<arr[i]<<" ";   
}


return 0;
}