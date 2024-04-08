#include <iostream>
#include <string>
using namespace std;

struct group {
	char a_b;
	bool  t_f;
	int number;
};
group cas(group in){
	switch (in.a_b)
	{
	case 'a':
		
		if (in.t_f and in.number < 8) { 
			in.number++;
			return in;
		}
		else if (in.number == 4) {
			in.number = 10;
			return in;
		}
		else { 
			in.number = 0;
			return in;
		}
			
	case 'b':
		switch (in.number)
		{ 
		case 1:
			in.number = 8;
			return in;
		case 3:
			in.number = 8;
			return in;
		case 4:
			in.number = 8;
			return in;
		case 6:
			in.number = 9;
			return in;
		case 7:
			in.number = 4;
			return in;
		case 9: 
			in.number = 4;
			return in;
		case 10:
			in.number = 4; 
			return in;
		default:
			break;
		}
	default:
		break;
	}
}
int main() {
	group as;
	as.a_b = 'a';
	as.t_f = true;
	as.number = 0;
	const int card = 9876;
	int card_t = 0;
	const int password = 1234;
	int password_t = 0;
	int money=0;
	int money_in_card = 999;
	while ((as.number != 0) or (as.t_f != false)) {
		as = cas(as);
		switch (as.number)
		{
		case 1:
			cout << "enter number of card: ";
			cin >> card_t;
			if (card == card_t) {
				as.t_f = true;
				as.a_b = 'a';
			}
			else as.a_b = 'b';
			break;
		case 2:
			cout << "enter password of card: ";
			cin >> password_t;
			as.t_f = true;
			as.a_b = 'a';
			break;
		case 3:
			if (password == password_t) {
				as.t_f = true;
				as.a_b = 'a';
			}
			else as.a_b = 'b';
			break;
		case 4:
			cout << "if you would check your balance enter 0" << endl;
			cout << "if you would withdaw money enter 1" << endl;
			cout << "if you would out of sistem enter 2" << endl;
			int k;
			cin >> k;
			switch (k)
			{
			case 0:
				as.t_f = false;
				as.a_b = 'a';
				break;
			case 1:
				as.t_f = true;
				as.a_b = 'a';
				break;
			default:
				as.a_b = 'b';

			};
			break;
		case 5:
			cout << "enter sum: ";
			cin >> money;
			as.t_f = true;
			as.a_b = 'a';
			break;
		case 6:
			if (money <= money_in_card) {
				as.t_f = true;
				as.a_b = 'a';
			}
			else
				as.a_b = 'b';
			break;
		case 7:
			cout << "$$$$$$$$ outputing of money $$$$$$$$" << endl;
			money_in_card = money_in_card - money;
			int k1;
			cout << "if you want to back of main menu enter 0 " << endl;
			cout << "if you want to end working whith card enter 1" << endl;
			cin >> k1;
			if (k1 == 0) {
				as.t_f = false;
				as.a_b = 'a';
			} else {
				as.t_f = true;
				as.a_b = 'a';
			}
			break;
		case 8:
			as.t_f = false;
			as.a_b = 'a';
			cout << "end of operation" << endl;
			cout << "take away a card" << endl;
			break;
		case 9:
			cout << "you have not enough money" << endl;
			as.a_b = 'b';
			as.t_f = true;
			break;
		case 10:
			cout << "your balance is: " << money_in_card << endl;
			as.a_b = 'b';
			as.t_f = false;
			break;
		default:
			break;
		}
	}
	
}
