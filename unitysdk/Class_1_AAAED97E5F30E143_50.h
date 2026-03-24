#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_AAAED97E5F30E143_50__CCTOR_OFFSET UNITYSDK_OFFSET(0xB671350)

inline static constexpr unsigned int Class_1_AAAED97E5F30E143_50_TypeDefinitionIndex = 61089;

class Class_1_AAAED97E5F30E143_50 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AAAED97E5F30E143_50_TypeDefinitionIndex)->GetStaticField(0x3E690);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AAAED97E5F30E143_50__CCTOR_OFFSET))();
	}
};
