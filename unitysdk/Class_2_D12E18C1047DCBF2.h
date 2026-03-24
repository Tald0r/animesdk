#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_D12E18C1047DCBF2_METHOD_2_63BBC99244640EE0_OFFSET UNITYSDK_OFFSET(0x8397640)
#define CLASS_2_D12E18C1047DCBF2_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x8397860)
#define CLASS_2_D12E18C1047DCBF2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8397970)
#define CLASS_2_D12E18C1047DCBF2__CTOR_OFFSET UNITYSDK_OFFSET(0x8397960)

inline static constexpr unsigned int Class_2_D12E18C1047DCBF2_TypeDefinitionIndex = 54227;

class Class_2_D12E18C1047DCBF2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x20
	::MonoUITableScrollV2* Field_2_3; // 0x28
	::UnityEngine::UI::Text* Field_2_0; // 0x30
	::UnityEngine::Transform* Field_2_5; // 0x38
	::UnityEngine::Transform* Field_2_4; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_8; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x50
	::UnityEngine::UI::Text* Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D12E18C1047DCBF2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_63BBC99244640EE0(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D12E18C1047DCBF2_METHOD_2_63BBC99244640EE0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D12E18C1047DCBF2_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D12E18C1047DCBF2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
