//grade.cpp
#include "grade.h"
#include "median.h"
#include "Student_info.h"
#include <vector>
#include <stdexcept>

//  �߰����� ����, �⸻���� ����, ���� ������ ���ͷ�
// �л��� ���� ������ ����
double grade(double mt, double ft, double hw) {...}

// �߰����� ����, �⸻���� ����, ���� ������ ���ͷ�
// �л��� ���� ������ ����
// �� �Լ��� �μ��� �������� �ʰ� median �Լ��� �ش� �۾��� ����
double grade(double mt, double ft, const vector<double>& hw)

double grade(const Student_info& s) {
	return grade(s.midterm, s.final, s.homework);
}