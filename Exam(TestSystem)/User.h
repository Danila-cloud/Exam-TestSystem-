#pragma once

#include<iostream>
#include<list>
#include<vector>
#include<string>
#include"Test.h"
//#include"Question.h"

using namespace std;

class User
{
protected:
	string login;
	int hashPass;
	Test* test;
public:
	virtual void menu() = 0;
	/*void Register()
	{

		cout << "Please, enter your login: " << endl;
		getline(cin, login);
		cout << "Enter your password: " << endl;
		string pa;
		hash<string> Pass;
		getline(cin, pa);
		int hashPass = Pass(pa);
		ofstream out;
		out.open("Accounts.txt", ios_base::app);
		out << login << endl;
		out << hashPass << endl;
		out.close();

	}
	void Login()
	{
		cout << "Please, enter your login: " << endl;
		getline(cin, login);
		cout << "Enter your password: " << endl;
		string pa;
		hash<string> Pass;
		getline(cin, pa);
		int hashPass = Pass(pa);
		ifstream out;
		out.open("Accounts.txt");
		int p;
		string l;
		while (cin >> l >> p)
		{
			if(login==l && hashPass==p)
		}
	}*/
};

class Student : public User
{
	void menu()override
	{
		
		do {
			system("cls");
			cout << "Menu Student" << endl;
			cout << "1.Testing\n2.Register\n3.Exit\n";
			int c;
			cin >> c;
			cin.ignore();
			switch (c)
			{
			case 1:
				//Login();
				break;
			case 2:
				//Register();
				break;
			case 3:
				return;
			default:
				break;
			}
		} while (true);
	}
};

class Admin : public User
{
	void menu()override
	{
		do {
			system("cls");
			cout << "Menu Admin" << endl;
			cout << "1.Create test\n2.Register\n3.Exit\n";
			int c;
			cin >> c;
			cin.ignore();
			switch (c)
			{
			case 1:
				createTest();
				break;
			case 2:
				//Register();
				break;
			case 3:
				return;
			default:
				break;
			}
		} while (true);
	}
	void createTest() 
	{
		test = new Test;
		test->createTest();
	}

};