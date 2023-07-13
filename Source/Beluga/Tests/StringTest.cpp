#include "BelugaMinimal.h"
#include "Misc/AutomationTest.h"



// EAutomationTestFlags::EditorContext : 테스트에 필요한 애플리케이션 컨텍스트 : 이 테스트는 에디터 내에서 실행하기에 적합합니다라는 뜻.
// EAutomationTestFlags::EngineFilter : 테스트의 스피드 관련 :  엔진 레벨 테스트
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaStringTest, "Beluga.String",EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FBelugaStringTest::RunTest(const FString& Parameters)
{
	 //대입 연산자 '=' 
	{
		FString ResultStr("");
		FString InputStr("str");
		ResultStr = InputStr;

		check(ResultStr == "str");

	}
	//TestTrue Add Anything
	//TestTrueExpr

	/*bool vv = true;

	TestTrueExpr(vv == true);*/

	TestTrue(TEXT("Always TRUE!"), true);



	//FString::Printf(TEXT("%d %f")); // 이거는 좀 구식 C Style

	//FStirng::Format(TEXT(""); // 이거는 최신에서 많이 사용하는 방식 C# Style, 중괄호 문법. 

	return true;
}



void Test1()
{
	// 생성
		// char		"asdf"
		// wchar	L"asdf"
		// tchar	TEXT("asdf")

	// 대입 연산자 = 
	/*{
		FString ResultStr("");
		FString InputStr("str");
		ResultStr = InputStr;

		check(ResultStr == "str");
	}*/

	// Printf
	/*{
		FString ResultStr("");
		FString InputStr("str");
		ResultStr = FString::Printf(InputStr);

		check(ResultStr == "str");
	}*/

	// Format
		// FStringFormatNamedArguments
		// FStringFormatOrderedArguments

	// operator []

	// 대소비교

	// TCHAR* 얻기
	// operator*

	//길이 구하기
	//{
	//	FString str("str");
	//	int32 LenStr = str.Len();

	//	check(LenStr == 0); //어설션
	//}

	//Replace
	/*{
		FString str(TEXT("asdf"));
		FString result = str.Replace(TEXT("sd"), TEXT("ds"));

		check(result == TEXT("adsf"));
	}*/

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



