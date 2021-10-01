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
	//virtual void menu() = 0;
	void addAcc() {
		hash<string> Hash;
		long long key;
		ofstream out;
		out.open("Accounts.txt", ios_base::app);
		out << login << endl;
		out.close();
		key = Hash(login);
		out.open(to_string(key) + ".txt");
		out << key << endl;
		key = Hash(pass);
		out << to_string(key) << endl;
		key = Hash(to_string(ADMIN));
		out << key << endl;
		out.close();
	}

	void Register()
	{

	}
	void Login()
	{

	}
};

class Student : public User
{

};

class Admin : public User
{

};