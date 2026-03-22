#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_79AE422BA06F6D26_6;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadTabButtonGroup; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_F034913F0CE169E2_METHOD_2_63BBC99244640EE0_OFFSET UNITYSDK_OFFSET(0xB431D70)
#define CLASS_2_F034913F0CE169E2_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0xB431F90)
#define CLASS_2_F034913F0CE169E2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xB432080)
#define CLASS_2_F034913F0CE169E2__CTOR_OFFSET UNITYSDK_OFFSET(0xB432070)

inline static constexpr unsigned int Class_2_F034913F0CE169E2_TypeDefinitionIndex = 61327;

class Class_2_F034913F0CE169E2 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadTabButtonGroup* Field_2_6; // 0x18
	::UnityEngine::RectTransform* Field_2_8; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x28
	::UnityEngine::Transform* Field_2_0; // 0x30
	::MonoUITableScrollV2* Field_2_5; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x40
	::Class_2_0D31A1661D004892<::Class_2_79AE422BA06F6D26_6*>* Field_2_7; // 0x48
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_2; // 0x50
	::UnityEngine::Transform* Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F034913F0CE169E2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_63BBC99244640EE0(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F034913F0CE169E2_METHOD_2_63BBC99244640EE0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F034913F0CE169E2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F034913F0CE169E2_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
