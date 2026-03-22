#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_D06919D0930604DE_Enum_3_4845697BF1CAFCFF.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_00B12133F4FA9EF2__CCTOR_OFFSET UNITYSDK_OFFSET(0x88F21F0)

inline static constexpr unsigned int Class_1_00B12133F4FA9EF2_TypeDefinitionIndex = 49301;

class Class_1_00B12133F4FA9EF2 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_4_D06919D0930604DE_Enum_3_4845697BF1CAFCFF>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::Class_4_D06919D0930604DE_Enum_3_4845697BF1CAFCFF>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_00B12133F4FA9EF2_TypeDefinitionIndex)->GetStaticField(0x2EEF0);
	}
	static ::System::Collections::Generic::List_1<::Class_4_D06919D0930604DE_Enum_3_4845697BF1CAFCFF>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_4_D06919D0930604DE_Enum_3_4845697BF1CAFCFF>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_00B12133F4FA9EF2_TypeDefinitionIndex)->GetStaticField(0x2EEF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_00B12133F4FA9EF2__CCTOR_OFFSET))();
	}
};
