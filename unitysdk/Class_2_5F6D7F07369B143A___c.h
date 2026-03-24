#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_5F6D7F07369B143A___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x8FB2170)
#define CLASS_2_5F6D7F07369B143A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8FB2120)
#define CLASS_2_5F6D7F07369B143A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8FB2160)

inline static constexpr unsigned int Class_2_5F6D7F07369B143A___c_TypeDefinitionIndex = 48687;

class Class_2_5F6D7F07369B143A___c : public ::System::Object
{
public:
	static ::Class_2_5F6D7F07369B143A___c** StaticGet___9()
	{
		return (::Class_2_5F6D7F07369B143A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5F6D7F07369B143A___c_TypeDefinitionIndex)->GetStaticField(0x2BCF0);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__3_2()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5F6D7F07369B143A___c_TypeDefinitionIndex)->GetStaticField(0x2BCF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5F6D7F07369B143A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F6D7F07369B143A___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F6D7F07369B143A___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
