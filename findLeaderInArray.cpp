#include <iostream>
using namespace std;
void  leftRight(int arr[], int n)
{
    int curr_leader=arr[n-1];
    int max_of[n];
    max_of[n-1]=arr[n-1];
       cout<<"nvalue index: "<<n<<endl;
     for (int i=n-2;i>=0; i--){
         if (arr[i] > max_of[i+1])
            {
                max_of[i]=arr[i];
            }
            else
            {
                max_of[i]=max_of[i+1];
            }
            
     }
     for (int i =0; i<n ;i++)
     {
         //cout<<arr[i]<<" . max:"<<max_of[i]<<endl;
         if(arr[i] >= max_of[i])
         {
             cout<<arr[i]<<" is leader"<<endl;
         }
     }
}
int main(){


    int a[7]={200,2,100,101,7,8,9};
    int n = sizeof(a)/sizeof(int);
    leftRight(a,n);

  return 0;
}
