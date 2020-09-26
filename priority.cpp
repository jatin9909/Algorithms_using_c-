 #include <iostream>
using namespace std;
 

void Minheapify(int arr[], int n, int i)
{
    int smallest = i/2; 
    int l = 2*i ;  
    int r = 2*i + 1;  
 
   
    if (l <= n && arr[l] < arr[i])
        smallest = l;

   else{
          smallest = i ; 
       }
 
   
    if (r <= n && arr[r] < arr[smallest])
        smallest = r;
 
    
    if (smallest != i)
    {
        swap(arr[i], arr[smallest]);
 
       
        Minheapify(arr, n, smallest);
    }
}
 

void heapSort(int arr[], int n)
{
    
    for (int i = n / 2 - 1; i >= 0; i--)
        Minheapify(arr, n, i);
 
  
    for (int i=n-1; i>=0; i--)
    {
        
        swap(arr[0], arr[i]);
 
       
        Minheapify(arr, i, 0);
    }
}
 

void printArray(int arr[], int n)
{
    for (int i=0; i<n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
 

int main()
{
int n ; 
cout << " Enter the size of array " << endl ; 
cin >> n ;
  
int arr[n];  

cout << " Enter the elements in array " << endl ; 
for( int i = 0 ; i < n ; i++){
cin >> arr[i] ; 
}
 
    heapSort(arr, n);
 
    cout << "Sorted array is \n";
    printArray(arr, n);
}
