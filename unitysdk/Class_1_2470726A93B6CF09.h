#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_2470726A93B6CF09_METHOD_1_52A3FEDD63707B13_1_OFFSET UNITYSDK_OFFSET(0x6AC8730)
#define CLASS_1_2470726A93B6CF09_METHOD_1_52A3FEDD63707B13_2_OFFSET UNITYSDK_OFFSET(0x6AC8820)
#define CLASS_1_2470726A93B6CF09_METHOD_1_52A3FEDD63707B13_3_OFFSET UNITYSDK_OFFSET(0x6AC88F0)
#define CLASS_1_2470726A93B6CF09_METHOD_1_52A3FEDD63707B13_OFFSET UNITYSDK_OFFSET(0x6AC8640)
#define CLASS_1_2470726A93B6CF09__CCTOR_OFFSET UNITYSDK_OFFSET(0x6AC8600)
#define CLASS_1_2470726A93B6CF09__CTOR_OFFSET UNITYSDK_OFFSET(0x6AC85F0)

inline static constexpr unsigned int Class_1_2470726A93B6CF09_TypeDefinitionIndex = 65586;

class Class_1_2470726A93B6CF09 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2470726A93B6CF09_TypeDefinitionIndex)->GetStaticField(0x112D0);
	}
	static ::UnityEngine::Vector3* StaticGet_Field_1_1()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2470726A93B6CF09_TypeDefinitionIndex)->GetStaticField(0x112D4);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2470726A93B6CF09__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2470726A93B6CF09__CCTOR_OFFSET))();
	}

	static ::System::Single Method_1_52A3FEDD63707B13(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2470726A93B6CF09_METHOD_1_52A3FEDD63707B13_OFFSET))(a1);
	}

	static ::System::Single Method_1_52A3FEDD63707B13_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2470726A93B6CF09_METHOD_1_52A3FEDD63707B13_1_OFFSET))(a1);
	}

	static ::System::Single Method_1_52A3FEDD63707B13_2(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2470726A93B6CF09_METHOD_1_52A3FEDD63707B13_2_OFFSET))(a1);
	}

	static ::System::Single Method_1_52A3FEDD63707B13_3(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2470726A93B6CF09_METHOD_1_52A3FEDD63707B13_3_OFFSET))(a1);
	}
};
