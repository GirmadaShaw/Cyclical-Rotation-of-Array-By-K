/*
Cyclically rotate an array by k 
Input:   {1, 3, 4, 5, 7, 2} , k=1
Output:  {2, 1, 3, 4, 5, 7}
*/

#include <iostream>

int main()
{
    int arr[] = {1, 3, 4, 5, 7, 2} ;
    int size = sizeof(arr)/sizeof(int) ;

//Time Complexity: O(n*k)  , Space Complexity: O(1)
    int k = 3 ;   
    while(k!=0)
    {   
    int temp = arr[size-1] ;
    for ( int i=size-1; i>0 ; i -- )
        arr[i] = arr[i-1];
    arr[0] = temp; 
    k--;
    }

    for ( int i=0 ; i<size ; i++ )
        std::cout << arr[i] << " ";

    
}