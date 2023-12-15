#include<iostream>
#include<iomanip>
using namespace std;

int main(){	
	double loan, rate, pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	int year = 0, y = 0;
	double bal2,inter;
	inter= loan * rate / 100.0;
	bal2 = loan + inter - pay;
	while (loan>0){
		if ((loan + inter) < pay) {
		pay = loan + inter;
		bal2 = loan + inter - pay;
		}
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year+1; 
	cout << setw(13) << left << loan;
	cout << setw(13) << left << inter;
	cout << setw(13) << left << loan + inter;
	cout << setw(13) << left << pay;
	cout << setw(13) << left << bal2;
	cout << "\n";
	loan = bal2;
	inter = loan * rate / 100.0;
	bal2 = loan + inter - pay;
	if ((loan + inter) < pay) {
		pay = loan + inter;
		bal2 = loan + inter - pay;
	}
	year++;	
	}
	return 0;
}
