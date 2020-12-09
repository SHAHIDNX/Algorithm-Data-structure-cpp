//#include <stdio.h>
#include <iostream>
#include <map>
using namespace std;
void  printPair(int arr[], int n, int sum){
    map<int , int> pmap;
    for (int i=0; i<n;i++)
    {
        if ( pmap.find(sum-arr[i])!=pmap.end())
        {
        cout<<"( "<<pmap[sum-arr[i]]<<","<<i<<" )"<<endl;
        }
        pmap[arr[i]]=i;
    }
}

int main(){
 int arr[] = { 1, 5, 7, -1, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 6;
    printPair(arr, n, sum);

    return 0;
}
