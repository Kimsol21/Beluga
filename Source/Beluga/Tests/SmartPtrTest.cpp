#include "BelugaMinimal.h"
#include "Misc/AutomationTest.h"


//============[ SharedPtr TEST ]============================================================================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaSharedPtrTest, "Beluga.SharedPtr", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
bool FBelugaSharedPtrTest::RunTest(const FString& Parameters)
{
	return true;
}


//============[ SharedRef TEST ]============================================================================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaSharedRefTest, "Beluga.SharedRef", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
bool FBelugaSharedRefTest::RunTest(const FString& Parameters)
{
	return true;
}


//============[ WeakPtr TEST ]============================================================================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaWeakPtrTest, "Beluga.WeakPtr", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
bool FBelugaWeakPtrTest::RunTest(const FString& Parameters)
{
	return true;
}


//============[ UniquePtr TEST ]============================================================================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaUniquePtrTest, "Beluga.UniquePtr", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
bool FBelugaUniquePtrTest::RunTest(const FString& Parameters)
{
	return true;
}