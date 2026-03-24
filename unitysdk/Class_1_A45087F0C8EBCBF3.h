#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_A45087F0C8EBCBF3_METHOD_1_BFBBE8A6FE167A6A_OFFSET UNITYSDK_OFFSET(0x6FFA3A0)
#define CLASS_1_A45087F0C8EBCBF3__CCTOR_OFFSET UNITYSDK_OFFSET(0x6FFA360)

inline static constexpr unsigned int Class_1_A45087F0C8EBCBF3_TypeDefinitionIndex = 45568;

class Class_1_A45087F0C8EBCBF3 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A45087F0C8EBCBF3_TypeDefinitionIndex)->GetStaticField(0x11190);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A45087F0C8EBCBF3__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_BFBBE8A6FE167A6A()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_A45087F0C8EBCBF3_METHOD_1_BFBBE8A6FE167A6A_OFFSET))();
	}
};
