#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUICoopTeam3D; }
namespace System { class Action; }

#define CLASS_1_52C9583DC88D1BB8_CLASS_1_8DAC482F1DDBD0E1_METHOD_1_8EBE9A2850052CEF_OFFSET UNITYSDK_OFFSET(0x61F9680)
#define CLASS_1_52C9583DC88D1BB8_CLASS_1_8DAC482F1DDBD0E1__CTOR_OFFSET UNITYSDK_OFFSET(0x61F9670)

inline static constexpr unsigned int Class_1_52C9583DC88D1BB8_Class_1_8DAC482F1DDBD0E1_TypeDefinitionIndex = 39450;

class Class_1_52C9583DC88D1BB8_Class_1_8DAC482F1DDBD0E1 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C9583DC88D1BB8_CLASS_1_8DAC482F1DDBD0E1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8EBE9A2850052CEF(::MoleMole::ConfigUICoopTeam3D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICoopTeam3D*))((::PBYTE)hIl2Cpp + CLASS_1_52C9583DC88D1BB8_CLASS_1_8DAC482F1DDBD0E1_METHOD_1_8EBE9A2850052CEF_OFFSET))(this, a1);
	}
};
