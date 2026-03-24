#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_AAAED97E5F30E143_86__CCTOR_OFFSET UNITYSDK_OFFSET(0x9AF22F0)

inline static constexpr unsigned int Class_1_AAAED97E5F30E143_86_TypeDefinitionIndex = 75721;

class Class_1_AAAED97E5F30E143_86 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AAAED97E5F30E143_86_TypeDefinitionIndex)->GetStaticField(0x44540);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AAAED97E5F30E143_86__CCTOR_OFFSET))();
	}
};
