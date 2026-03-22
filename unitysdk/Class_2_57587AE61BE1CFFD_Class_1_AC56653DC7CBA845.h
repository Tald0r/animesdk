#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F00DC819D834EFD2.h"
#include "unitysdk/System/Object.h"

class Class_1_73F7DED90F9FA901;
class Class_1_BC9D27E6028F322B;
class Class_2_57587AE61BE1CFFD;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_57587AE61BE1CFFD_CLASS_1_AC56653DC7CBA845_METHOD_1_5E72916301E347E2_OFFSET UNITYSDK_OFFSET(0x60116F0)
#define CLASS_2_57587AE61BE1CFFD_CLASS_1_AC56653DC7CBA845__CTOR_OFFSET UNITYSDK_OFFSET(0x60116E0)

inline static constexpr unsigned int Class_2_57587AE61BE1CFFD_Class_1_AC56653DC7CBA845_TypeDefinitionIndex = 54930;

class Class_2_57587AE61BE1CFFD_Class_1_AC56653DC7CBA845 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_4; // 0x10
	::System::String* Field_1_5; // 0x18
	::Class_1_73F7DED90F9FA901* Field_1_1; // 0x20
	::System::Action_1<::Class_1_BC9D27E6028F322B*>* Field_1_3; // 0x28
	::Class_2_57587AE61BE1CFFD* Field_1_0; // 0x30
	::System::Int32 Field_1_6; // 0x38
	::System::Int32 Field_1_2; // 0x3C
	::Enum_3_F00DC819D834EFD2 Field_1_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_CLASS_1_AC56653DC7CBA845__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_5E72916301E347E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_CLASS_1_AC56653DC7CBA845_METHOD_1_5E72916301E347E2_OFFSET))(this);
	}
};
