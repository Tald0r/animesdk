#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMaterialKeywordConditions; }
namespace System { class Action; }

#define CLASS_1_05C97AA144A3F131_CLASS_1_90414632A3F3C457_METHOD_1_9296D34E27D67CD0_OFFSET UNITYSDK_OFFSET(0xB551940)
#define CLASS_1_05C97AA144A3F131_CLASS_1_90414632A3F3C457__CTOR_OFFSET UNITYSDK_OFFSET(0xB551930)

inline static constexpr unsigned int Class_1_05C97AA144A3F131_Class_1_90414632A3F3C457_TypeDefinitionIndex = 55661;

class Class_1_05C97AA144A3F131_Class_1_90414632A3F3C457 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_1; // 0x10
	::System::Action* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05C97AA144A3F131_CLASS_1_90414632A3F3C457__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9296D34E27D67CD0(::MoleMole::Config::ConfigMaterialKeywordConditions* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialKeywordConditions*))((::PBYTE)hIl2Cpp + CLASS_1_05C97AA144A3F131_CLASS_1_90414632A3F3C457_METHOD_1_9296D34E27D67CD0_OFFSET))(this, a1);
	}
};
