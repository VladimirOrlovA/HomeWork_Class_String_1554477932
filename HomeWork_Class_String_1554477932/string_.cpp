#include "string_.h"



string_::string_()
{
	str = nullptr;
	length = 0;
}

string_::string_(const char *s)
{
	length = strlen(s);
	str = new char[length + 1];
	strcpy_s(str, length + 1, s);
}

void string_::setString(const char *s)
{
	if (str != nullptr) delete[] str;	// ���� ������ �� ������ ������� ������ (������)
	length = strlen(s);					// �������� ����� ���������� ������
	str = new char[length + 1];			// �������� ��� ��������� ������ ���������� ����� ������ ���������
	strcpy_s(str, length + 1, s);		// ������������� � ������ ���������� ����� ���������� ������ +1 ������ ��� /0 � ���� ������ ��������
}

const char *string_::getString()
{
	return str;
}

int string_::getLength()
{
	return length;
}

void string_::append(const char *s)
{
	if (str == nullptr) {
		setString(s);
		return;
	}
	length += strlen(s);				// ���������� � ������� ����� ������ ����� ������ ���������
	char* tmp = new char[length + 1];	// ��������� ��������� ��� ��������� ������
	strcpy_s(tmp, length + 1, str);		// �� ��������� ������ �������� ������ str
	strcat_s(tmp, length + 1, s);		// �� ��������� ������ �������� ������ �������� s
	delete[]str;
	str = tmp;
	//delete[] tmp;

}

void string_::print()
{
	cout << str << endl;
}

void string_::clear()
{
	if (str != nullptr) delete[]str;
	str = nullptr;
	length = 0;
}

bool string_::equal(const char * s)
{
	if (strcmp(str, s) == 0)
		return true;
	return false;
}


string_::~string_()
{
	clear();
}

string_::string_(const string_ & obj)
{
	//obj.clear();
	length = obj.length;
	if (length == 0) {
		str = nullptr;
		return;
	}
	//������ ���� ������ ����������
	str = new char[length + 1];
	strcpy_s(str, length + 1, obj.str);
}
