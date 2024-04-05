//grade.cpp
#include "grade.h"
#include "median.h"
#include "Student_info.h"
#include <vector>
#include <stdexcept>

//  중간시험 점수, 기말시험 점수, 과제 점수의 백터로
// 학생의 종합 점수를 가함
double grade(double mt, double ft, double hw) {...}

// 중간시험 점수, 기말시험 점수, 과제 점수의 백터로
// 학생의 종합 점수를 가함
// 이 함수는 인수를 복사하지 않고 median 함수가 해당 작업을 실행
double grade(double mt, double ft, const vector<double>& hw)

double grade(const Student_info& s) {
	return grade(s.midterm, s.final, s.homework);
}