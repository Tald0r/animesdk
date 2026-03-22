#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2187E7700BED0850.h"
#include "unitysdk/System/Object.h"

class Class_3_DD4E81D56D779236;

#define CLASS_1_7AB34D40654A69A3__CCTOR_OFFSET UNITYSDK_OFFSET(0xB8ABBB0)

inline static constexpr unsigned int Class_1_7AB34D40654A69A3_TypeDefinitionIndex = 72751;

class Class_1_7AB34D40654A69A3 : public ::System::Object
{
public:
	static ::Class_3_DD4E81D56D779236** StaticGet_Field_1_1()
	{
		return (::Class_3_DD4E81D56D779236**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7AB34D40654A69A3_TypeDefinitionIndex)->GetStaticField(0x40370);
	}
	static ::Il2CppArray<::Enum_3_2187E7700BED0850>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Enum_3_2187E7700BED0850>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7AB34D40654A69A3_TypeDefinitionIndex)->GetStaticField(0x40378);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7AB34D40654A69A3__CCTOR_OFFSET))();
	}
};
