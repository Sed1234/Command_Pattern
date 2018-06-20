#pragma once
#include <string>
#include <cassert>
#include "MyReceiver.h"
#include "Document.h"
#include "TestCase.h"
class UndoTestCase :
	public TestCase
{
public:
	MyReceiver * res;
	void setUp() override final;
	void test() override final;
	void clean() override final;
	UndoTestCase();
	~UndoTestCase();
};

