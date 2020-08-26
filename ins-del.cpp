#include<iostream>
using namespace std;
int main(){
    
    int a[] = {1,2,3,4,76,89};
    int length = sizeof(a)/sizeof(int);
    cout<<"list of numbers in array"<<endl;
    for (int i = 0; i < length; i++)
    {   

        cout<<a[i];
        cout<<endl;
        /* code */
    }
    cout<<"input the number to insert in array"<<endl;
    int n;
    cin>>n;
    cout<<"input the index(from 0 to 5 index) where to insert the number";
    int ins;
    cin>>ins;
    for (int i = length-1; i >= ins; i--)
    {
        /* code */
        a[i+1] = a[i];

    }
    a[ins] = n;
    length++;
    for (int i = 0; i < length; i++)
    {   cout<<a[i];
        cout<<endl;
        /* code */
        /* code */
    }
    

    
    
    
    return 0;

}