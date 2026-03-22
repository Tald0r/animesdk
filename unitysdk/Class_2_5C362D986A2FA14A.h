#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RendererFader.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define CLASS_2_5C362D986A2FA14A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7164250)
#define CLASS_2_5C362D986A2FA14A_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x7164820)
#define CLASS_2_5C362D986A2FA14A_METHOD_2_7AEDC63B3C00F22C_OFFSET UNITYSDK_OFFSET(0x7164480)
#define CLASS_2_5C362D986A2FA14A_METHOD_2_B56A1552A35611D9_OFFSET UNITYSDK_OFFSET(0x7163F60)
#define CLASS_2_5C362D986A2FA14A_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x7164680)
#define CLASS_2_5C362D986A2FA14A_METHOD_2_C7BFDAD19CF6B679_OFFSET UNITYSDK_OFFSET(0x7163D30)
#define CLASS_2_5C362D986A2FA14A_METHOD_2_D0874CED18FBACA9_OFFSET UNITYSDK_OFFSET(0x71640D0)
#define CLASS_2_5C362D986A2FA14A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7164310)
#define CLASS_2_5C362D986A2FA14A__CTOR_OFFSET UNITYSDK_OFFSET(0x7163D20)

inline static constexpr unsigned int Class_2_5C362D986A2FA14A_TypeDefinitionIndex = 69271;

class Class_2_5C362D986A2FA14A : public ::MoleMole::RendererFader
{
public:
	::System::Single Field_2_1; // 0x28
	::UnityEngine::Color Field_2_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C362D986A2FA14A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C7BFDAD19CF6B679(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5C362D986A2FA14A_METHOD_2_C7BFDAD19CF6B679_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B56A1552A35611D9(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5C362D986A2FA14A_METHOD_2_B56A1552A35611D9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D0874CED18FBACA9(::UnityEngine::MaterialPropertyBlock*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + CLASS_2_5C362D986A2FA14A_METHOD_2_D0874CED18FBACA9_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C362D986A2FA14A_DISPOSE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C362D986A2FA14A_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_7AEDC63B3C00F22C(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5C362D986A2FA14A_METHOD_2_7AEDC63B3C00F22C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C362D986A2FA14A_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C362D986A2FA14A_METHOD_2_128774387667156B_OFFSET))(this);
	}
};
