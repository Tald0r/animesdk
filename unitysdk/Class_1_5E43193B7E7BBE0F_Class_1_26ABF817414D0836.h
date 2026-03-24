#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCommonEntityAnimEvents; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_5E43193B7E7BBE0F_CLASS_1_26ABF817414D0836_METHOD_1_2D459E0C7BA466A7_OFFSET UNITYSDK_OFFSET(0x88B3980)
#define CLASS_1_5E43193B7E7BBE0F_CLASS_1_26ABF817414D0836__CTOR_OFFSET UNITYSDK_OFFSET(0x88B3970)

inline static constexpr unsigned int Class_1_5E43193B7E7BBE0F_Class_1_26ABF817414D0836_TypeDefinitionIndex = 57376;

class Class_1_5E43193B7E7BBE0F_Class_1_26ABF817414D0836 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E43193B7E7BBE0F_CLASS_1_26ABF817414D0836__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2D459E0C7BA466A7(::MoleMole::Config::ConfigCommonEntityAnimEvents* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCommonEntityAnimEvents*))((::PBYTE)hIl2Cpp + CLASS_1_5E43193B7E7BBE0F_CLASS_1_26ABF817414D0836_METHOD_1_2D459E0C7BA466A7_OFFSET))(this, a1);
	}
};
