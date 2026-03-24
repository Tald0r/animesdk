#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::MiniGame::BangbooPartyGame { class MonoMarcelBlock; }

#define CLASS_1_43BD383C98B4C0C5_26_COLLECT_OFFSET UNITYSDK_OFFSET(0x68130C0)
#define CLASS_1_43BD383C98B4C0C5_26__CTOR_OFFSET UNITYSDK_OFFSET(0x6813160)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_26_TypeDefinitionIndex = 37861;

class Class_1_43BD383C98B4C0C5_26 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_26__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock*>* Collect()
	{
		return ((::Il2CppArray<::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_26_COLLECT_OFFSET))(this);
	}
};
