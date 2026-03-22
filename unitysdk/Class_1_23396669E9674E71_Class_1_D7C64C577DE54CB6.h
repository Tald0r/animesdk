#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityAttackEffectNames; }
namespace System { class Action; }

#define CLASS_1_23396669E9674E71_CLASS_1_D7C64C577DE54CB6_METHOD_1_7F9494B68E670F70_OFFSET UNITYSDK_OFFSET(0x87C62C0)
#define CLASS_1_23396669E9674E71_CLASS_1_D7C64C577DE54CB6__CTOR_OFFSET UNITYSDK_OFFSET(0x87C62B0)

inline static constexpr unsigned int Class_1_23396669E9674E71_Class_1_D7C64C577DE54CB6_TypeDefinitionIndex = 56493;

class Class_1_23396669E9674E71_Class_1_D7C64C577DE54CB6 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::Foundation::AssetPath Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23396669E9674E71_CLASS_1_D7C64C577DE54CB6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7F9494B68E670F70(::MoleMole::Config::ConfigEntityAttackEffectNames* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAttackEffectNames*))((::PBYTE)hIl2Cpp + CLASS_1_23396669E9674E71_CLASS_1_D7C64C577DE54CB6_METHOD_1_7F9494B68E670F70_OFFSET))(this, a1);
	}
};
