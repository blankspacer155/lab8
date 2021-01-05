#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,inper,canpay;
	cout << "Enter initial loan: "; cin>>loan;
	cout << "Enter interest rate per year (%): ";cin>>inper;
	cout << "Enter amount you can pay per year: ";cin>>canpay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	int ind=1;
	do{
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << ind; 
	cout << setw(13) << left << loan;
	cout << setw(13) << left << inper*loan/100;
	loan+=(inper*loan/100);
	cout << setw(13) << left << loan;
	if(loan>canpay)
	{
	cout << setw(13) << left << canpay;
	loan-=canpay;
	cout << setw(13) << left << loan;
	}
	else
	{
	cout << setw(13) << left << loan;
	loan=0;
	cout << setw(13) << left << "0.00";
	}
	
	cout << "\n";	
	ind++;
	}while(loan>0);
	return 0;
}
