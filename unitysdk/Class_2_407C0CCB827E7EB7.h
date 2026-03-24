#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_407C0CCB827E7EB7_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x6197180)
#define CLASS_2_407C0CCB827E7EB7_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6197230)
#define CLASS_2_407C0CCB827E7EB7_METHOD_2_D0F74BA0038650D0_OFFSET UNITYSDK_OFFSET(0x6196F90)
#define CLASS_2_407C0CCB827E7EB7__CTOR_OFFSET UNITYSDK_OFFSET(0x6197220)

inline static constexpr unsigned int Class_2_407C0CCB827E7EB7_TypeDefinitionIndex = 44553;

class Class_2_407C0CCB827E7EB7 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_1; // 0x18
	::MoleMole::NotificationBadgeEx* Field_2_6; // 0x20
	::MoleMole::UIGeneralButtonController* Field_2_4; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x30
	::MonoUITableScrollV2* Field_2_3; // 0x38
	::UnityEngine::RectTransform* Field_2_5; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_407C0CCB827E7EB7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D0F74BA0038650D0(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_407C0CCB827E7EB7_METHOD_2_D0F74BA0038650D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_407C0CCB827E7EB7_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_407C0CCB827E7EB7_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
