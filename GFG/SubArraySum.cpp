// Example 1:

// Input:
// N = 5, S = 12
// A[] = {1,2,3,7,5}
// Output: 2 4
// Explanation: The sum of elements 
// from 2nd position to 4th position 
// is 12.


vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
      vector<int> res;
       int l = 0;
        int r = 1;
        int sum = arr[l];
        while (l <n) {
            if (sum == s) {
                res.push_back(++l);
                res.push_back(r);
                break;
            }
            if (sum < s && r<n ) {
                sum += arr[r];
                r++;
            } else {
                sum -= arr[l];
                l++;
            }
       } 
        if(res.size()==0) res.push_back(-1);
        return res;
    }
};
