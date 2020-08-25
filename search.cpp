#include<iostream>
using namespace std;
int A[] = {1,2,3,4,7,56,78};
int length;
int n;
    
    


// int bsearch(int start, int end)
//     {    /* code */

//         int mid = (start+end)/2;
//         int m = mid;
//         if(A[mid]==n){
//         return mid;
            

//     }
//     if(A[m]<n)
//     {
//         start = m+1;
        
//         m = (start+end)/2;
//         return bsearch(start,end);

//     }
//     if(A[m]>n)
//     {
        
//         end= m-1;
//         m = (start+end)/2;
//         return bsearch(start,end);
//     }
//     return 0;

//     }
    

    int bsearch(int A[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (A[mid] == x) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (A[mid] > x) 
            return bsearch(A, l, mid - 1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return bsearch(A, mid + 1, r, x); 
    } 
  
    // We reach here when element is not 
    // present in array 
    return -1; 
} 
int main()
{   //linear search
    cout<<"enter the number to search in the array";
    cout<<endl;
    
    cin>>n;
    length = sizeof(A)/sizeof(int);
    int t = 0;
    // cout<<lenght;
    for (int i = 0; i < length; i++)
    {
        /* code */
        
        if (n==A[i])
        {
            cout<<"number found with linear-search in array at index ";
            cout<<i;
            cout<<endl;
            t =1;
            /* code */
        }
        
        
        

    }
    if (t==0)
    {
        cout<<"not found";
        /* code */
    }
    
    
    //binary-search
    // int lb,ub,mid;
    //works only on sorted arrays
    
    
   
    int result = bsearch(A, 0, length - 1, n);
    if(result ==-1)
    {
        cout<<"number not found";
        /* code */
    }
    else
    {
        cout<<"number found with binary-search in array at index ";
        cout<<result;
        cout<<endl;
    }
    
    
    
    


    return 0;
}
    

 