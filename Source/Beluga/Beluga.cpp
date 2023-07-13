#include "BelugaMinimal.h"
DEFINE_LOG_CATEGORY(LogBeluga);


class FBelugaModule : public FDefaultGameModuleImpl
{
public:
	virtual void StartupModule() override
	{
		/*static const FName NAME_Foo(TEXT("Foo"));


		UE_LOG(LogBeluga, Warning, TEXT("Result : %i"), bResult);
		
		UE_LOG(LogBeluga, Display, TEXT("BelugaModule::StartupModule"));*/
		/*FString testStr;

		FString str1(TEXT("apple"));*/

		/*extern void Test1();
		Test1();*/


		
	}
	virtual void ShutdownModule() override
	{
		UE_LOG(LogBeluga, Display, TEXT("BelugaModule::ShutdownModule"));
	}
};

IMPLEMENT_PRIMARY_GAME_MODULE(FBelugaModule, Beluga, "Beluga");