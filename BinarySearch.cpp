/* created by shiv kant kumar
Follow on insta id:- real_warrrior_golu(For any query) 
*/
// Question:-  
#include<iostream>
using namespace std;
int binarySearch(int a[],int n,int key){
    // set stating and ending index
    int start=0;
    int end=n-1;
    int middle = (start + end) / 2;
    while(start<=end){
        // take mid of the list
     
        // we found a match
        if(a[middle]==key){
            return middle;
        }
        // go on right side
        else if(a[middle]<key){
            start=middle+1;
        }
        // go on left side
        else {
            start=middle-1;
        }
        int middle = (start + end) / 2;
       
        return -1;
    }
    // element is not present in list
 
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[n];
    }
    int key;
    cin>>key;
    cout<<binarySearch(a,n,key)<<endl;

    return 0;
}
