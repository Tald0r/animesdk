#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigShootingGroundScriptableObject; }
namespace System { class Action; }

#define CLASS_1_0F42A885256B3519_CLASS_1_6BAA2771C9A7E5D2_METHOD_1_9788A262330747AA_OFFSET UNITYSDK_OFFSET(0xB149320)
#define CLASS_1_0F42A885256B3519_CLASS_1_6BAA2771C9A7E5D2__CTOR_OFFSET UNITYSDK_OFFSET(0xB149310)

inline static constexpr unsigned int Class_1_0F42A885256B3519_Class_1_6BAA2771C9A7E5D2_TypeDefinitionIndex = 52388;

class Class_1_0F42A885256B3519_Class_1_6BAA2771C9A7E5D2 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F42A885256B3519_CLASS_1_6BAA2771C9A7E5D2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9788A262330747AA(::MoleMole::Config::ConfigShootingGroundScriptableObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigShootingGroundScriptableObject*))((::PBYTE)hIl2Cpp + CLASS_1_0F42A885256B3519_CLASS_1_6BAA2771C9A7E5D2_METHOD_1_9788A262330747AA_OFFSET))(this, a1);
	}
};
