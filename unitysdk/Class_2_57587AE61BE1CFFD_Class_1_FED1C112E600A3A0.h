#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F00DC819D834EFD2.h"
#include "unitysdk/Struct_2_733B8EC4B9916061.h"
#include "unitysdk/System/Object.h"

class Class_1_BC9D27E6028F322B;
class Class_2_57587AE61BE1CFFD;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_57587AE61BE1CFFD_CLASS_1_FED1C112E600A3A0_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x616AC60)
#define CLASS_2_57587AE61BE1CFFD_CLASS_1_FED1C112E600A3A0__CTOR_OFFSET UNITYSDK_OFFSET(0x616AC50)

inline static constexpr unsigned int Class_2_57587AE61BE1CFFD_Class_1_FED1C112E600A3A0_TypeDefinitionIndex = 53508;

class Class_2_57587AE61BE1CFFD_Class_1_FED1C112E600A3A0 : public ::System::Object
{
public:
	::Class_2_57587AE61BE1CFFD* Field_1_0; // 0x10
	::System::String* Field_1_4; // 0x18
	::System::Action_1<::Class_1_BC9D27E6028F322B*>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_1_3; // 0x28
	::System::Int32 Field_1_1; // 0x30
	::Enum_3_F00DC819D834EFD2 Field_1_5; // 0x34
	::Struct_2_733B8EC4B9916061 Field_1_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_CLASS_1_FED1C112E600A3A0__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_CLASS_1_FED1C112E600A3A0_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
