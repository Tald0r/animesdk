#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AvatarScriptAndAnimOverrideConfig; }
namespace System { class Action; }

#define CLASS_1_A5E122FE28B8DB39_CLASS_1_349C18A2301F0B7B_METHOD_1_F995FD4537F9C94E_OFFSET UNITYSDK_OFFSET(0xD753420)
#define CLASS_1_A5E122FE28B8DB39_CLASS_1_349C18A2301F0B7B__CTOR_OFFSET UNITYSDK_OFFSET(0xD753410)

inline static constexpr unsigned int Class_1_A5E122FE28B8DB39_Class_1_349C18A2301F0B7B_TypeDefinitionIndex = 57473;

class Class_1_A5E122FE28B8DB39_Class_1_349C18A2301F0B7B : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5E122FE28B8DB39_CLASS_1_349C18A2301F0B7B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F995FD4537F9C94E(::MoleMole::Config::AvatarScriptAndAnimOverrideConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AvatarScriptAndAnimOverrideConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A5E122FE28B8DB39_CLASS_1_349C18A2301F0B7B_METHOD_1_F995FD4537F9C94E_OFFSET))(this, a1);
	}
};
