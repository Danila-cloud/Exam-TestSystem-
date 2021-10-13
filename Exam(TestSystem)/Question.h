#pragma once
#include<iostream>
#include<list>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

//ostream& operator<<(ostream& os, const Question& t)
//{
//	return os << t.question;
//}

class Question
{
public:
	string question;
	vector<string> answers;
	int numTrueAnswer;
	friend class Test;
	//friend ostream& operator<<(ostream& os, const Question& t);

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

	void Save(ofstream& data) {
		data << question << endl;
		data << answers.size() << endl;
		for (size_t i = 0; i < answers.size(); i++)
		{
			data << answers[i] << endl;
		}
		data << numTrueAnswer << endl;
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