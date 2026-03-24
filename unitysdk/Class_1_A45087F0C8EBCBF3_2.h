#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_A45087F0C8EBCBF3_2__CCTOR_OFFSET UNITYSDK_OFFSET(0xAF2BAA0)

inline static constexpr unsigned int Class_1_A45087F0C8EBCBF3_2_TypeDefinitionIndex = 49964;

class Class_1_A45087F0C8EBCBF3_2 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A45087F0C8EBCBF3_2_TypeDefinitionIndex)->GetStaticField(0xBC20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A45087F0C8EBCBF3_2__CCTOR_OFFSET))();
	}
};
