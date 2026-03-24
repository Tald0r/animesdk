#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define CLASS_3_459F7076B5A40A61_METHOD_3_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x73C32B0)
#define CLASS_3_459F7076B5A40A61_METHOD_3_4D71BCFB74C16073_1_OFFSET UNITYSDK_OFFSET(0x73C34C0)
#define CLASS_3_459F7076B5A40A61_METHOD_3_4D71BCFB74C16073_OFFSET UNITYSDK_OFFSET(0x73C34B0)
#define CLASS_3_459F7076B5A40A61_METHOD_3_50713ED83CCB33C4_OFFSET UNITYSDK_OFFSET(0x73C3200)
#define CLASS_3_459F7076B5A40A61_METHOD_3_BFB8A9EC107A5B24_1_OFFSET UNITYSDK_OFFSET(0x73C34A0)
#define CLASS_3_459F7076B5A40A61_METHOD_3_BFB8A9EC107A5B24_OFFSET UNITYSDK_OFFSET(0x73C3490)
#define CLASS_3_459F7076B5A40A61__CTOR_OFFSET UNITYSDK_OFFSET(0x73C3410)

inline static constexpr unsigned int Class_3_459F7076B5A40A61_TypeDefinitionIndex = 46800;

class Class_3_459F7076B5A40A61 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::UnityEngine::Transform* Field_3_1; // 0x28
	::UnityEngine::Transform* Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_459F7076B5A40A61__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_50713ED83CCB33C4(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_459F7076B5A40A61_METHOD_3_50713ED83CCB33C4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BFB8A9EC107A5B24(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_459F7076B5A40A61_METHOD_3_BFB8A9EC107A5B24_OFFSET))(this, a1);
	}

	::System::Void Method_3_BFB8A9EC107A5B24_1(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_459F7076B5A40A61_METHOD_3_BFB8A9EC107A5B24_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_459F7076B5A40A61_METHOD_3_0C88AB06D46E777A_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_3_4D71BCFB74C16073()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_459F7076B5A40A61_METHOD_3_4D71BCFB74C16073_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_3_4D71BCFB74C16073_1()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_459F7076B5A40A61_METHOD_3_4D71BCFB74C16073_1_OFFSET))(this);
	}
};
