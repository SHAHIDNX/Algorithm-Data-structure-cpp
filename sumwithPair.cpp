//#include <stdio.h>
#include <iostream>
#include <map>
using namespace std;
void checkPair(int arr[], int n, int sum){
    map<int , int> pmap;
    for (int i=0; i<n;i++)
    {
        
            cout <<"checking: "<<sum-arr[i]<<endl;
        if ( pmap.find(sum-arr[i])!=pmap.end())
        {
            cout <<"found pair"<<endl;
            return;
        }
        
        pmap[arr[i]]=1;
    }
    
}

int main(){
 int arr[] = { 1, 5, 7, -1, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    checkPair(arr, n, sum);
    return 0;
}
