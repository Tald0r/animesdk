#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_A184F5C9AF5F5BF8_85__CCTOR_OFFSET UNITYSDK_OFFSET(0xEB5D850)

inline static constexpr unsigned int Class_1_A184F5C9AF5F5BF8_85_TypeDefinitionIndex = 58402;

class Class_1_A184F5C9AF5F5BF8_85 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A184F5C9AF5F5BF8_85_TypeDefinitionIndex)->GetStaticField(0x40FD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A184F5C9AF5F5BF8_85__CCTOR_OFFSET))();
	}
};
