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
    cout<<endl;
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

    cout<<"input the number to delete from the array"<<endl;
    int m;
    cin>>m;
    int t =1;
    for (int i = 0; i < length; i++)
    {
        if (a[i]==m){
                length = length -1;
                /* code */
                t=0;
                            
                            
                            


            
            
            /* code */
        }
            if(t==0){
                a[i] = a[i+1];
            }
            
           cout<<a[i];
           

        cout<<endl;
        /* code */
        /* code */
    }
    

    cout<<"input the number to insert at starting of array"<<endl;
    int o;
    cin>>o;
     for (int i = length-1; i >= 0; i--)
    {
        /* code */
        a[i+1] = a[i];

    }
    a[0] = o;
    
    for (int i = 0; i < length+1; i++)
    {   cout<<a[i];
        cout<<endl;
        /* code */
        /* code */
    }
    cout<<"input the number to insert at ending of  array"<<endl;
    int p;
    cin>>p;
      
    length = length +1;

    a[length] = p;
    for (int i = 0; i < length+1; i++)
    {   cout<<a[i];
        cout<<endl;
        /* code */
        /* code */
    }
    cout<<"input 1 to delete from starting of array"<<endl;
    int q;
    cin>>q;
    if(q==1){
        int z =1;
        
    for (int i = 0; i < length; i++)
    {
        z=0;
            if(z==0){
                a[i] = a[i+1];
            }
            
           cout<<a[i];
           

        cout<<endl;
        /* code */
        /* code */
    }

    }

    cout<<"input 2 to delete from ending of array"<<endl;
    int s;
    cin>>s;
    if(s==2){
        length--;
        for (int i = 0; i < length; i++)
        {
            cout<<a[i];
            cout<<endl;
            
            /* code */
        }
        


    }
    
    return 0;

}