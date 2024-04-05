// median.cpp
#include <vector>
#include <algorithm>
#include <stdexcept>

using std::vector;
using std::domain_error;

// vector<double>�� �߾Ӱ��� ����.
// �Լ��� ȣ���ϸ� �μ��� ������ ���͸� �뤊�� ����
double median(vector<double> vec{
	//���� ������ �Է� ������ Ȯ��
	typedef vector<double>::size_type vec_sz;
	vec_sz size = vec.size();
	if (size == 0) {
		throw domain_error("Median of empty vector");
	}
	}