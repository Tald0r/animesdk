#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigDynamicAccessories; }
namespace System { class Action; }

#define CLASS_1_49105453559132CC_CLASS_1_EEE915ECA5E85031_METHOD_1_741CDCB58AD3533F_OFFSET UNITYSDK_OFFSET(0x7B1B8C0)
#define CLASS_1_49105453559132CC_CLASS_1_EEE915ECA5E85031__CTOR_OFFSET UNITYSDK_OFFSET(0x7B1B8B0)

inline static constexpr unsigned int Class_1_49105453559132CC_Class_1_EEE915ECA5E85031_TypeDefinitionIndex = 66927;

class Class_1_49105453559132CC_Class_1_EEE915ECA5E85031 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49105453559132CC_CLASS_1_EEE915ECA5E85031__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_741CDCB58AD3533F(::MoleMole::Config::ConfigDynamicAccessories* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDynamicAccessories*))((::PBYTE)hIl2Cpp + CLASS_1_49105453559132CC_CLASS_1_EEE915ECA5E85031_METHOD_1_741CDCB58AD3533F_OFFSET))(this, a1);
	}
};
