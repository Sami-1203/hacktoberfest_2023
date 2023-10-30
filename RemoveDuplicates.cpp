#include<iostream>
using namespace std;
// the input array should be sorted! 
 int removeDuplicates(int arr[],int n)
    {
        if(n<=0)
        {
            return n;
        }
        int count = 0 ;
        for(int i=0;i<n;i++)
        {
            if (arr[i] != arr[count]) 
        {
           count++;
            arr[count] = arr[i];
        }
        }
        return count+1; 

    }
    int main()
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; ++i) {
        cin >> arr[i]; // Input array elements
    }

    int newSize = removeDuplicates(arr, n);

    // Print the size of the new array
    cout << "Size of new array: " << newSize << endl;

    // Print the modified array
    for (int i = 0; i < newSize; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}







    



        
    


   
