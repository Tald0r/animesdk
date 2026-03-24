#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_AAAED97E5F30E143_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x75EA8B0)

inline static constexpr unsigned int Class_1_AAAED97E5F30E143_4_TypeDefinitionIndex = 40787;

class Class_1_AAAED97E5F30E143_4 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AAAED97E5F30E143_4_TypeDefinitionIndex)->GetStaticField(0x462E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AAAED97E5F30E143_4__CCTOR_OFFSET))();
	}
};
