#pragma once
#define PI 3.1415926
const int I = 0;
class MathUtil
{
public:
	MathUtil();
	~MathUtil();
	int test();
private:

};

MathUtil::MathUtil()
{
}

MathUtil::~MathUtil()
{
}


int MathUtil::test()
{
	int v1 = 9;
	char v2 = 'a';
	char v3[10] = { 'a','b' };

	double d1= sqrt(2);
	float f1=0.2f;

	printf("%c%f%f", v3[0],d1,f1);

	std::cout << "����һ������";
	std::cin >> v1;
	std::cout << "v1��" << v1;


	char* v4 = "abcdefg";
	v1 = strcmp("a", v4);
	std::cout << "�ַ����Ƚϣ�" << v1;
	v1 = strlen(v4);
	std::cout << "�ַ������ȣ�" << v1;

	std::string a = "";



	std::cout << "���������";
	std::cin >> v2;

	
	return 0;
}