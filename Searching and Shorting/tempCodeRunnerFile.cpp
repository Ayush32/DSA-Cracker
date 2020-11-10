 int a = 0;
    int b = 0;
    int count  = 1;
    for(int i = 0;i<n;i++){
        if(arr[i] == arr[i+1] && count < n){
            b = count;
            a = arr[i];
        }
        else{
            count++;
        }
    }
    cout << a << " " << b;