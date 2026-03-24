#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_A45087F0C8EBCBF3_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x66EB1A0)

inline static constexpr unsigned int Class_1_A45087F0C8EBCBF3_3_TypeDefinitionIndex = 73889;

class Class_1_A45087F0C8EBCBF3_3 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A45087F0C8EBCBF3_3_TypeDefinitionIndex)->GetStaticField(0xCC80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A45087F0C8EBCBF3_3__CCTOR_OFFSET))();
	}
};
