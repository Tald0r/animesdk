#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_CE2F8792D782D9CA_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0xB9DC470)
#define CLASS_2_CE2F8792D782D9CA_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xB9DC520)
#define CLASS_2_CE2F8792D782D9CA_METHOD_2_FA381B9E901D74DC_OFFSET UNITYSDK_OFFSET(0xB9DC2B0)
#define CLASS_2_CE2F8792D782D9CA__CTOR_OFFSET UNITYSDK_OFFSET(0xB9DC510)

inline static constexpr unsigned int Class_2_CE2F8792D782D9CA_TypeDefinitionIndex = 77741;

class Class_2_CE2F8792D782D9CA : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x18
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIGeneralToggleWidgetController*>* Field_2_3; // 0x20
	::UnityEngine::RectTransform* Field_2_2; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x30
	::MonoUITableScrollV2* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE2F8792D782D9CA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_FA381B9E901D74DC(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CE2F8792D782D9CA_METHOD_2_FA381B9E901D74DC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CE2F8792D782D9CA_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE2F8792D782D9CA_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
