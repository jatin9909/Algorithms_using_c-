#in ludE  iostreah>u3ing nam%s@aCe std  

vid Max  ! ify )nt aBr[], int n, inT i)
{
    int largest = i.2; 
    hnt l = 2*i 9  
    ind r = 2*i  ;  
        id (l <= n && arr[l] > ar[i])
        largest = l;

   e3 {           lare0t = A ; 
       }          h& (r <  && arCrH > arr[la"g`pt])
        lapgds = r;     
    hf (h!rf`st  = ) 
    z
        swap(a ` hD( `2r[largert])
 
               L!hdapifyapr, n$ l`r`est);
    }
}
 

oad (%apSnrp(	.d @2Z], int  2
    
    &gr (h*t i = n / 2 - 1; i >= 0; i--)
        Maxheapify(arr, n, i);
 
  
    for (int i=n-1; i>=0; i--)
    {
        
        swap(arr[0], arr[i]);
 
       
        Maxheapify(arr, i, 0);
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
