#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTeleportSelections; }
namespace System { class Action; }

#define CLASS_1_F6B785197712430F_CLASS_1_508BD3E8D7F45947_METHOD_1_B71491C679ABAA3C_OFFSET UNITYSDK_OFFSET(0x87EC2B0)
#define CLASS_1_F6B785197712430F_CLASS_1_508BD3E8D7F45947__CTOR_OFFSET UNITYSDK_OFFSET(0x87EC2A0)

inline static constexpr unsigned int Class_1_F6B785197712430F_Class_1_508BD3E8D7F45947_TypeDefinitionIndex = 68013;

class Class_1_F6B785197712430F_Class_1_508BD3E8D7F45947 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6B785197712430F_CLASS_1_508BD3E8D7F45947__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B71491C679ABAA3C(::MoleMole::Config::ConfigTeleportSelections* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTeleportSelections*))((::PBYTE)hIl2Cpp + CLASS_1_F6B785197712430F_CLASS_1_508BD3E8D7F45947_METHOD_1_B71491C679ABAA3C_OFFSET))(this, a1);
	}
};
