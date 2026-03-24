#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAudioBasePath; }
namespace System { class Action; }

#define CLASS_1_7BC57D3232553905_CLASS_1_E713582DFE2CDF82_METHOD_1_61A9585B2690ACC0_OFFSET UNITYSDK_OFFSET(0x93608D0)
#define CLASS_1_7BC57D3232553905_CLASS_1_E713582DFE2CDF82__CTOR_OFFSET UNITYSDK_OFFSET(0x93608C0)

inline static constexpr unsigned int Class_1_7BC57D3232553905_Class_1_E713582DFE2CDF82_TypeDefinitionIndex = 41331;

class Class_1_7BC57D3232553905_Class_1_E713582DFE2CDF82 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BC57D3232553905_CLASS_1_E713582DFE2CDF82__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_61A9585B2690ACC0(::MoleMole::Config::ConfigAudioBasePath* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAudioBasePath*))((::PBYTE)hIl2Cpp + CLASS_1_7BC57D3232553905_CLASS_1_E713582DFE2CDF82_METHOD_1_61A9585B2690ACC0_OFFSET))(this, a1);
	}
};
