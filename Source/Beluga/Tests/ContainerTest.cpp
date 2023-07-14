#include "BelugaMinimal.h"
#include "Misc/AutomationTest.h"


//============[ TArray TEST ]============================================================================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaTArrayTest, "Beluga.TArray", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
bool FBelugaTArrayTest::RunTest(const FString& Parameters)
{
	//-------------------[ Create, Add, Access ]-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	{
		TArray<int32> TestArr = { 1, 2, 3 }; 
		TestArr.Add(4); 
		TestArr.Add(5);

		int32 FirstElement = TestArr[0];
		int32 LastElement = TestArr.Last();

		TestEqual("[ Create, Add, Access ] test result", FirstElement, 1);
		TestEqual("[ Create, Add, Access ] test result", LastElement, 5);
	}
	
	//-------------------[ Remove ]-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	{
		TArray<FString> TestArr = { TEXT("Apple"), TEXT("Banana"), TEXT("Cherry") };
		TestArr.RemoveAt(1); 

		TestEqual("[ Remove ] test result", TestArr[1], TEXT("Cherry"));
	}

	return true;
}


//============[ TMap TEST ]============================================================================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaTMapTest, "Beluga.TMap", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
bool FBelugaTMapTest::RunTest(const FString& Parameters)
{
	//-------------------[ Create, Add, Access ]-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	{
		TMap<FString, int32> TestMap;
		TestMap.Add(TEXT("Apple"), 9);
		TestMap.Add(TEXT("Banana"), 2);
		TestMap.Add(TEXT("Cherry"), 7);

		int32 CherryCount = TestMap[TEXT("Cherry")]; 

		TestEqual("[ Create, Add, Access ] test result", CherryCount, 7);
	}

	//-------------------[ Size ]-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	{
		TMap<FString, int32> TestMap;
		TestMap.Add(TEXT("Apple"), 1);
		TestMap.Add(TEXT("Banana"), 1);
		TestMap.Add(TEXT("Cherry"), 1);

		int32 MapSize = TestMap.Num();

		TestEqual("[ Size ] test result", MapSize, 3);
	}

	return true;
}


//============[ TSet TEST ]============================================================================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaTSetTest, "Beluga.TSet", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
bool FBelugaTSetTest::RunTest(const FString& Parameters)
{
	//-------------------[ Create, Add, Access ]-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	{
		TSet<int32> TestSet = { 1, 2, 3 };
		TestSet.Add(4);
		TestSet.Add(5);

		bool bisContain = TestSet.Contains(2);

		TestTrue("[ Create, Add, Access ] test result", bisContain);
	}

	//-------------------[ 교집합, 차집합, 합집합 구하기 ]-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	{
		TSet<int32> SetA = { 1,2,3 };
		TSet<int32> SetB = { 2,3,4 };

		TSet<int32> IntersectionSet = SetA.Intersect(SetB); // 교집합 : { 2, 3 }
		TSet<int32> DifferenceSet = SetA.Difference(SetB); // 차집합 : { 1 }
		TSet<int32> UnionSet = SetA.Union(SetB); // 합집합 : { 1, 2, 3, 4 }

		TestEqual("[ Intersect ] test result", IntersectionSet.Num(), 2);
		TestEqual("[ Intersect ] test result", DifferenceSet.Num(), 1);
		TestEqual("[ Intersect ] test result", UnionSet.Num(), 4);
	}

	return true;
}
