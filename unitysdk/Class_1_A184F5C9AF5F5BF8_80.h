#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_A184F5C9AF5F5BF8_80__CCTOR_OFFSET UNITYSDK_OFFSET(0x66AF5D0)

inline static constexpr unsigned int Class_1_A184F5C9AF5F5BF8_80_TypeDefinitionIndex = 56777;

class Class_1_A184F5C9AF5F5BF8_80 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A184F5C9AF5F5BF8_80_TypeDefinitionIndex)->GetStaticField(0x3E500);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A184F5C9AF5F5BF8_80__CCTOR_OFFSET))();
	}
};
