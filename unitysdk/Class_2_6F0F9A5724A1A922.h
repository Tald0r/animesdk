#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RendererFader.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define CLASS_2_6F0F9A5724A1A922_DISPOSE_OFFSET UNITYSDK_OFFSET(0x977A200)
#define CLASS_2_6F0F9A5724A1A922_METHOD_2_08B7287B59325288_OFFSET UNITYSDK_OFFSET(0x977A820)
#define CLASS_2_6F0F9A5724A1A922_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x977A8A0)
#define CLASS_2_6F0F9A5724A1A922_METHOD_2_3C24DDABFEBD866B_OFFSET UNITYSDK_OFFSET(0x9779F50)
#define CLASS_2_6F0F9A5724A1A922_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x977A680)
#define CLASS_2_6F0F9A5724A1A922_METHOD_2_CA1B36ECEDE11D8D_OFFSET UNITYSDK_OFFSET(0x977A8E0)
#define CLASS_2_6F0F9A5724A1A922_METHOD_2_D439FA32F49360C1_OFFSET UNITYSDK_OFFSET(0x9779D50)
#define CLASS_2_6F0F9A5724A1A922_METHOD_2_FFD8ABEF0122A6DA_OFFSET UNITYSDK_OFFSET(0x977A080)
#define CLASS_2_6F0F9A5724A1A922_TOSTRING_OFFSET UNITYSDK_OFFSET(0x977A2C0)
#define CLASS_2_6F0F9A5724A1A922__CTOR_OFFSET UNITYSDK_OFFSET(0x9779D40)

inline static constexpr unsigned int Class_2_6F0F9A5724A1A922_TypeDefinitionIndex = 55563;

class Class_2_6F0F9A5724A1A922 : public ::MoleMole::RendererFader
{
public:
	::System::Single Field_2_0; // 0x28
	::System::Single Field_2_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F0F9A5724A1A922__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D439FA32F49360C1(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6F0F9A5724A1A922_METHOD_2_D439FA32F49360C1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3C24DDABFEBD866B(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6F0F9A5724A1A922_METHOD_2_3C24DDABFEBD866B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FFD8ABEF0122A6DA(::UnityEngine::MaterialPropertyBlock*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + CLASS_2_6F0F9A5724A1A922_METHOD_2_FFD8ABEF0122A6DA_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F0F9A5724A1A922_DISPOSE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F0F9A5724A1A922_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F0F9A5724A1A922_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_2_08B7287B59325288(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6F0F9A5724A1A922_METHOD_2_08B7287B59325288_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F0F9A5724A1A922_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_2_CA1B36ECEDE11D8D(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::System::String* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6F0F9A5724A1A922_METHOD_2_CA1B36ECEDE11D8D_OFFSET))(this, a1, a2, a3, a4);
	}
};
