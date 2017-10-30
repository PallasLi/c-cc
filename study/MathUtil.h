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

	std::cout << "输入一个整数";
	std::cin >> v1;
	std::cout << "v1：" << v1;


	char* v4 = "abcdefg";
	v1 = strcmp("a", v4);
	std::cout << "字符串比较：" << v1;
	v1 = strlen(v4);
	std::cout << "字符串长度：" << v1;

	std::string a = "";



	std::cout << "输入结束符";
	std::cin >> v2;

	
	return 0;
}