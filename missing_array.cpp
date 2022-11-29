#include <iostream>

using namespace std;

 
int getMissingNumber(int arr[], int n)

{       

        int m = n + 1;    

        int total = m*(m + 1)/2;   

         int sum = 0;   

         for (int i = 0; i < n; i++)     

         {        

                 sum += arr[i];    

         }        

         return total - sum;

}

 int main()

{   

        int arr[] = { 3, 2, 4, 5 }; 

        int n = sizeof(arr)/sizeof(arr[0]);     
       cout<<"The missing number is :"<< 
          getMissingNumber(arr, n);  

   return 0;

}