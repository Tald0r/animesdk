#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/System/Object.h"

class Class_2_125A8668F94B4EAE;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_C457B755E12E9DD0_CLASS_1_98F859BFC9DAF2EA_METHOD_1_50AA22E7AB14BB60_OFFSET UNITYSDK_OFFSET(0x7470A90)
#define STRUCT_2_C457B755E12E9DD0_CLASS_1_98F859BFC9DAF2EA__CTOR_OFFSET UNITYSDK_OFFSET(0x7470A80)

inline static constexpr unsigned int Struct_2_C457B755E12E9DD0_Class_1_98F859BFC9DAF2EA_TypeDefinitionIndex = 74034;

class Struct_2_C457B755E12E9DD0_Class_1_98F859BFC9DAF2EA : public ::System::Object
{
public:
	::Class_2_125A8668F94B4EAE* Field_1_0; // 0x10
	::Foundation::Variable_1<::System::UInt32> Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_1_3; // 0x30
	::System::UInt64 Field_1_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C457B755E12E9DD0_CLASS_1_98F859BFC9DAF2EA__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_50AA22E7AB14BB60(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + STRUCT_2_C457B755E12E9DD0_CLASS_1_98F859BFC9DAF2EA_METHOD_1_50AA22E7AB14BB60_OFFSET))(this, a1);
	}
};
