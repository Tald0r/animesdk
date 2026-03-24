#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSpecialEffectHitWall; }
namespace System { class Action; }

#define CLASS_1_A23478E8A9A00866_CLASS_1_D2A14E93742A0422_METHOD_1_531EA6EBFA63A50B_OFFSET UNITYSDK_OFFSET(0x669A640)
#define CLASS_1_A23478E8A9A00866_CLASS_1_D2A14E93742A0422__CTOR_OFFSET UNITYSDK_OFFSET(0x669A630)

inline static constexpr unsigned int Class_1_A23478E8A9A00866_Class_1_D2A14E93742A0422_TypeDefinitionIndex = 74499;

class Class_1_A23478E8A9A00866_Class_1_D2A14E93742A0422 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::Foundation::AssetPath Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A23478E8A9A00866_CLASS_1_D2A14E93742A0422__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_531EA6EBFA63A50B(::MoleMole::Config::ConfigSpecialEffectHitWall* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSpecialEffectHitWall*))((::PBYTE)hIl2Cpp + CLASS_1_A23478E8A9A00866_CLASS_1_D2A14E93742A0422_METHOD_1_531EA6EBFA63A50B_OFFSET))(this, a1);
	}
};
