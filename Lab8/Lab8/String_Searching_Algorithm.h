#ifndef STRING_SEARCHONG_ALGORITHM
#define STRING_SEARCHONG_ALGORITHM
#include <string>;
using namespace std;

//������� ����������
int Simple_Search(const string &where, const string &what);

//���������� ������-�����
int RK_Search(const string &where, const string &what);

//���������� ��������
int Horsool_Search(const string &where, const string &what);

//���������� �����-����
int Boyer_Moore_Search(const string &where, const string &what);

//���������� �����-�������-������
int KMP_Search(const string &where, const string what);


#endif // !STRING_SEARCHONG_ALGORITHM
