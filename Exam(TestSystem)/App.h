#pragma once
#include<iostream>
#include<list>
#include<vector>
#include<string>
#include<map>
#include"User.h"
#include"Test.h"

using namespace std;


class App
{
	User* user;
	map<int, Test> tests;

public:
	virtual void start()
	{
		user = new Admin();
		/*user->menu();*/
	}

};
