#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralIconCardRarityWidgetController; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_862C5F667CFA54EB_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0xD9F6260)
#define CLASS_2_862C5F667CFA54EB_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xD9F6360)
#define CLASS_2_862C5F667CFA54EB_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0xD9F5F70)
#define CLASS_2_862C5F667CFA54EB__CTOR_OFFSET UNITYSDK_OFFSET(0xD9F6350)

inline static constexpr unsigned int Class_2_862C5F667CFA54EB_TypeDefinitionIndex = 78787;

class Class_2_862C5F667CFA54EB : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_6; // 0x18
	::UnityEngine::Transform* Field_2_13; // 0x20
	::Class_3_647A206587033F4E<::MoleMole::UIGeneralIconCardRarityWidgetController*>* Field_2_2; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x30
	::UnityEngine::Transform* Field_2_12; // 0x38
	::UnityEngine::Transform* Field_2_7; // 0x40
	::UnityEngine::Transform* Field_2_11; // 0x48
	::UnityEngine::Transform* Field_2_8; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x58
	::UnityEngine::Transform* Field_2_5; // 0x60
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x68
	::UnityEngine::Transform* Field_2_9; // 0x70
	::MoleMole::NotificationBadgeEx* Field_2_3; // 0x78
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_862C5F667CFA54EB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_862C5F667CFA54EB_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_862C5F667CFA54EB_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_862C5F667CFA54EB_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
