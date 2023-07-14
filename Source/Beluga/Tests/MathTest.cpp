#include "BelugaMinimal.h"
#include "Misc/AutomationTest.h"


//============[ FVector TEST ]============================================================================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaFVectorTest, "Beluga.FVector", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
bool FBelugaFVectorTest::RunTest(const FString& Parameters)
{
	//-------------------[ 내적, 외적 ]-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	{
		FVector Vec1(1.0f, 2.0f, 3.0f);
		FVector Vec2(4.0f, 5.0f, 6.0f);

		float DotProductResult = FVector::DotProduct(Vec1, Vec2);
		FVector CrossProductResult = FVector::CrossProduct(Vec1, Vec2);

		TestEqual("[ DotProduct ] test result", DotProductResult, 32.0f);
		TestEqual("[ CrossProduct ] test result", CrossProductResult, FVector(-3.0f, 6.0f, -3.0f));
	}

	//-------------------[ Vector Size ]-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	{
		FVector TestVec(3.0f, 4.0f, 0.0f); 		
		float TestVecSize = TestVec.Size();

		TestEqual("[ Vector Size ] test result", TestVecSize, 5.0f);
	}

	return true;
}


//============[ FRotator TEST ]============================================================================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaFRotatorTest, "Beluga.FRotator", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
bool FBelugaFRotatorTest::RunTest(const FString& Parameters)
{
	//-------------------[ Rotator Normalize ]-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	{
		FRotator TestRot(135.0f, 270.0f, 540.0f);
		FRotator NormalizedResult = TestRot.GetNormalized();

		TestEqual("[ Rotator Normalize ] test result", NormalizedResult, FRotator(-45.0f, 90.0f, 180.0f));
	}

	//-------------------[ Equal Test ]-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	{
		FRotator Rot1(10.0f, 20.0f, 30.0f);
		FRotator Rot2(20.0f, 30.0f, 10.0f);

		TestFalse("[Rotator Normalize] test result", Rot1.Equals(Rot2, 0.01f));		
	}

	//-------------------[ Rotator to Vector ]-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	{
		FRotator TestRot(0.0f, 90.0f, 0.0f);
		FVector ResultVec = TestRot.Vector();

		TestEqual("[Rotator Normalize] test result", ResultVec, FVector(1.0f, 0.0f, 0.0f));
	}

	return true;
}


//============[ FMatrix TEST ]============================================================================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaFMatrixTest, "Beluga.FMatrix", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
bool FBelugaFMatrixTest::RunTest(const FString& Parameters)
{

	return true;
}


//============[ FTransform TEST ]============================================================================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaFTransformTest, "Beluga.FTransform", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
bool FBelugaFTransformTest::RunTest(const FString& Parameters)
{
	return true;
}
