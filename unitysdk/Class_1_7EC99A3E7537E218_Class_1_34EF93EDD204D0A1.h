#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSoundWave; }
namespace System { class Action; }

#define CLASS_1_7EC99A3E7537E218_CLASS_1_34EF93EDD204D0A1_METHOD_1_A46340B49490903B_1_OFFSET UNITYSDK_OFFSET(0xB431350)
#define CLASS_1_7EC99A3E7537E218_CLASS_1_34EF93EDD204D0A1_METHOD_1_A46340B49490903B_OFFSET UNITYSDK_OFFSET(0xB4312F0)
#define CLASS_1_7EC99A3E7537E218_CLASS_1_34EF93EDD204D0A1__CTOR_OFFSET UNITYSDK_OFFSET(0xB4312E0)

inline static constexpr unsigned int Class_1_7EC99A3E7537E218_Class_1_34EF93EDD204D0A1_TypeDefinitionIndex = 60005;

class Class_1_7EC99A3E7537E218_Class_1_34EF93EDD204D0A1 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EC99A3E7537E218_CLASS_1_34EF93EDD204D0A1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A46340B49490903B(::MoleMole::Config::ConfigSoundWave* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundWave*))((::PBYTE)hIl2Cpp + CLASS_1_7EC99A3E7537E218_CLASS_1_34EF93EDD204D0A1_METHOD_1_A46340B49490903B_OFFSET))(this, a1);
	}

	::System::Void Method_1_A46340B49490903B_1(::MoleMole::Config::ConfigSoundWave* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundWave*))((::PBYTE)hIl2Cpp + CLASS_1_7EC99A3E7537E218_CLASS_1_34EF93EDD204D0A1_METHOD_1_A46340B49490903B_1_OFFSET))(this, a1);
	}
};
