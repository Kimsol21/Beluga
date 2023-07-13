#include "BelugaMinimal.h"
#include "Misc/AutomationTest.h"


// EAutomationTestFlags::ApplicationContextMask : 테스트에 필요한 애플리케이션 컨텍스트
// EAutomationTestFlags::EngineFilter : 테스트의 스피드 관련 :  엔진 레벨 테스트

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaArrayTest, "Beluga.Array", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
bool FBelugaArrayTest::RunTest(const FString& Parameters) 
{

	TArray<int32> arr = {1, 2, 3};

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaMapTest, "Beluga.Map", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
bool FBelugaMapTest::RunTest(const FString& Parameters)
{
	TMap<FName, FString> map = {{TEXT("A"), TEXT("Apple")}, { TEXT("B"), TEXT("Banana") }, { TEXT("C"), TEXT("Cherry") }};

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaSetTest, "Beluga.Set", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
bool FBelugaSetTest::RunTest(const FString& Parameters)
{
	return true;
}

void ArrayTest_1()
{

}

//언리얼 Documents 예제
//IMPLEMENT_SIMPLE_AUTOMATION_TEST(FSetResTest, "Windows.SetResolution", ATF_Game)
//bool FSetResTest::RunTest(const FString& Parameters)
//{
//	FString MapName = TEXT("AutomationTest");
//	FEngineAutomationTestUtilities::LoadMap(MapName);
//
//	int32 ResX = GSystemSettings.ResX;
//	int32 ResY = GSystemSettings.ResY;
//	FString RestoreResolutionString = FString::Printf(TEXT("setres %dx%d"), ResX, ResY);
//
//	ADD_LATENT_AUTOMATION_COMMAND(FEngineWaitLatentCommand(2.0f));
//	ADD_LATENT_AUTOMATION_COMMAND(FExecStringLatentCommand(TEXT("setres 640x480")));
//	ADD_LATENT_AUTOMATION_COMMAND(FEngineWaitLatentCommand(2.0f));
//	ADD_LATENT_AUTOMATION_COMMAND(FExecStringLatentCommand(RestoreResolutionString));
//
//	return true;
