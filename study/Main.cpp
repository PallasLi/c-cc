#include "PqFile.h"
#include "Collections.h"
#include "MathUtil.h"
#include "Exeption.h"

using namespace exeption;
int main()
{

	PqFile pqFile;
	string content=pqFile.readFile("E://GitHub//c-cc//testcc//testcc//main.cpp");
	pqFile.writeFile("E://GitHub//c-cc//testcc//testcc//main.cpp2", "appendContent");
	pqFile.removeFile("E://GitHub//c-cc//testcc//testcc//main.cpp2");

	MathUtil mathUtil;
	mathUtil.test();

	Collections collections;
	pair<int, char*>  p = collections.createPair(10, "C++");
	collections.printPair(p);

	try {
		throw overflow();
	}
	catch (overflow) {
		printf("“Ï≥£");
	}

}