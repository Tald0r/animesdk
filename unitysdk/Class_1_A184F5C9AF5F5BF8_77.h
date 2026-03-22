#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_A184F5C9AF5F5BF8_77__CCTOR_OFFSET UNITYSDK_OFFSET(0x8EC1930)

inline static constexpr unsigned int Class_1_A184F5C9AF5F5BF8_77_TypeDefinitionIndex = 59000;

class Class_1_A184F5C9AF5F5BF8_77 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A184F5C9AF5F5BF8_77_TypeDefinitionIndex)->GetStaticField(0x2A9C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A184F5C9AF5F5BF8_77__CCTOR_OFFSET))();
	}
};
