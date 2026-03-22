#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_125A8668F94B4EAE_Struct_2_B1088F951BCB4BAD.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5EA04932F3E7FC4B_CLASS_1_45A06B85C94C1761_METHOD_1_50AA22E7AB14BB60_OFFSET UNITYSDK_OFFSET(0x74E83C0)
#define CLASS_2_5EA04932F3E7FC4B_CLASS_1_45A06B85C94C1761_METHOD_1_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0x74E88A0)
#define CLASS_2_5EA04932F3E7FC4B_CLASS_1_45A06B85C94C1761__CTOR_OFFSET UNITYSDK_OFFSET(0x74E83B0)

inline static constexpr unsigned int Class_2_5EA04932F3E7FC4B_Class_1_45A06B85C94C1761_TypeDefinitionIndex = 58880;

class Class_2_5EA04932F3E7FC4B_Class_1_45A06B85C94C1761 : public ::System::Object
{
public:
	::Foundation::Variable_1<::System::UInt32> Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_2; // 0x28
	::Class_2_125A8668F94B4EAE_Struct_2_B1088F951BCB4BAD Field_1_3; // 0x30
	::System::UInt64 Field_1_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EA04932F3E7FC4B_CLASS_1_45A06B85C94C1761__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_50AA22E7AB14BB60(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_5EA04932F3E7FC4B_CLASS_1_45A06B85C94C1761_METHOD_1_50AA22E7AB14BB60_OFFSET))(this, a1);
	}

	::System::Void Method_1_5EBCF276C230582C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EA04932F3E7FC4B_CLASS_1_45A06B85C94C1761_METHOD_1_5EBCF276C230582C_OFFSET))(this);
	}
};
