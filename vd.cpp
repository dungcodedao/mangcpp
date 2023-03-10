#include <iostream>
using namespace std;
int main () {
	int n;
	int a[100];
	cout << " Nhap cac phan tu mang: "; cin>>n; 
//nhapmang
	for( int i = 0; i < n; i++)
{ 
	cout<< " Nhap a[ "<<i<<" ] = "; cin>>a[i]; 
}
//in mang
 cout << " \n cac phan tu mang vua nhap: "; {
   	for ( int i = 0; i < n;i++)
   	cout <<a[i]<<" ";
   }
 //in ham chan
 cout << " \n Cac phan tu mang chan la: " ;
 for (int i = 0; i < n; i++) {
 	if ( a[i] % 2 ==0)
 	cout <<a[i]<<" ";
 	
 }
//in ham le
cout << " \n Cac phan tu mang le la: ";
for ( int i = 0; i < n; i++) {
	if ( a[i] % 2 != 0)
	cout << a[i]<<" ";
}

//inptulonnhat
	int  max;	
	cout << " \n Phan tu mang lon nhat la: ";
	max = a[0];
	for ( int i= 0; i < n;i++) 
	if (a[i] > max) {
		max =a[i]; 
	}
	cout<<max<<" ";

//inphantunhonhat
int min;
cout << " \n Phan tu mang nho nhat la: ";
min = a[0];
for (int i =0; i < n; i++)
if (a[i] < min ){
	min = a[i];
}
   cout <<min<<" ";

//sapxepcacmangtangdan

cout<<" \n Sap xep mang:";
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (a[i] > a[j]) {    
              int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
	
//tinhtongcacptumang
int s = 0;
cout << " \n Tong cac phan tu mang: " ;
for ( int i =0; i < n; i++){
	s =s + a[i];
}
    cout <<s<<" ";
//tinhtichcacptumang
int t =1;
cout << " Tich cac phan tu mang: ";
for (int i =0; i <n;i++){
	t = t*a[i];
}
cout <<t<<" ";
    
    
    
    

    
    
    
    
    
    
    
    
    
    
    
}
 

