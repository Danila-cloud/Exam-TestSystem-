#pragma once

#include<iostream>
#include<list>
#include<vector>
#include<string>
//#include"Question.h"

using namespace std;

class User
{
protected:
	string login;
	int hashPass;

public:

	void Register()
	{
		cout << "Please, enter your login: " << endl;
		getline(cin, login);
		cout << "Enter your password: " << endl;
		hash<string> Pass;
		getline(cin, Pass);
		int hashPass = Pass;
		ofstream out;
		out.open("Accounts.txt", ios_base::app);
		out << hashPass << endl;
		out << login << endl;
		out.close();
		out << hashPass << endl;
		out.close();

	}
	void Login()
	{

	}
};

class Student : public User
{
	void startTest();
};

class Admin : public User
{
	void createTest();

};