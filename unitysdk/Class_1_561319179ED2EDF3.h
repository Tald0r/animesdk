#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::MiniGame::BangbooPartyGame { class MonoBangbooPartyAIPathPoint; }

#define CLASS_1_561319179ED2EDF3_METHOD_1_51214E4749E5135B_OFFSET UNITYSDK_OFFSET(0x9AEA340)
#define CLASS_1_561319179ED2EDF3__CTOR_OFFSET UNITYSDK_OFFSET(0x9AEA3E0)

inline static constexpr unsigned int Class_1_561319179ED2EDF3_TypeDefinitionIndex = 45358;

class Class_1_561319179ED2EDF3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_561319179ED2EDF3__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*>* Method_1_51214E4749E5135B()
	{
		return ((::Il2CppArray<::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_561319179ED2EDF3_METHOD_1_51214E4749E5135B_OFFSET))(this);
	}
};
