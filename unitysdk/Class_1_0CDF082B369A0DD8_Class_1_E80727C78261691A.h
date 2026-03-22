#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMaterialPropertyModifierMap; }

#define CLASS_1_0CDF082B369A0DD8_CLASS_1_E80727C78261691A_METHOD_1_5513C226AB4F3753_OFFSET UNITYSDK_OFFSET(0x64733A0)
#define CLASS_1_0CDF082B369A0DD8_CLASS_1_E80727C78261691A__CTOR_OFFSET UNITYSDK_OFFSET(0x6473390)

inline static constexpr unsigned int Class_1_0CDF082B369A0DD8_Class_1_E80727C78261691A_TypeDefinitionIndex = 55197;

class Class_1_0CDF082B369A0DD8_Class_1_E80727C78261691A : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_CLASS_1_E80727C78261691A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5513C226AB4F3753(::MoleMole::Config::ConfigMaterialPropertyModifierMap* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyModifierMap*))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_CLASS_1_E80727C78261691A_METHOD_1_5513C226AB4F3753_OFFSET))(this, a1);
	}
};
