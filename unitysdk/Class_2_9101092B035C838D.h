#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIActivitySeriesRewardItemWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_9101092B035C838D_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x8186D70)
#define CLASS_2_9101092B035C838D_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x8186FE0)
#define CLASS_2_9101092B035C838D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x81870D0)
#define CLASS_2_9101092B035C838D__CTOR_OFFSET UNITYSDK_OFFSET(0x81870C0)

inline static constexpr unsigned int Class_2_9101092B035C838D_TypeDefinitionIndex = 78694;

class Class_2_9101092B035C838D : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x18
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIActivitySeriesRewardItemWidgetController*>* Field_2_4; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_8; // 0x28
	::UnityEngine::RectTransform* Field_2_2; // 0x30
	::MoleMole::NotificationBadgeEx* Field_2_1; // 0x38
	::UnityEngine::RectTransform* Field_2_6; // 0x40
	::UnityEngine::RectTransform* Field_2_5; // 0x48
	::UnityEngine::RectTransform* Field_2_7; // 0x50
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x58
	::MoleMole::MonoGamepadSelectable* Field_2_3; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9101092B035C838D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9101092B035C838D_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9101092B035C838D_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9101092B035C838D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
