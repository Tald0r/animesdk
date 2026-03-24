#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_F95EE9848F147B56_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x66F0080)
#define CLASS_2_F95EE9848F147B56_METHOD_2_929BD2659F9FA6CA_OFFSET UNITYSDK_OFFSET(0x66EFE20)
#define CLASS_2_F95EE9848F147B56_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x66F0190)
#define CLASS_2_F95EE9848F147B56__CTOR_OFFSET UNITYSDK_OFFSET(0x66F0180)

inline static constexpr unsigned int Class_2_F95EE9848F147B56_TypeDefinitionIndex = 73710;

class Class_2_F95EE9848F147B56 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x20
	::Class_3_647A206587033F4E<::MoleMole::UIItemIconBtnWidgetController*>* Field_2_9; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x38
	::MonoUITableScrollV2* Field_2_2; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x48
	::MonoUITableScrollV2* Field_2_1; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F95EE9848F147B56__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_929BD2659F9FA6CA(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F95EE9848F147B56_METHOD_2_929BD2659F9FA6CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F95EE9848F147B56_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F95EE9848F147B56_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
