#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMaterialPropertySettings; }
namespace System { class Action; }

#define CLASS_1_EF75C29E1EEA1558_CLASS_1_F447A02D2691B378_METHOD_1_E22BB22518EC4F85_OFFSET UNITYSDK_OFFSET(0x66DBC30)
#define CLASS_1_EF75C29E1EEA1558_CLASS_1_F447A02D2691B378__CTOR_OFFSET UNITYSDK_OFFSET(0x66DBC20)

inline static constexpr unsigned int Class_1_EF75C29E1EEA1558_Class_1_F447A02D2691B378_TypeDefinitionIndex = 43811;

class Class_1_EF75C29E1EEA1558_Class_1_F447A02D2691B378 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::Foundation::AssetPath Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF75C29E1EEA1558_CLASS_1_F447A02D2691B378__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E22BB22518EC4F85(::MoleMole::Config::ConfigMaterialPropertySettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertySettings*))((::PBYTE)hIl2Cpp + CLASS_1_EF75C29E1EEA1558_CLASS_1_F447A02D2691B378_METHOD_1_E22BB22518EC4F85_OFFSET))(this, a1);
	}
};
