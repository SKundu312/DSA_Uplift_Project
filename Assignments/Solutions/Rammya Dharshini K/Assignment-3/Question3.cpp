/*Given a M*N matrix, print the matrix in spiral order
Input:
 
[  1   2   3   4  5 ]
[ 16  17  18  19  6 ]
[ 15  24  25  20  7 ]
[ 14  23  22  21  8 ]
[ 13  12  11  10  9 ]
 
Output:
 
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25  */

#include<iostream>

using namespace std;

int main(){
	int i,j;
	int m=5,n=5;
	int a[m][n] = { { 1,  2,  3,  4, 5},
					{16, 17, 18, 19, 6},
					{15, 24, 25, 20, 7},
					{14, 23, 22, 21, 8},
					{13, 12, 11, 10, 9}  };
					
	int k = 0, l = 0;
	
	while(k<m && l<n){
		for(i=l;i<n;i++)
			cout << a[k][i] << " " ;
		k++;
		
		for(i=k;i<m;i++)
			cout << a[i][n-1] << " ";
		n--;
		
		if(k < m){
		for(i=n-1;i>=0;--i)
			cout << a[m-1][i] << " ";
		m--;
		}
		
		if(l < n){
		for(i=m-1;i>=k;--i)
			cout << a[i][l] << " ";
		l++;
		}	
	}
	return 0;
}
