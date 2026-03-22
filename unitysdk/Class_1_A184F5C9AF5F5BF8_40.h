#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_A184F5C9AF5F5BF8_40__CCTOR_OFFSET UNITYSDK_OFFSET(0x9104BA0)

inline static constexpr unsigned int Class_1_A184F5C9AF5F5BF8_40_TypeDefinitionIndex = 50571;

class Class_1_A184F5C9AF5F5BF8_40 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A184F5C9AF5F5BF8_40_TypeDefinitionIndex)->GetStaticField(0x35330);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A184F5C9AF5F5BF8_40__CCTOR_OFFSET))();
	}
};
