#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7ED8DECFCACDA19E;

#define CLASS_1_A118EE90ED8C541D_METHOD_1_6758B80938084705_OFFSET UNITYSDK_OFFSET(0xB373220)
#define CLASS_1_A118EE90ED8C541D_METHOD_1_6E5FDAD8E9B81D23_OFFSET UNITYSDK_OFFSET(0xB373B60)
#define CLASS_1_A118EE90ED8C541D__CCTOR_OFFSET UNITYSDK_OFFSET(0xB3731E0)
#define CLASS_1_A118EE90ED8C541D__CTOR_OFFSET UNITYSDK_OFFSET(0xB3731D0)

inline static constexpr unsigned int Class_1_A118EE90ED8C541D_TypeDefinitionIndex = 70575;

class Class_1_A118EE90ED8C541D : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A118EE90ED8C541D_TypeDefinitionIndex)->GetStaticField(0x10470);
	}
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A118EE90ED8C541D_TypeDefinitionIndex)->GetStaticField(0x10474);
	}
	static ::System::Single* StaticGet_Field_1_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A118EE90ED8C541D_TypeDefinitionIndex)->GetStaticField(0x10478);
	}
	static ::System::Single* StaticGet_Field_1_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A118EE90ED8C541D_TypeDefinitionIndex)->GetStaticField(0x1047C);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A118EE90ED8C541D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A118EE90ED8C541D__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_6758B80938084705(::Class_1_7ED8DECFCACDA19E* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_1_7ED8DECFCACDA19E*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A118EE90ED8C541D_METHOD_1_6758B80938084705_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6E5FDAD8E9B81D23(::Class_1_7ED8DECFCACDA19E* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_1_7ED8DECFCACDA19E*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A118EE90ED8C541D_METHOD_1_6E5FDAD8E9B81D23_OFFSET))(a1, a2);
	}
};
