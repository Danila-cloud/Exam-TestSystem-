
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

	void SetTestName()
	{
		cout << "Get test's name:";
		getline(cin, name);
	}
	void SetCategoryName()
	{
		cout << "Get Category name:";
		getline(cin, Category);
		string path = "Categorys.txt";
		ifstream ca;
		ca.open(path);
		string categ;
		int h = 0;
		while (!ca.eof())
		{
			ca >> categ;
			if (categ == Category) {
				h = h + 1;
			}
		}
		ca.close();
		if (h != 1) {
			string path = "Categorys.txt";
			ofstream ca;
			ca.open("Categorys.txt", ios_base::app);
			ca << this->Category;
		}

		
	}

	void createTest()
	{
		string path = "tests.txt";
		ofstream data;
		//category
		SetCategoryName();
		SetTestName();
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
