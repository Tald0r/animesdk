#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGachaPerformance; }
namespace System { class Action; }

#define CLASS_1_8180F532C070F8C3_CLASS_1_E815FCE6A2FE97B4_METHOD_1_8BFB0E187F6383F5_OFFSET UNITYSDK_OFFSET(0x953A5C0)
#define CLASS_1_8180F532C070F8C3_CLASS_1_E815FCE6A2FE97B4__CTOR_OFFSET UNITYSDK_OFFSET(0x953A5B0)

inline static constexpr unsigned int Class_1_8180F532C070F8C3_Class_1_E815FCE6A2FE97B4_TypeDefinitionIndex = 51253;

class Class_1_8180F532C070F8C3_Class_1_E815FCE6A2FE97B4 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_1; // 0x10
	::System::Action* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8180F532C070F8C3_CLASS_1_E815FCE6A2FE97B4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8BFB0E187F6383F5(::MoleMole::Config::ConfigGachaPerformance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGachaPerformance*))((::PBYTE)hIl2Cpp + CLASS_1_8180F532C070F8C3_CLASS_1_E815FCE6A2FE97B4_METHOD_1_8BFB0E187F6383F5_OFFSET))(this, a1);
	}
};
