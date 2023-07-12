#include "BelugaMinimal.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaStringTest, "Beluga.String", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

void Test1()
{
	// 생성
		// char		"asdf"
		// wchar	L"asdf"
		// tchar	TEXT("asdf")

	// 대입 연산자 = 
	{
		FString ResultStr("");
		FString InputStr("str");
		ResultStr = InputStr;

		
	}

	// Printf
	{
		FString ResultStr("");
		FString InputStr("str");
		ResultStr = FString::Printf(InputStr);

		check(ResultStr == "str");
	}

	// Format
		// FStringFormatNamedArguments
		// FStringFormatOrderedArguments

	// operator []

	// 대소비교

	// TCHAR* 얻기
	// operator*

	//길이 구하기
	{
		FString str("str");
		int32 LenStr = str.Len();

		check(LenStr == 0); //어설션
	}

	//Replace
	{
		FString str(TEXT("asdf"));
		FString result = str.Replace(TEXT("sd"), TEXT("ds"));

		check(result == TEXT("adsf"));
	}

	// Insert

	// clear

	// Split

	// IsEmpty

	// Shrink

	// RemoveAt

	// find 로 인덱스

	// Left
	// Mid
	// Right

	// 대문자로 변환, 소문자로 변환
}

bool FBelugaStringTest::RunTest(const FString& Parameters)
{
	//TestTrue Add Anything
	//TestTrueExpr

	bool vv = true;

	TestTrueExpr(vv==true);
	return true;
}

