#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_A184F5C9AF5F5BF8_14__CCTOR_OFFSET UNITYSDK_OFFSET(0x675F100)

inline static constexpr unsigned int Class_1_A184F5C9AF5F5BF8_14_TypeDefinitionIndex = 40818;

class Class_1_A184F5C9AF5F5BF8_14 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A184F5C9AF5F5BF8_14_TypeDefinitionIndex)->GetStaticField(0x2D120);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A184F5C9AF5F5BF8_14__CCTOR_OFFSET))();
	}
};
