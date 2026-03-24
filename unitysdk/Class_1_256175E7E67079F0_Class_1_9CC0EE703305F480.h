#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigViewObjectMisc; }
namespace System { class Action; }

#define CLASS_1_256175E7E67079F0_CLASS_1_9CC0EE703305F480_METHOD_1_951A996C84BEDB4A_OFFSET UNITYSDK_OFFSET(0x700C660)
#define CLASS_1_256175E7E67079F0_CLASS_1_9CC0EE703305F480__CTOR_OFFSET UNITYSDK_OFFSET(0x700C650)

inline static constexpr unsigned int Class_1_256175E7E67079F0_Class_1_9CC0EE703305F480_TypeDefinitionIndex = 66619;

class Class_1_256175E7E67079F0_Class_1_9CC0EE703305F480 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_256175E7E67079F0_CLASS_1_9CC0EE703305F480__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_951A996C84BEDB4A(::MoleMole::Config::ConfigViewObjectMisc* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigViewObjectMisc*))((::PBYTE)hIl2Cpp + CLASS_1_256175E7E67079F0_CLASS_1_9CC0EE703305F480_METHOD_1_951A996C84BEDB4A_OFFSET))(this, a1);
	}
};
