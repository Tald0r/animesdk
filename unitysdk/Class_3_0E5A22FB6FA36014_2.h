#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define CLASS_3_0E5A22FB6FA36014_2_METHOD_3_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x88A3020)
#define CLASS_3_0E5A22FB6FA36014_2_METHOD_3_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x88A2F80)
#define CLASS_3_0E5A22FB6FA36014_2_METHOD_3_AA6A73448047A840_OFFSET UNITYSDK_OFFSET(0x88A2E00)
#define CLASS_3_0E5A22FB6FA36014_2__CTOR_OFFSET UNITYSDK_OFFSET(0x88A3180)

inline static constexpr unsigned int Class_3_0E5A22FB6FA36014_2_TypeDefinitionIndex = 51652;

class Class_3_0E5A22FB6FA36014_2 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0
	::UnityEngine::RectTransform* Field_3_3; // 0x28
	::Class_2_60DDD9C206686F44* Field_3_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0E5A22FB6FA36014_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_AA6A73448047A840(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_0E5A22FB6FA36014_2_METHOD_3_AA6A73448047A840_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0E5A22FB6FA36014_2_METHOD_3_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_3_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0E5A22FB6FA36014_2_METHOD_3_0C88AB06D46E777A_OFFSET))(this);
	}
};
