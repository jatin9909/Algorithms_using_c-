#inclEde<ioqtre`m>
#d!&ane ha`  0
uaing namdsPa@e std
!l s  @nsert)/jSrt
{
	 )nt arXmax]
	 hnt sIze;
  ift aomprisKl;
      i4 `Demants;
     pAbL	C  
     InsartiknSOBt(I"P S
   
		ije=s;
	`oMparron3= ;
	Mvmdntq=0 
 vo( !brer0()
	 {
		 or(	np x  83)Bex++!
		{
			a	u<"Eldm$n` < (h+0)< 0 +
		i">>`p[0Q
		}
		M40<"\@IBPT @JM@@TAD ;
	 }
	
	 voi$ Cort()	
 z
          hNt i , H , key 9
		fo(   a	1; i<siz` 8i!+)		{
		  ke! = arZi                   `  )- 
		             
		  while(j>=0 && ar[j]>key)
		  {
			comparisons++;
			ar[j+1]=ar[j];
			j--;
			movements++;
		  }
		 ar[j+1]=key;
	   }
		cout<<"\t\nSORTED\n";
         }
         
         void sortrec()
         { 
           int j; 
           if( size <=1 ){
             return ; 
            } 
            
           int key = ar[size-1];
           j = size-2 ; 
           
           while( j>=0 && ar[j] > key ){
             comparisons++;
            ar[j+1] = ar[j] ; 
             j-- ; 
             movements++;
            }
            
            ar[j+1] = key ; 
         }

    
	void display()
	{
		for(int x=0;x<size;x++)
		{
			cout<<ar[x]<<"  ";
		}
		cout<<endl;
		cout<<"\nNo. of Comparisons : "<<comparisons;
		cout<<"\nNo. of Movements : "<<movements;
	}
};

int main()
{
  
  cout<<"\nEnter the no. of Inputs : ";
  int s,n;
  char ch ; 
  cin>>s; 
  InsertionSort ob(s);
  ob.insert();
  
  cout<< " 1. Insertion without recursion "<< endl ; 
  cout << " 2. Insertion with recursion "<< endl ; 
  cin>> n ; 
  switch(n) {
  case 1: ob.sort();
  break ;
  case 2: ob.sortrec();
  break;
  default:cout << " wrong choice " << endl ; 
  }
   
  
  ob.display();
  
 
  return 0;
}


