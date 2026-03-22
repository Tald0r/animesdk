#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIBabeltowerFightingBuffItemWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIDailyChallengeCardRowWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_95EF0285C16C5E7C;
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_6C576119380E31D1_METHOD_2_6C558EE56523ECD4_OFFSET UNITYSDK_OFFSET(0x79D2730)
#define CLASS_2_6C576119380E31D1_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x79D2930)
#define CLASS_2_6C576119380E31D1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x79D2A50)
#define CLASS_2_6C576119380E31D1__CTOR_OFFSET UNITYSDK_OFFSET(0x79D2A40)

inline static constexpr unsigned int Class_2_6C576119380E31D1_TypeDefinitionIndex = 49194;

class Class_2_6C576119380E31D1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_95EF0285C16C5E7C<::MoleMole::UIDailyChallengeCardRowWidgetController*>* Field_2_3; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x20
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIBabeltowerFightingBuffItemWidgetController*>* Field_2_0; // 0x28
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIBabeltowerFightingBuffItemWidgetController*>* Field_2_1; // 0x30
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIBabeltowerFightingBuffItemWidgetController*>* Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C576119380E31D1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6C558EE56523ECD4(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6C576119380E31D1_METHOD_2_6C558EE56523ECD4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C576119380E31D1_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6C576119380E31D1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
