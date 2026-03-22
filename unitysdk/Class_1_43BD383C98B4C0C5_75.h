#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::MiniGame::BangbooPartyGame { class MonoMarcelBlock; }

#define CLASS_1_43BD383C98B4C0C5_75_COLLECT_OFFSET UNITYSDK_OFFSET(0x9112990)
#define CLASS_1_43BD383C98B4C0C5_75__CTOR_OFFSET UNITYSDK_OFFSET(0x9112A30)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_75_TypeDefinitionIndex = 47919;

class Class_1_43BD383C98B4C0C5_75 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_75__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock*>* Collect()
	{
		return ((::Il2CppArray<::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_75_COLLECT_OFFSET))(this);
	}
};
