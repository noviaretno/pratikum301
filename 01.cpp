#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int x, y, z;
	cout << "Input nilai x = ";
	cin  >> x;
	
	cout << "Input nilai y = ";
	cin  >> y;
	
	if (x > y){
		z = y - x;
		cout<<abs (z)<<endl;
		cout<<"Hasil Positif";
	
	}
	
	else if (y == x){
		z = x - y;
		cout<<abs (x-y)<<endl;
		cout<<"Hasil Bukan Positif";
		cout<<"Hasil =0 (Nilai Mutlak)";
		
	}
}
