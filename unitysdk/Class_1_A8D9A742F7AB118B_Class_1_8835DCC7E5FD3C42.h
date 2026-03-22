#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAutoBattleAccessoryEffect; }
namespace System { class Action; }

#define CLASS_1_A8D9A742F7AB118B_CLASS_1_8835DCC7E5FD3C42_METHOD_1_DE0F4F253EF1F5A0_OFFSET UNITYSDK_OFFSET(0x701F0D0)
#define CLASS_1_A8D9A742F7AB118B_CLASS_1_8835DCC7E5FD3C42__CTOR_OFFSET UNITYSDK_OFFSET(0x701F0C0)

inline static constexpr unsigned int Class_1_A8D9A742F7AB118B_Class_1_8835DCC7E5FD3C42_TypeDefinitionIndex = 55528;

class Class_1_A8D9A742F7AB118B_Class_1_8835DCC7E5FD3C42 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8D9A742F7AB118B_CLASS_1_8835DCC7E5FD3C42__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DE0F4F253EF1F5A0(::MoleMole::Config::ConfigAutoBattleAccessoryEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAutoBattleAccessoryEffect*))((::PBYTE)hIl2Cpp + CLASS_1_A8D9A742F7AB118B_CLASS_1_8835DCC7E5FD3C42_METHOD_1_DE0F4F253EF1F5A0_OFFSET))(this, a1);
	}
};
