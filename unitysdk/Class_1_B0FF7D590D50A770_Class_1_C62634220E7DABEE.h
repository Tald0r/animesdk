#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class EffectLODDataConfig; }
namespace System { class Action; }

#define CLASS_1_B0FF7D590D50A770_CLASS_1_C62634220E7DABEE_METHOD_1_2A92B0F9AC29A5A8_OFFSET UNITYSDK_OFFSET(0xBDFEB90)
#define CLASS_1_B0FF7D590D50A770_CLASS_1_C62634220E7DABEE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDFEB80)

inline static constexpr unsigned int Class_1_B0FF7D590D50A770_Class_1_C62634220E7DABEE_TypeDefinitionIndex = 78104;

class Class_1_B0FF7D590D50A770_Class_1_C62634220E7DABEE : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0FF7D590D50A770_CLASS_1_C62634220E7DABEE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2A92B0F9AC29A5A8(::MoleMole::Config::EffectLODDataConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EffectLODDataConfig*))((::PBYTE)hIl2Cpp + CLASS_1_B0FF7D590D50A770_CLASS_1_C62634220E7DABEE_METHOD_1_2A92B0F9AC29A5A8_OFFSET))(this, a1);
	}
};
