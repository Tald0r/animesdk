#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F00DC819D834EFD2.h"
#include "unitysdk/System/Object.h"

class Class_1_BC9D27E6028F322B;
class Class_2_57587AE61BE1CFFD;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_57587AE61BE1CFFD_CLASS_1_8AC64B44EDFF34A3_METHOD_1_F5EBA06201CE2339_OFFSET UNITYSDK_OFFSET(0x688E8F0)
#define CLASS_2_57587AE61BE1CFFD_CLASS_1_8AC64B44EDFF34A3__CTOR_OFFSET UNITYSDK_OFFSET(0x688E8E0)

inline static constexpr unsigned int Class_2_57587AE61BE1CFFD_Class_1_8AC64B44EDFF34A3_TypeDefinitionIndex = 54918;

class Class_2_57587AE61BE1CFFD_Class_1_8AC64B44EDFF34A3 : public ::System::Object
{
public:
	::System::Action_1<::Class_1_BC9D27E6028F322B*>* Field_1_7; // 0x10
	::System::String* Field_1_4; // 0x18
	::Class_2_57587AE61BE1CFFD* Field_1_0; // 0x20
	::System::Action_1<::Class_1_BC9D27E6028F322B*>* Field_1_2; // 0x28
	::MoleMole::Battle::Entity* Field_1_3; // 0x30
	::Enum_3_F00DC819D834EFD2 Field_1_6; // 0x38
	::System::Int32 Field_1_1; // 0x3C
	::System::Int32 Field_1_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_CLASS_1_8AC64B44EDFF34A3__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F5EBA06201CE2339()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_CLASS_1_8AC64B44EDFF34A3_METHOD_1_F5EBA06201CE2339_OFFSET))(this);
	}
};
