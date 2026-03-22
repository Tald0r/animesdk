#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class FootPrintConfigs; }
namespace System { class Action; }

#define CLASS_1_DE3B54A62DC91559_CLASS_1_0F58BF2DE0E86038_METHOD_1_9FC7816927FC34F9_OFFSET UNITYSDK_OFFSET(0x7356D00)
#define CLASS_1_DE3B54A62DC91559_CLASS_1_0F58BF2DE0E86038__CTOR_OFFSET UNITYSDK_OFFSET(0x7356CF0)

inline static constexpr unsigned int Class_1_DE3B54A62DC91559_Class_1_0F58BF2DE0E86038_TypeDefinitionIndex = 75940;

class Class_1_DE3B54A62DC91559_Class_1_0F58BF2DE0E86038 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE3B54A62DC91559_CLASS_1_0F58BF2DE0E86038__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9FC7816927FC34F9(::MoleMole::Config::FootPrintConfigs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::FootPrintConfigs*))((::PBYTE)hIl2Cpp + CLASS_1_DE3B54A62DC91559_CLASS_1_0F58BF2DE0E86038_METHOD_1_9FC7816927FC34F9_OFFSET))(this, a1);
	}
};
