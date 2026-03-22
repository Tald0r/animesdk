#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIVirtualJoystick; }
namespace System { class Action; }

#define CLASS_1_6F74A974157DAC2A_CLASS_1_1CB1EC0EF748C1E9_METHOD_1_8D32ABD09BF2C565_OFFSET UNITYSDK_OFFSET(0xAAEE2F0)
#define CLASS_1_6F74A974157DAC2A_CLASS_1_1CB1EC0EF748C1E9__CTOR_OFFSET UNITYSDK_OFFSET(0xAAEE2E0)

inline static constexpr unsigned int Class_1_6F74A974157DAC2A_Class_1_1CB1EC0EF748C1E9_TypeDefinitionIndex = 46057;

class Class_1_6F74A974157DAC2A_Class_1_1CB1EC0EF748C1E9 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F74A974157DAC2A_CLASS_1_1CB1EC0EF748C1E9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8D32ABD09BF2C565(::MoleMole::Config::ConfigUIVirtualJoystick* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIVirtualJoystick*))((::PBYTE)hIl2Cpp + CLASS_1_6F74A974157DAC2A_CLASS_1_1CB1EC0EF748C1E9_METHOD_1_8D32ABD09BF2C565_OFFSET))(this, a1);
	}
};
