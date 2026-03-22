#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_3_39D03182A9F48E64_METHOD_3_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x88A0230)
#define CLASS_3_39D03182A9F48E64_METHOD_3_4D71BCFB74C16073_1_OFFSET UNITYSDK_OFFSET(0x88A0430)
#define CLASS_3_39D03182A9F48E64_METHOD_3_4D71BCFB74C16073_OFFSET UNITYSDK_OFFSET(0x88A0410)
#define CLASS_3_39D03182A9F48E64_METHOD_3_50713ED83CCB33C4_OFFSET UNITYSDK_OFFSET(0x88A0180)
#define CLASS_3_39D03182A9F48E64_METHOD_3_BFB8A9EC107A5B24_1_OFFSET UNITYSDK_OFFSET(0x88A0440)
#define CLASS_3_39D03182A9F48E64_METHOD_3_BFB8A9EC107A5B24_OFFSET UNITYSDK_OFFSET(0x88A0420)
#define CLASS_3_39D03182A9F48E64__CTOR_OFFSET UNITYSDK_OFFSET(0x88A0390)

inline static constexpr unsigned int Class_3_39D03182A9F48E64_TypeDefinitionIndex = 42714;

class Class_3_39D03182A9F48E64 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0
	::UnityEngine::Transform* Field_3_2; // 0x28
	::UnityEngine::Transform* Field_3_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_39D03182A9F48E64__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_50713ED83CCB33C4(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_39D03182A9F48E64_METHOD_3_50713ED83CCB33C4_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Transform* Method_3_4D71BCFB74C16073()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_39D03182A9F48E64_METHOD_3_4D71BCFB74C16073_OFFSET))(this);
	}

	::System::Void Method_3_BFB8A9EC107A5B24(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_39D03182A9F48E64_METHOD_3_BFB8A9EC107A5B24_OFFSET))(this, a1);
	}

	::System::Void Method_3_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_39D03182A9F48E64_METHOD_3_0C88AB06D46E777A_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_3_4D71BCFB74C16073_1()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_39D03182A9F48E64_METHOD_3_4D71BCFB74C16073_1_OFFSET))(this);
	}

	::System::Void Method_3_BFB8A9EC107A5B24_1(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_39D03182A9F48E64_METHOD_3_BFB8A9EC107A5B24_1_OFFSET))(this, a1);
	}
};
