#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_A3F114840CB23064___C_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x70EF2D0)
#define CLASS_2_A3F114840CB23064___C_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x70EF320)
#define CLASS_2_A3F114840CB23064___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x70EF280)
#define CLASS_2_A3F114840CB23064___C__CTOR_OFFSET UNITYSDK_OFFSET(0x70EF2C0)

inline static constexpr unsigned int Class_2_A3F114840CB23064___c_TypeDefinitionIndex = 40802;

class Class_2_A3F114840CB23064___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__6_2()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A3F114840CB23064___c_TypeDefinitionIndex)->GetStaticField(0x30C00);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__6_1()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A3F114840CB23064___c_TypeDefinitionIndex)->GetStaticField(0x30C08);
	}
	static ::Class_2_A3F114840CB23064___c** StaticGet___9()
	{
		return (::Class_2_A3F114840CB23064___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A3F114840CB23064___c_TypeDefinitionIndex)->GetStaticField(0x30C10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A3F114840CB23064___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3F114840CB23064___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3F114840CB23064___C_METHOD_1_CE18697B63E52504_OFFSET))(this);
	}

	::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3F114840CB23064___C_METHOD_1_F8C7231308CD2C82_OFFSET))(this);
	}
};
