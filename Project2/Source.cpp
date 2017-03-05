#include <iostream>
using namespace std;

void citire(int sir[100][100], int n);
void determinant(int sir[100][100],int n);

void citire(int sir[100][100], int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout << "sir[" << i << "][" << j << "]=";
			cin >> sir[i][j];
		}
	}
}

void determinant(int sir[100][100],int n){
	int i,j,k=0;
	int v[10];
	int l1=1,l2=1,l3=1;
	int s1=1,s2=1,s3=1;
	for(i=0;i<2;i++){
		for(j=0;j<n;j++){
			v[k]=sir[i][j];
			k++;
		}
	}
	k=0;
	for(i=n;i<n+2;i++){
		for(j=0;j<n;j++){
			sir[i][j]=v[k];
			k++;
		}
	}
	for(i=0;i<n+2;i++){
		for(j=0;j<n;j++){
			if(i==j){
				l1*=sir[i][j];
			}
			if(i==j+1){
				l2*=sir[i][j];
			}
			if(i==j-2){
				l3*=sir[i][j];
			}
			if(i==0){
				j=n-1;
				while(j>=0){
					s3*=sir[i][j];
					i++;
					j--;
				}
				i=0;
				j=n-1;
			}
			if(i>0 && i == j+1){

}

int main(){
	int sir[100][100],n;
	cout << "Introduceti n" << endl;
	cin >> n;
	citire(sir,n);
	determinant(sir,n);

	system("pause");
	return 0;
}