#include <iostream>
#include <sstream>

using namespace std;


int main(){
	
	int x = 0, 
		y = 0, 
		z = 0,
		a = 0;
	int choiceInt[20];
	stringstream ss;
	
	string inputName;
	string choice[20];
	string user[8][2] = {{"ahmad", "3.00"}, 
						{"abu", "5.00"}, 
						{"ali", "4.00"}, 
						{"samad", "3.50"}, 
						{"jamal", "10.00"}, 
						{"kamal", "7.50"},
						{"akmal", "0.00"},
						{"kalam", "0.00"}};				
						
	string books[12] = 	{"Harry Potter and the Sorcerer’s Stone", 
						"Harry Potter and the Chamber of Secrets",
						"Harry Potter and the Prisoner of Azkaban",
						"Harry Potter and the Goblet of Fire",
						"Harry Potter and the Order of the Phoenix",
						"Harry Potter and the Half-Blood Prince",
						"Harry Potter and the Deathly Hallows",
						"Harry Potter and the Cursed Child",
						"The Hobbit",
						"The Fellowship of the Ring",
						"The Two Towers",
						"The Return of the King"};
						
	int arrsize = sizeof(choice) / sizeof(choice[0]);					
	float outstanding[8];
	
	cout << "Welcome to my book borrowing system\n\n" << endl;
	cout << "Please enter your name : ";
	cin >> inputName;
	
	for (x = 0; x < 8; x++){
		if (inputName == user[x][0]){
			break;
		}
		else if (x == 7){
			cout << "not recognized" ;
			return 0;
		}
	}
	ss << user[x][1];
	ss >> outstanding[x];
	
	cout << "\n\nHello " << user[x][0] << "!\n\n";
	if (outstanding[x] > 0){
		cout << "Your outstanding is RM" << outstanding[x] << endl;
		cout << "Please settle your remaining outstanding charge as the counter." << endl;
		return 0;
	}
	
	cout << "\nthis is our available books--\n" << endl;
	
	for (y = 0; y < 12; y++){
		cout << "[" << y << "]" << books[y] << endl;
	}
	
	cout << "\nPlease choose book number (enter 99 to confirm): " ;
	
	while (choice[z] != "99"){
		cin >> choice[z];
		if (choice[z] == "99"){
			break;
		}
		else {
		}
		z++;
	}
	
	if (z > 5){
		cout << "Exceed borrow limit. Please try again" << endl;
		return 0;
	}
	else {
		cout << "you have chosen these books : " << endl;
		for (a = 0; a < z; a++){
			cout << choice[a] <<endl;
		}

	}
	
	
	return 0;
}
