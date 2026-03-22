#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMaterialKeywordConditions; }
namespace System { class Action; }

#define CLASS_1_05C97AA144A3F131_CLASS_1_39CBED7694A0D9F4_METHOD_1_68CD5691A7932930_OFFSET UNITYSDK_OFFSET(0x6DF17D0)
#define CLASS_1_05C97AA144A3F131_CLASS_1_39CBED7694A0D9F4__CTOR_OFFSET UNITYSDK_OFFSET(0x6DF17C0)

inline static constexpr unsigned int Class_1_05C97AA144A3F131_Class_1_39CBED7694A0D9F4_TypeDefinitionIndex = 51408;

class Class_1_05C97AA144A3F131_Class_1_39CBED7694A0D9F4 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::Foundation::AssetPath Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05C97AA144A3F131_CLASS_1_39CBED7694A0D9F4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_68CD5691A7932930(::MoleMole::Config::ConfigMaterialKeywordConditions* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialKeywordConditions*))((::PBYTE)hIl2Cpp + CLASS_1_05C97AA144A3F131_CLASS_1_39CBED7694A0D9F4_METHOD_1_68CD5691A7932930_OFFSET))(this, a1);
	}
};
