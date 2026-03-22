#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define CLASS_3_1FB4171C2E779A6A_METHOD_3_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x7B2B070)
#define CLASS_3_1FB4171C2E779A6A_METHOD_3_8BFA46780D3D20DC_OFFSET UNITYSDK_OFFSET(0x7B2AF10)
#define CLASS_3_1FB4171C2E779A6A__CTOR_OFFSET UNITYSDK_OFFSET(0x7B2B130)

inline static constexpr unsigned int Class_3_1FB4171C2E779A6A_TypeDefinitionIndex = 57139;

class Class_3_1FB4171C2E779A6A : public ::Class_2_E87F1D15F1D4AC72
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	::UnityEngine::RectTransform* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1FB4171C2E779A6A__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_8BFA46780D3D20DC(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_1FB4171C2E779A6A_METHOD_3_8BFA46780D3D20DC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1FB4171C2E779A6A_METHOD_3_7DB49B5407C8FD68_OFFSET))(this);
	}
};
