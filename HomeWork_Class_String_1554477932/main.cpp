#include "string_.h"
using namespace std;

//�������� ������� � ������� �� ��������
void f(string_ st) {

	st.append("!");
}

string_ getN() {
	string_ res("N");
	return res;
}

void main() {
	
	string_ s("Hello");
	
	// �������� ������� append //
	/*s.print();
	s.setString("Hollywood");
	s.print();
	s.append(" forever!");
	s.print();
	s.clear();*/

	//s.~string_();
	//s.setString("itstep");
	//cout << s.equal("Itstep");

	//string_ s("Hello");
	//������������� ��� ��������
	//string_ s2 = s;
	//string_ s2 = "adadasdasd";
	////�������� ������� � ������� �� ��������
	//f(s);
	////������� ������� �� ������� �� ��������
	//string_ s2 = getN();
	//int x = 5;
	//int y = x;

	system("pause");

}




//�������� ������� � ������� �� ��������
//void f(const string_ &st) {
//	
//	st.append("!");
//}