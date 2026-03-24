#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTeamEntity; }
namespace System { class Action; }

#define CLASS_1_C6DBCB428E6530DE_CLASS_1_D3C5C7352D282E54_METHOD_1_9D6B02CEB61A10BA_OFFSET UNITYSDK_OFFSET(0xA7613D0)
#define CLASS_1_C6DBCB428E6530DE_CLASS_1_D3C5C7352D282E54__CTOR_OFFSET UNITYSDK_OFFSET(0xA7613C0)

inline static constexpr unsigned int Class_1_C6DBCB428E6530DE_Class_1_D3C5C7352D282E54_TypeDefinitionIndex = 69458;

class Class_1_C6DBCB428E6530DE_Class_1_D3C5C7352D282E54 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6DBCB428E6530DE_CLASS_1_D3C5C7352D282E54__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9D6B02CEB61A10BA(::MoleMole::Config::ConfigTeamEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTeamEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C6DBCB428E6530DE_CLASS_1_D3C5C7352D282E54_METHOD_1_9D6B02CEB61A10BA_OFFSET))(this, a1);
	}
};
