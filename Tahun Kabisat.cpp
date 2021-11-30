#include <iostream>
using namespace std;

int main(){
	system ("color 0A");
	int tahun;
	cout<<"Masukkan tahun : "; 
	cin>>tahun;
	
if (tahun%400==0)
        cout << "Tahun " << tahun << " adalah tahun Kabisat" <<endl;
    else if ((tahun%400!=0) && (tahun%100==0))
        cout<<"Bukan tahun Kabisat";
    else if ((tahun%400!=0) && (tahun%100!=0))
            if (tahun%4==0)
        cout << "Tahun " << tahun << " adalah tahun Kabisat" <<endl;
    else if ((tahun%400!=0) && (tahun%100!=0))
        if (tahun%4!=0)
        cout<<"Bukan tahun Kabisat";
 	        
	return 0;
}

