#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMonsterAlerts; }
namespace System { class Action; }

#define CLASS_1_5E2A8BD9D2714BA0_CLASS_1_2D2C54E884A845E2_METHOD_1_A9CDE8E7F5A7DA3B_OFFSET UNITYSDK_OFFSET(0xAC97680)
#define CLASS_1_5E2A8BD9D2714BA0_CLASS_1_2D2C54E884A845E2__CTOR_OFFSET UNITYSDK_OFFSET(0xAC97670)

inline static constexpr unsigned int Class_1_5E2A8BD9D2714BA0_Class_1_2D2C54E884A845E2_TypeDefinitionIndex = 38078;

class Class_1_5E2A8BD9D2714BA0_Class_1_2D2C54E884A845E2 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E2A8BD9D2714BA0_CLASS_1_2D2C54E884A845E2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A9CDE8E7F5A7DA3B(::MoleMole::Config::ConfigMonsterAlerts* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMonsterAlerts*))((::PBYTE)hIl2Cpp + CLASS_1_5E2A8BD9D2714BA0_CLASS_1_2D2C54E884A845E2_METHOD_1_A9CDE8E7F5A7DA3B_OFFSET))(this, a1);
	}
};
