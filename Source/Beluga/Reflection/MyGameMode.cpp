#include "MyGameMode.h"
#include "UObject/ConstructorHelpers.h"

AMyGameMode::AMyGameMode()
{
	static ConstructorHelpers::FObjectFinder<APawn> BP_MYPAWN (TEXT("/Script/Engine.Blueprint'/Game/Beluga/BelugaPawn.BelugaPawn_C'"));
	if (BP_MYPAWN.Object)
	{
		BPMyPawn = BP_MYPAWN.Object;
	}
}

bool AMyGameMode::HongikUniv()
{
	return true;
}
