#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_283223D064E35F85_Class_1_61AE483B33052410_30;
namespace MoleMole::Config { class ConfigGamepadRumble; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_283223D064E35F85_CLASS_1_B53C617F5FF16D05_METHOD_1_878B4E18708395ED_OFFSET UNITYSDK_OFFSET(0xD524B30)
#define CLASS_1_283223D064E35F85_CLASS_1_B53C617F5FF16D05__CTOR_OFFSET UNITYSDK_OFFSET(0xD524870)

inline static constexpr unsigned int Class_1_283223D064E35F85_Class_1_B53C617F5FF16D05_TypeDefinitionIndex = 45177;

class Class_1_283223D064E35F85_Class_1_B53C617F5FF16D05 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigGamepadRumble*>* Field_1_2; // 0x10
	::Class_1_283223D064E35F85_Class_1_61AE483B33052410_30* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_283223D064E35F85_CLASS_1_B53C617F5FF16D05__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_878B4E18708395ED(::MoleMole::Config::ConfigGamepadRumble* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGamepadRumble*))((::PBYTE)hIl2Cpp + CLASS_1_283223D064E35F85_CLASS_1_B53C617F5FF16D05_METHOD_1_878B4E18708395ED_OFFSET))(this, a1);
	}
};
