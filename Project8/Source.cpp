#include "InsertTestCase.h"
#include "UndoTestCase.h"
#include "Test.h"

int main()
{
	Test testing;
	testing.tests.push_back(new InsertTestCase());
	testing.tests.push_back(new UndoTestCase());
	testing.init_testing();


	system("pause");
	return 0;
}