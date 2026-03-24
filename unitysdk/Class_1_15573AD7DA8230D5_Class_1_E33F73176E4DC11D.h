#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigDamageStaggerLevel; }
namespace System { class Action; }

#define CLASS_1_15573AD7DA8230D5_CLASS_1_E33F73176E4DC11D_METHOD_1_B6C28034A02CD0F2_OFFSET UNITYSDK_OFFSET(0xDA3F250)
#define CLASS_1_15573AD7DA8230D5_CLASS_1_E33F73176E4DC11D__CTOR_OFFSET UNITYSDK_OFFSET(0xDA3F240)

inline static constexpr unsigned int Class_1_15573AD7DA8230D5_Class_1_E33F73176E4DC11D_TypeDefinitionIndex = 62318;

class Class_1_15573AD7DA8230D5_Class_1_E33F73176E4DC11D : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15573AD7DA8230D5_CLASS_1_E33F73176E4DC11D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B6C28034A02CD0F2(::MoleMole::Config::ConfigDamageStaggerLevel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDamageStaggerLevel*))((::PBYTE)hIl2Cpp + CLASS_1_15573AD7DA8230D5_CLASS_1_E33F73176E4DC11D_METHOD_1_B6C28034A02CD0F2_OFFSET))(this, a1);
	}
};
