sort(arr,arr+n);
    if(arr[0]==arr[n-1]){
        return -1;
    }
    int max=INT_MIN,sec_max=INT_MIN;
    for(int i=0; i<n; i++){
        if(max<arr[i]){
            sec_max=max;
            max=arr[i];
        }
      //  cout<<"max="<<max<<" "<<"sec_max="<<sec_max<<endl;
    }
    // cout<<"max="<<max<<" "<<"sec_max="<<sec_max<<endl;
    return sec_max;
    
	}
};
