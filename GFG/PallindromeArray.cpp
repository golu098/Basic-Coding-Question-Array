// Palindromic Array 
// School Accuracy: 50.0% Submissions: 43744 Points: 0
// Given a Integer array A[] of n elements. Your task is to complete the function PalinArray. Which will return 1 if all the elements of the Array are palindrome otherwise it will return 0.

 

// Example:
// Input:
// 2
// 5
// 111 222 333 444 555
// 3
// 121 131 20

// Output:
// 1
// 0

// Explanation:
// For First test case.
// n=5;
// A[0] = 111    //which is a palindrome number.
// A[1] = 222   //which is a palindrome number.
// A[2] = 333   //which is a palindrome number.
// A[3] = 444  //which is a palindrome number.
// A[4] = 555  //which is a palindrome number.
// As all numbers are palindrome so This will return 1.

// Constraints:
// 1 <=T<= 50
// 1 <=n<= 20
// 1 <=A[]<= 10000


Solution :-
  
  for(int i=0;i<n;i++){
    	    int ans=0;
    	    int temp=a[i];
    	    while(temp>0){
    	        int r=temp%10;
    	        temp/=10;
    	        ans=(ans*10)+r;
    	        
    	    }
    	
    	    if(ans!=a[i])
    	        return 0;
    	    }
    	    return 1;
    	}
    
  
