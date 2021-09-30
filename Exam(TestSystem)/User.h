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
};

class Student : public User
{

};

class Admin : public User
{

};