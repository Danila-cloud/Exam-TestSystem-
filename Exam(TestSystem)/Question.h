#pragma once
#include<iostream>
#include<list>
#include<vector>
#include<string>

using namespace std;

class Question
{
	string question;
	vector<string> answers;
	int numTrueAnswer;

public:
	//Question() {};
	void print()
	{
		cout << this->question << endl << endl;
		for (size_t i = 0; i < answers.size(); i++)
		{
			cout << i + 1 << ". " << answers[i] << endl;
		}
	}

	void setQuestion()
	{
		cout << "New question: ";
		getline(cin, this->question);
	}

	void addAnswer()
	{
		cout << "New answer: ";
		string answ;
		getline(cin, answ);
		answers.push_back(answ);
	}

	void setNumTrueAnswer()
	{
		cout << "Num True answer: ";
		cin >> numTrueAnswer;
		cin.ignore();
	}

	void editAnswer()
	{
		for (size_t i = 0; i < answers.size(); i++)
		{
			cout << i + 1 << ". " << answers[i] << endl;
		}
		int n;
		cin >> n;
		cin.ignore();
		cout << "New answer:";
		string answ;
		getline(cin, answ);
		answers[n - 1] = answ;
	}
};