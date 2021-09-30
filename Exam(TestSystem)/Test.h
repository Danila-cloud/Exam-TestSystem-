
#pragma once
#include<iostream>
#include<list>
#include<vector>
#include<string>
#include"Question.h"

using namespace std;

class Test
{
	string name;
	vector<Question> questions;

public:
	Test() {}
	Question addQuestion()
	{
		Question q;
		q.setQuestion();
		bool continue_ = false;
		do
		{
			q.addAnswer();
			cout << "1-Yes, 0-No :";
			cin >> continue_;
			cin.ignore();
		} while (continue_);
		q.setNumTrueAnswer();
		return q;
	}

	void GetTestName()
	{
		cout << "Get test's name:";
		getline(cin, name);
	}

	void createTest()
	{
		GetTestName();
		bool continue_ = false;
		do
		{
			questions.push_back(addQuestion());
			cout << "1-Yes, 0-No :";
			cin >> continue_;
			cin.ignore();
		} while (continue_);
	}

	void print()
	{
		cout << "Test's name: " << this->name << endl;
		for (size_t i = 0; i < questions.size(); i++)
		{
			questions[i].print();
			cout << endl;
		}
	}
};
