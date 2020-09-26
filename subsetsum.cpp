// A recursive solution for subset sum problem
#include<iostream>
#include <cstdio>

using namespace std; 
 
// Returns true if there is a subset of set[] with sun equal to given sum
bool isSubsetSum(int set[], int n, int sum)
{
   // Base Cases
   if (sum == 0)
     return true;
   if (n == 0 && sum != 0)
     return false;
 
   // If last element is greater than sum, then ignore it
   if (set[n-1] > sum)
     return isSubsetSum(set, n-1, sum);
 
   /* else, check if sum can be obtained by any of the following
      (a) including the last element
      (b) excluding the last element   */
   return isSubsetSum(set, n-1, sum) || 
                        isSubsetSum(set, n-1, sum-set[n-1]);
}
 
// Driver program to test above function
int main()
{
	int n ; 
	
	cout <<  "Enter the size of set"<< endl; 
	cin >> n ; 
	
	int a[n];
	cout << " Enter the elements" << endl ; 
	for ( int i = 0 ; i < n ; i++){
	cin >>  a[i] ; 
    }
    
  int sum = 9;
  if (isSubsetSum(a, n, sum) == true)
     cout <<  "Found a subset with given sum" ;
  else
     cout << "No subset with given sum" ;
  return 0;
}
