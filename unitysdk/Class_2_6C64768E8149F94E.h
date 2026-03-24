#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RendererFader.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define CLASS_2_6C64768E8149F94E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B7AFE0)
#define CLASS_2_6C64768E8149F94E_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x9B7B510)
#define CLASS_2_6C64768E8149F94E_METHOD_2_3C24DDABFEBD866B_OFFSET UNITYSDK_OFFSET(0x9B7ADF0)
#define CLASS_2_6C64768E8149F94E_METHOD_2_72AC223C5C800A8F_OFFSET UNITYSDK_OFFSET(0x9B7AEC0)
#define CLASS_2_6C64768E8149F94E_METHOD_2_89A39BE6C99B55E5_OFFSET UNITYSDK_OFFSET(0x9B7ACA0)
#define CLASS_2_6C64768E8149F94E_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x9B7B370)
#define CLASS_2_6C64768E8149F94E_METHOD_2_D311B7FDC431B2F1_OFFSET UNITYSDK_OFFSET(0x9B7B550)
#define CLASS_2_6C64768E8149F94E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B7B0B0)
#define CLASS_2_6C64768E8149F94E__CTOR_OFFSET UNITYSDK_OFFSET(0x9B7AC90)

inline static constexpr unsigned int Class_2_6C64768E8149F94E_TypeDefinitionIndex = 56369;

class Class_2_6C64768E8149F94E : public ::MoleMole::RendererFader
{
public:
	::System::String* Field_2_0; // 0x28
	::UnityEngine::Material* Field_2_2; // 0x30
	::System::Boolean Field_2_4; // 0x38
	::System::Boolean Field_2_1; // 0x39
	::System::Int32 Field_2_3; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C64768E8149F94E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_89A39BE6C99B55E5(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6C64768E8149F94E_METHOD_2_89A39BE6C99B55E5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3C24DDABFEBD866B(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6C64768E8149F94E_METHOD_2_3C24DDABFEBD866B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_72AC223C5C800A8F(::UnityEngine::MaterialPropertyBlock*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + CLASS_2_6C64768E8149F94E_METHOD_2_72AC223C5C800A8F_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C64768E8149F94E_DISPOSE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C64768E8149F94E_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C64768E8149F94E_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C64768E8149F94E_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_2_D311B7FDC431B2F1(::UnityEngine::Material* a1, ::System::Int32 a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6C64768E8149F94E_METHOD_2_D311B7FDC431B2F1_OFFSET))(this, a1, a2, a3, a4);
	}
};
