#include<iostream>
using namespace std;
int A[] = {1,2,3,4,7,56,78};
int length;
int n;
    
    



    

    int bsearch(int A[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
       
        if (A[mid] == x) 
            return mid; 
  
        
        if (A[mid] > x) 
            return bsearch(A, l, mid - 1, x); 
  
       
        return bsearch(A, mid + 1, r, x); 
    } 
  
    
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
    

 