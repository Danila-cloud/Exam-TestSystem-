#pragma once
#include<iostream>
#include<list>
#include<vector>
#include"App.h"
#include<fstream>

void file() {
	string path = "tests.txt";
	fstream data;
	data.open(path, ofstream::app);
}
