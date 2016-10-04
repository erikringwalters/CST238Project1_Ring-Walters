//Erik Ring-Walters
//October 2, 2016
//Project 1 - CST - 238
//Course Information
#pragma once
#include <iostream>
#include <string>
using namespace std;
class Course
{
private:
	string courseTitle;

public:
	Course();
	void setInstructor(string name);//test test
	bool addStudent(string name, int id);
	bool dropStudent(int id);
	void putScores(int id, double mid1, double mid2);
	void report();
};