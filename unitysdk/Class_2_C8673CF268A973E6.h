#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIWorkBenchInformation02InfoPanelWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_C8673CF268A973E6_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x8B1CBA0)
#define CLASS_2_C8673CF268A973E6_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x8B1CDC0)
#define CLASS_2_C8673CF268A973E6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8B1CF00)
#define CLASS_2_C8673CF268A973E6__CTOR_OFFSET UNITYSDK_OFFSET(0x8B1CEF0)

inline static constexpr unsigned int Class_2_C8673CF268A973E6_TypeDefinitionIndex = 63580;

class Class_2_C8673CF268A973E6 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_647A206587033F4E<::MoleMole::UIWorkBenchInformation02InfoPanelWidgetController*>* Field_2_6; // 0x18
	::MonoUITableScrollV2* Field_2_2; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x30
	::UnityEngine::RectTransform* Field_2_3; // 0x38
	::MonoUITableScrollV2* Field_2_4; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8673CF268A973E6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C8673CF268A973E6_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8673CF268A973E6_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C8673CF268A973E6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
