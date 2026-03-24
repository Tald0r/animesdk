#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIFontSize; }
namespace System { class Action; }

#define CLASS_1_4B3BE39F4DC7105E_CLASS_1_E78C3BC63E897983_METHOD_1_AE536077056FB146_OFFSET UNITYSDK_OFFSET(0xAA09010)
#define CLASS_1_4B3BE39F4DC7105E_CLASS_1_E78C3BC63E897983__CTOR_OFFSET UNITYSDK_OFFSET(0xAA09000)

inline static constexpr unsigned int Class_1_4B3BE39F4DC7105E_Class_1_E78C3BC63E897983_TypeDefinitionIndex = 40810;

class Class_1_4B3BE39F4DC7105E_Class_1_E78C3BC63E897983 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B3BE39F4DC7105E_CLASS_1_E78C3BC63E897983__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AE536077056FB146(::MoleMole::Config::ConfigUIFontSize* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIFontSize*))((::PBYTE)hIl2Cpp + CLASS_1_4B3BE39F4DC7105E_CLASS_1_E78C3BC63E897983_METHOD_1_AE536077056FB146_OFFSET))(this, a1);
	}
};
