#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonsterMappingConfig; }
namespace System { class Action; }

#define CLASS_1_C8AA3B38C566F726_CLASS_1_13446BED78937B31_METHOD_1_2C4FEBD35B042644_OFFSET UNITYSDK_OFFSET(0xADAC470)
#define CLASS_1_C8AA3B38C566F726_CLASS_1_13446BED78937B31__CTOR_OFFSET UNITYSDK_OFFSET(0xADAC460)

inline static constexpr unsigned int Class_1_C8AA3B38C566F726_Class_1_13446BED78937B31_TypeDefinitionIndex = 44189;

class Class_1_C8AA3B38C566F726_Class_1_13446BED78937B31 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8AA3B38C566F726_CLASS_1_13446BED78937B31__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2C4FEBD35B042644(::MoleMole::MonsterMappingConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonsterMappingConfig*))((::PBYTE)hIl2Cpp + CLASS_1_C8AA3B38C566F726_CLASS_1_13446BED78937B31_METHOD_1_2C4FEBD35B042644_OFFSET))(this, a1);
	}
};
