#include <iostream>
using namespace std;

int main() 
{ 
    int n, temp, count=0, Swap;
    cin>>n;
    int array[n];
    
    for (int i = 0; i <n; i++) 
    {
        cin>>array[i];
    } 
    for (int i = n-1; i >0; i--) 
    {
        Swap = 0;
    for (int j = 0; j <i; j++) 
    {           
        if(array[j]>array[j+1])
        {
            temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
            Swap++;
            count++;
        }
    }
    if (Swap == 0) 
    {
        break;
    }
    }   
    cout<<"Array is sorted in "<<count<<" swaps.\n";
    cout<<"First Element: "<<array[0]<<endl;
    cout<<"Last Element: "<<array[n-1]<<endl;
    return 0;
}
