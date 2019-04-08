#include "string_.h"
using namespace std;

//передача объекта в функцию по значению
void f(string_ st) {

	st.append("!");
}

string_ getN() {
	string_ res("N");
	return res;
}

void main() {
	
	string_ s("Hello");
	
	// проверка функции append //
	/*s.print();
	s.setString("Hollywood");
	s.print();
	s.append(" forever!");
	s.print();
	s.clear();
	s.~string_();*/

	// проверка функции append //

	
	//s.setString("itstep");
	//cout << s.equal("Itstep");

	//string_ s("Hello");
	//инициализация при создании
	//string_ s2 = s;
	//string_ s2 = "adadasdasd";
	////передача объекта в функцию по значению
	//f(s);
	////возврат объекта из функции по значению
	//string_ s2 = getN();
	//int x = 5;
	//int y = x;

	system("pause");

}




//передача объекта в функцию по значению
//void f(const string_ &st) {
//	
//	st.append("!");
//}