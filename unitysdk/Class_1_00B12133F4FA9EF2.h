#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_D06919D0930604DE_Enum_3_F7B17BC384A28970.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_00B12133F4FA9EF2__CCTOR_OFFSET UNITYSDK_OFFSET(0x8FE65E0)

inline static constexpr unsigned int Class_1_00B12133F4FA9EF2_TypeDefinitionIndex = 50955;

class Class_1_00B12133F4FA9EF2 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_4_D06919D0930604DE_Enum_3_F7B17BC384A28970>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::Class_4_D06919D0930604DE_Enum_3_F7B17BC384A28970>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_00B12133F4FA9EF2_TypeDefinitionIndex)->GetStaticField(0x2C120);
	}
	static ::System::Collections::Generic::List_1<::Class_4_D06919D0930604DE_Enum_3_F7B17BC384A28970>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_4_D06919D0930604DE_Enum_3_F7B17BC384A28970>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_00B12133F4FA9EF2_TypeDefinitionIndex)->GetStaticField(0x2C128);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_00B12133F4FA9EF2__CCTOR_OFFSET))();
	}
};
