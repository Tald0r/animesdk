#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0E858BB7E45AD41E_Class_1_61AE483B33052410_11;
namespace MoleMole::Config { class ConfigUIScriptableAnimationV2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_0E858BB7E45AD41E_CLASS_1_533E13CB1B290667_METHOD_1_C29A60FDFEFB9712_OFFSET UNITYSDK_OFFSET(0x994C970)
#define CLASS_1_0E858BB7E45AD41E_CLASS_1_533E13CB1B290667__CTOR_OFFSET UNITYSDK_OFFSET(0x994C960)

inline static constexpr unsigned int Class_1_0E858BB7E45AD41E_Class_1_533E13CB1B290667_TypeDefinitionIndex = 45207;

class Class_1_0E858BB7E45AD41E_Class_1_533E13CB1B290667 : public ::System::Object
{
public:
	::Class_1_0E858BB7E45AD41E_Class_1_61AE483B33052410_11* Field_1_1; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigUIScriptableAnimationV2*>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E858BB7E45AD41E_CLASS_1_533E13CB1B290667__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C29A60FDFEFB9712(::MoleMole::Config::ConfigUIScriptableAnimationV2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIScriptableAnimationV2*))((::PBYTE)hIl2Cpp + CLASS_1_0E858BB7E45AD41E_CLASS_1_533E13CB1B290667_METHOD_1_C29A60FDFEFB9712_OFFSET))(this, a1);
	}
};
