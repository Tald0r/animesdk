#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_A184F5C9AF5F5BF8_42__CCTOR_OFFSET UNITYSDK_OFFSET(0xF364890)

inline static constexpr unsigned int Class_1_A184F5C9AF5F5BF8_42_TypeDefinitionIndex = 48294;

class Class_1_A184F5C9AF5F5BF8_42 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A184F5C9AF5F5BF8_42_TypeDefinitionIndex)->GetStaticField(0x352C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A184F5C9AF5F5BF8_42__CCTOR_OFFSET))();
	}
};
