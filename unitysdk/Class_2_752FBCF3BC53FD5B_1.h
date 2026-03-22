#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class ShaderAniHelp;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_752FBCF3BC53FD5B_1_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0x6F97140)
#define CLASS_2_752FBCF3BC53FD5B_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6F97300)
#define CLASS_2_752FBCF3BC53FD5B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x6F972F0)

inline static constexpr unsigned int Class_2_752FBCF3BC53FD5B_1_TypeDefinitionIndex = 77313;

class Class_2_752FBCF3BC53FD5B_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_9E3E3CDA608A4F58* Field_2_7; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x20
	::Class_2_9E3E3CDA608A4F58* Field_2_1; // 0x28
	::ShaderAniHelp* Field_2_6; // 0x30
	::ShaderAniHelp* Field_2_5; // 0x38
	::Class_2_9E3E3CDA608A4F58* Field_2_2; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x48
	::UnityEngine::RectTransform* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_752FBCF3BC53FD5B_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_752FBCF3BC53FD5B_1_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_752FBCF3BC53FD5B_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
