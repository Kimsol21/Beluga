#include "BelugaMinimal.h"
#include "Misc/AutomationTest.h"


//============[ FString TEST ]============================================================================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaFStringTest, "Beluga.FString", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
bool FBelugaFStringTest::RunTest(const FString& Parameters)
{
	//-------------------[ Constructor ]-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	{
		// char
		FString ResultStr_char("charType can be generated as FString");
		// wchar
		FString ResultStr_wchar(L"wcharType can be generated as FString");
		// tchar
		FString ResultStr_tchar(TEXT("tcharType can be generated as FString"));

		UE_LOG(LogBeluga, Display, TEXT("FString Test -> Generate Test Result \n< %s > \n< %s > \n< %s >"), *ResultStr_char, *ResultStr_wchar, *ResultStr_tchar);
	}

	//-------------------[ Format ]-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	{
		FStringFormatArg Arg_name = "Sol";
		FStringFormatArg Arg_age = "25";

		// NamedArguments
		FStringFormatNamedArguments NamedArgs;
		NamedArgs.Add(TEXT("Name"), Arg_name);
		NamedArgs.Add(TEXT("Age"), Arg_age);

		FString ResultStr_NamedArg = FString::Format(TEXT("My Name is {Name}. I am {Age} years old."), NamedArgs);
		UE_LOG(LogBeluga, Display, TEXT("FString Test -> Format -> NamedArguments Test Result : %s"), *ResultStr_NamedArg);


		// OrderedArguments
		FStringFormatOrderedArguments OrderedArgs;
		OrderedArgs.Add(Arg_name);
		OrderedArgs.Add(Arg_age);

		FString ResultStr_OrderedArg = FString::Format(TEXT("My Name is {0}. I am {1} years old"), OrderedArgs);
		UE_LOG(LogBeluga, Display, TEXT("FString Test -> Format -> NamedArguments Test Result : %s"), *ResultStr_OrderedArg);
	}

	//-------------------[ Get TCHAR* ]-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	{
		FString TestStr("Test");
		const TCHAR* TcharType = GetData(TestStr);

		UE_LOG(LogBeluga, Display, TEXT("FString Test -> Get TCHAR* Test Result : %s , %s"), TcharType, *TestStr);
	}

	//-------------------[ Printf Function ]-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	{
		FString ResultStr("");
		FString InputStr("Hello");
		ResultStr = FString::Printf(TEXT("%s"), *InputStr);

		TestEqual("[ Printf() Function ] test result", ResultStr, InputStr);
	}

	//-------------------[ operator '[]' ]-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	{
		FString TestStr("ABCDE");
		TestEqual("[ operator '[]' ] test result", TestStr[3], 'D');
	}

	//-------------------[ operator '=' ]-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	{
		// char
		FString ResultStr_char = "charType can be assigned to FString";
		// wchar
		FString ResultStr_wchar = L"wcharType can be assigned to FString";
		// tchar
		FString ResultStr_tchar = TEXT("tcharType can be assigned to FString");

		UE_LOG(LogBeluga, Display, TEXT("FString Test -> Assignment Operator Test Result \n< %s > \n< %s > \n< %s >"), *ResultStr_char, *ResultStr_wchar, *ResultStr_tchar);
	}

	//-------------------[ operator 'comparison' ]-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	{
		FString BigStr("Banana");
		FString SmallStr("Apple");

		TestTrue("[ operator '>' ] test result", BigStr > SmallStr);
		TestTrue("[ operator '>=' ] test result", BigStr >= SmallStr);
		TestTrue("[ operator '<' ] test result", SmallStr < BigStr);
		TestTrue("[ operator '<=' ] test result", SmallStr <= BigStr);
	}

	//-------------------[ Get Length ]-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	{
		FString TestStr("Test");
		int32 TestStr_Length = TestStr.Len();

		TestEqual("[ Get Length ] test result", TestStr_Length, 4);
	}

	return true;
}


//============[ FName TEST ]============================================================================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaFNameTest, "Beluga.FName", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
bool FBelugaFNameTest::RunTest(const FString& Parameters)
{
	//-------------------[ 생성 및 유효성 검사 ]-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	{
		FName TestName1 = FName(TEXT("KimSol"));
		bool bisValid = TestName1.IsValid();

		TestTrue("[ Valid ] test result", bisValid);
	}

	//-------------------[ FName -> FString ]-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	{
		FName TestName2 = FName(TEXT("NameToString"));
		FString ResultStr = TestName2.ToString(); // FName을 FString으로 변환

		TestEqual("[ FName -> FString ] test result", ResultStr, "NameToString");
	}

	return true;
}


//============[ FText TEST ]============================================================================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaFTextTest, "Beluga.FText", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
bool FBelugaFTextTest::RunTest(const FString& Parameters)
{

	//-------------------[ 값 비교 ]-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	{
		FText TextA = FText::FromString(TEXT("Hello"));
		FText TextB = FText::FromString(TEXT("Hello"));

		bool bIsSame = TextA.EqualTo(TextB);

		TestTrue("[ Compair Text ] test result", bIsSame);
	}

	//-------------------[ 날짜 Text 변환, 유효성 검사 ]-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	{
		const FDateTime MyDateTime(2023, 07, 15);
		FText ResultText = FText::AsDate(MyDateTime);

		TestEqual("[ TextAsDate ] test result", ResultText.ToString(), FString("2023. 7. 15."));		
	}

	return true;
}
