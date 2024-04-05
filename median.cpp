// median.cpp
#include <vector>
#include <algorithm>
#include <stdexcept>

using std::vector;
using std::domain_error;

// vector<double>의 중앙값을 구함.
// 함수를 호출하면 인수로 제공된 백터를 통쨰로 복사
double median(vector<double> vec{
	//과제 점수의 입력 유무를 확인
	typedef vector<double>::size_type vec_sz;
	vec_sz size = vec.size();
	if (size == 0) {
		throw domain_error("Median of empty vector");
	}
	}