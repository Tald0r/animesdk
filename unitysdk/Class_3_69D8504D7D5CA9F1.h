#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_3_69D8504D7D5CA9F1_METHOD_3_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x7622670)
#define CLASS_3_69D8504D7D5CA9F1_METHOD_3_8BFA46780D3D20DC_OFFSET UNITYSDK_OFFSET(0x7622520)
#define CLASS_3_69D8504D7D5CA9F1__CTOR_OFFSET UNITYSDK_OFFSET(0x7622730)

inline static constexpr unsigned int Class_3_69D8504D7D5CA9F1_TypeDefinitionIndex = 48614;

class Class_3_69D8504D7D5CA9F1 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::UnityEngine::RectTransform* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69D8504D7D5CA9F1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_8BFA46780D3D20DC(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_69D8504D7D5CA9F1_METHOD_3_8BFA46780D3D20DC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69D8504D7D5CA9F1_METHOD_3_7DB49B5407C8FD68_OFFSET))(this);
	}
};
