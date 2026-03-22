#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadRegion; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_BB733E8D14A4052D_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x6830800)
#define CLASS_2_BB733E8D14A4052D_METHOD_2_8CE71901D76EEEA9_OFFSET UNITYSDK_OFFSET(0x68305D0)
#define CLASS_2_BB733E8D14A4052D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6830910)
#define CLASS_2_BB733E8D14A4052D__CTOR_OFFSET UNITYSDK_OFFSET(0x6830900)

inline static constexpr unsigned int Class_2_BB733E8D14A4052D_TypeDefinitionIndex = 61521;

class Class_2_BB733E8D14A4052D : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_5; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x20
	::UnityEngine::GameObject* Field_2_6; // 0x28
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_2; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x38
	::MonoUITableScrollV2* Field_2_7; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x50
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x58
	::MoleMole::MonoGamepadRegion* Field_2_3; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB733E8D14A4052D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE71901D76EEEA9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BB733E8D14A4052D_METHOD_2_8CE71901D76EEEA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB733E8D14A4052D_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BB733E8D14A4052D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
