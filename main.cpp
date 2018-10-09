#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int payment = 0;
	string again = "y";

	while (again == "y" || again == "Y") {
		string order;
		double price;
		double newPrice;
		int dollarChange;
		int quarterChange;
		cout << "What would you like to order?" << endl;
		cin >> order;
		cout << "How much does it cost?" << endl;
		cin >> price;
		while (fmod(price, 0.25) != 0){
			cout << "Prices have to be multiples of 25 cents." << endl;
			cin >> price;
		}
		cout << "Your choices of payment methods are: " << endl;
		cout << "1 - $1 Cash" << endl;
		cout << "2 - $5 Cash" << endl;
		cout << "3 - $20 Cash" << endl;
		cout << "4 - $50 Cash" << endl;
		cout << "5 - Apple Pay" << endl;

		cout << "How would you like to pay? (1-5): ";
		cin >> payment;
		cout << endl;

		switch (payment) {
			case 1 :
				if (price - 1 > 0) {
					cout << order << " costs more than that." << endl;
				} else {
					cout << "Enjoy your " << order << endl;
					dollarChange = (int)(1-price);
					newPrice = 1-price;
					quarterChange = (newPrice-dollarChange) /0.25;
					cout << "Your change is " << dollarChange << " dollars and " << quarterChange << " quarters." << endl;

				}
				break;

			case 2 :
				if (price - 5 > 0) {
					cout << "A(n) " << order << " costs more than that." << endl;
				} else {
					cout << "Enjoy your " << order << endl;
					dollarChange = (int)(5-price);
					newPrice = 5-price;
					quarterChange = (newPrice-dollarChange) /0.25;
					cout << "Your change is " << dollarChange << " dollars and " << quarterChange << " quarters." << endl;
				}
				break;
			case 3 :
				if (price - 20 > 0) {
					cout << "A(n) " << order << " costs more than that." << endl;
				} else {
					cout << "Enjoy your " << order << endl;
					dollarChange = (int)(20-price);
					newPrice = 20-price;
					quarterChange = (newPrice-dollarChange) /0.25;
					cout << "Your change is " << dollarChange << " dollars and " << quarterChange << " quarters." << endl;
				}
				break;
			case 4 :
				if (price - 50 > 0) {
					cout << "A(n) " << order << " costs more than that." << endl;
				} else {
					cout << "Enjoy your " << order << endl;
					dollarChange = (int)(50-price);
					newPrice = 50-price;
					quarterChange = (newPrice-dollarChange) /0.25;
					cout << "Your change is " << dollarChange << " dollars and " << quarterChange << " quarters." << endl;
				}
				break;
			case 5 :
				cout << "... Approved. Enjoy your " << order << endl;
				break;
			default :
				cout << "Error. Choice was not valid, Here is your money back.";

				break;
		}
		cout << "Would you like to go again? (Y/N)" << endl;
		cin >> again;
		cout << endl;
	}
}
