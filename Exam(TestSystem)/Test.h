
#pragma once
#include<iostream>
#include<list>
#include<vector>
#include<string>
#include"Question.h"
#include<fstream>

using namespace std;

class Test
{
	string Category;
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
	void GetCategoryName()
	{
		cout << "Get Category name:";
		getline(cin, Category);
	}

	void createTest()
	{
		string path = "tests.txt";
		ofstream data;
		//category
		GetCategoryName();
		GetTestName();
		bool continue_ = false;
		do
		{
			questions.push_back(addQuestion());
			cout << "1-Yes, 0-No :";
			cin >> continue_;
			cin.ignore();
		} while (continue_);

		data.open(path, fstream::in | fstream::out | fstream::app);    /*"//Category//" + name + ".txt"*/
		data << this->name << endl;
		data << this->questions.size() << endl;
		for (size_t i = 0; i < questions.size(); i++)
		{
			//data << questions[i].;
			//data
		}

		data.close();
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
