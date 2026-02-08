#include<bits/stdc++.h>
using namespace std;

// void printNum(int n,int sum){
//     if(n<1){
//         cout<<sum<<"\n";
//         return;
//     }
//     printNum(n-1,sum+n);
//     }

// int printNum(int n){
//     if(n==1){
//         return 1;
//     }
//     return n + printNum(n-1);
// }

// void factorial(int n,int result){
//     if(n<=1){
//         cout<< result;
//         return;
//     }
//     factorial(n-1,result*n);
// }

// int factorial(int n){
//     if(n==1) return 1;
//     return n*factorial(n-1);
// }

// int main(){
//     int n= 5;
//     cout<<factorial(n);
// }     

int binarySearch(int arr[],int n,int key){
    int start=0, end=n-1; //5
    while(start<=end){
        int mid=(start+end)/2;//2
        if(arr[mid]==key){      //if single array element
            return mid;
        }
        else if(arr[mid]<key){      //2nd half
            start=mid+1;
        }
        else{       //1st half
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[]={-1,0,3,5,9,12};
    int n=sizeof(arr)/sizeof(int);
    cout << binarySearch(arr,n,20);
}