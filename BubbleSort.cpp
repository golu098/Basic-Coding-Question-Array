/* created by shiv kant kumar
Follow on insta id:- real_warrrior_golu(For any query)
*/
// Question:- bubble sort 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<n-1;i++){
    
        for (int j = 0; j < n-1; j++)
        {

            if (arr[j] < arr[j+1])
            {

                swap(arr[i], arr[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}