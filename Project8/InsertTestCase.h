#pragma once
#include <string>
#include <cassert>
#include "MyReceiver.h"
#include "TestCase.h"
class InsertTestCase :
	public TestCase
{
public:
	MyReceiver * res;
	void setUp() override final;
	void test() override final;
	void clean() override final;
	InsertTestCase();
	~InsertTestCase();
};