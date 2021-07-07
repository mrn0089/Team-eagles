#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>

using namespace std;

	void Login();
	void Registr();
	void Reset();

	int MFunc(){
	int option;

	cout << "1. To login\n";
	cout << "2. To register\n";
	cout << "3. To reset password\n";
	cout << "4. Exit\n";

	cout << ": ";
	cin >> option;
	cout << endl;

	switch(option){
		case 1:
			Login();
			break;
		case 2: 
			Registr();
			break;
		case 3:
			Reset();
			break;
		case 4:
			cout << "Exit\n\n";
			break;
		default:
			system("cls");
			cout << "Not an option, please try again\n";
			MFunc();
	
	
	}
	return 0;
	}

	void Login(){

		string Username;
		string Password;
		string storeUser;
		string storePassword;
		int count;
		cout << "LOGIN \n" << endl;
		cout << "Enter Username: ";
		cin >> Username;
		cout << endl;
		cout << "Enter Password: ";
		cin >> Password;
		cout << endl;

		ifstream input("database.txt");
		while(input >> storeUser >> storePassword){
			if(storeUser == Username && storePassword == Password){
			count = 1;
			system("cls");
			
			
			}

		
		
		}

		input.close();
		if(count == 1){
		cout << "\n Logging in as " << Username << endl;
		cin.get();
		cin.get();
		MFunc();
		
		
		}

		else{
		cout << "Password or Username is incorrect\n ";
		MFunc();
		
		
		
		}


	}


	void Registr(){
		string Username;
		string Password;
		string storeUser;
		string storePassword;

		system("cls");
		cout << "Enter Username: ";
		cin >> Username;
		cout << endl;
		cout << "Enter Password: ";
		cin >> Password; 
		cout << endl;

		ofstream R("database.txt", ios::app);
		R << Username << " " << Password << endl;
		system("cls");
		cout << "Registration complete" << endl;
		MFunc();
	
	
	}

	void Reset(){
	int count = 0;
	system("cls");
	cout << "FORGOTTEN PASSWORD\n\n" << endl;
        cout << "Enter Username: ";
	string searchUser;
        string UserN;
	string PassN;
	cin >> searchUser;

	ifstream searchU("database.txt");
	while(searchU >> UserN >> PassN){
	if(UserN == searchUser){
	count = 1;
	
	}
	
	
	}

	searchU.close();
	if(count == 1){
	cout << "Username found" << endl;
	cout << "Password for " << UserN << " is " << PassN << endl;
        cin.get();
	cin.get();
	system("cls");
	MFunc();	
	
	}

	else{
	cout << "ID was not found within the database " << endl;
	cin.get();
	cin.get();
	MFunc();
	
	}
//	break;
	
	
	
	
	}
	
	
	
