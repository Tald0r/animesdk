#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_CA67A9CEB871FFD3;
namespace MoleMole { class UIActivityCameraBountyWidgetController; }
namespace MoleMole { class UIActivityCameraExplorationWidgetController; }
namespace MoleMole { class UIActivityFruitToysSettlementWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_B09BB97A3375B1CD_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0x7DFB500)
#define CLASS_2_B09BB97A3375B1CD_METHOD_2_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x7DFB8D0)
#define CLASS_2_B09BB97A3375B1CD_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7DFBAF0)
#define CLASS_2_B09BB97A3375B1CD__CTOR_OFFSET UNITYSDK_OFFSET(0x7DFBAE0)

inline static constexpr unsigned int Class_2_B09BB97A3375B1CD_TypeDefinitionIndex = 77659;

class Class_2_B09BB97A3375B1CD : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_9E3E3CDA608A4F58* Field_2_13; // 0x18
	::Class_2_CA67A9CEB871FFD3* Field_2_7; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_10; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_8; // 0x48
	::Class_2_60DDD9C206686F44* Field_2_9; // 0x50
	::Class_2_60DDD9C206686F44* Field_2_11; // 0x58
	::UnityEngine::RectTransform* Field_2_12; // 0x60
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x68
	::Class_3_647A206587033F4E<::MoleMole::UIActivityCameraExplorationWidgetController*>* Field_2_4; // 0x70
	::Class_3_647A206587033F4E<::MoleMole::UIActivityFruitToysSettlementWidgetController*>* Field_2_6; // 0x78
	::Class_3_647A206587033F4E<::MoleMole::UIActivityCameraBountyWidgetController*>* Field_2_5; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B09BB97A3375B1CD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B09BB97A3375B1CD_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B09BB97A3375B1CD_METHOD_2_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B09BB97A3375B1CD_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
