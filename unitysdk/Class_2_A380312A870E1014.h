#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RendererFader.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define CLASS_2_A380312A870E1014_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC84E80)
#define CLASS_2_A380312A870E1014_METHOD_2_066A2A302F994390_OFFSET UNITYSDK_OFFSET(0xAC84B50)
#define CLASS_2_A380312A870E1014_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0xAC85560)
#define CLASS_2_A380312A870E1014_METHOD_2_3344C8077B7B1A2F_OFFSET UNITYSDK_OFFSET(0xAC85290)
#define CLASS_2_A380312A870E1014_METHOD_2_711B1F269627AEDE_OFFSET UNITYSDK_OFFSET(0xAC84C70)
#define CLASS_2_A380312A870E1014_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xAC850F0)
#define CLASS_2_A380312A870E1014_METHOD_2_CA4D16015DC602B0_OFFSET UNITYSDK_OFFSET(0xAC84950)
#define CLASS_2_A380312A870E1014_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAC84F40)
#define CLASS_2_A380312A870E1014__CTOR_OFFSET UNITYSDK_OFFSET(0xAC84940)

inline static constexpr unsigned int Class_2_A380312A870E1014_TypeDefinitionIndex = 63772;

class Class_2_A380312A870E1014 : public ::MoleMole::RendererFader
{
public:
	::System::Single Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A380312A870E1014__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA4D16015DC602B0(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A380312A870E1014_METHOD_2_CA4D16015DC602B0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_066A2A302F994390(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A380312A870E1014_METHOD_2_066A2A302F994390_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_711B1F269627AEDE(::UnityEngine::MaterialPropertyBlock*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + CLASS_2_A380312A870E1014_METHOD_2_711B1F269627AEDE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A380312A870E1014_DISPOSE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A380312A870E1014_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A380312A870E1014_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_2_3344C8077B7B1A2F(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A380312A870E1014_METHOD_2_3344C8077B7B1A2F_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A380312A870E1014_METHOD_2_128774387667156B_OFFSET))(this);
	}
};
