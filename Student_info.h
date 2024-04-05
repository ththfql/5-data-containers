#program once
// Student_info.h

#ifndef GUARD_Student_info
#define GUARD_Student_info

#include <iostream>
#include <string>
#include <vector>

using namespace std;

truct Student_info{
	string name;
double midterm, final;
vector<double> homework;
}; // �����ݷ��� ���� �ʵ��� ����

bool compare(const Student_info&, const Student_info&);
stream& read(istream&, Student_info&);
stream& read_hw(istream&, vector<double>&);

#endif 