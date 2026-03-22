#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3855198EDB5CF06A_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_1_9305AC8F57DDC7FC_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x6D86DB0)
#define CLASS_1_9305AC8F57DDC7FC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6D866E0)
#define CLASS_1_9305AC8F57DDC7FC__CTOR_OFFSET UNITYSDK_OFFSET(0x6D86DA0)

inline static constexpr unsigned int Class_1_9305AC8F57DDC7FC_TypeDefinitionIndex = 43127;

class Class_1_9305AC8F57DDC7FC : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10
	::System::Single Field_1_7; // 0x18
	::System::Single Field_1_8; // 0x1C
	::System::Single Field_1_4; // 0x20
	::System::Single Field_1_5; // 0x24
	::Enum_3_3855198EDB5CF06A_1 Field_1_9; // 0x28
	::System::Single Field_1_2; // 0x2C
	::System::Single Field_1_3; // 0x30
	::UnityEngine::Vector3 Field_1_1; // 0x34
	::System::Single Field_1_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9305AC8F57DDC7FC__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9305AC8F57DDC7FC_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9305AC8F57DDC7FC_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
