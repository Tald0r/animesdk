#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_D40DAE97CB89A74B_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x91C1530)
#define CLASS_2_D40DAE97CB89A74B_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x91C1250)
#define CLASS_2_D40DAE97CB89A74B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x91C1650)
#define CLASS_2_D40DAE97CB89A74B__CTOR_OFFSET UNITYSDK_OFFSET(0x91C1640)

inline static constexpr unsigned int Class_2_D40DAE97CB89A74B_TypeDefinitionIndex = 44673;

class Class_2_D40DAE97CB89A74B : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_6; // 0x18
	::UnityEngine::GameObject* Field_2_3; // 0x20
	::UnityEngine::GameObject* Field_2_8; // 0x28
	::UnityEngine::GameObject* Field_2_0; // 0x30
	::UnityEngine::GameObject* Field_2_2; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_11; // 0x40
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x48
	::Class_2_60DDD9C206686F44* Field_2_9; // 0x50
	::UnityEngine::GameObject* Field_2_1; // 0x58
	::UnityEngine::CanvasGroup* Field_2_13; // 0x60
	::UnityEngine::GameObject* Field_2_4; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x70
	::MoleMole::NotificationBadgeEx* Field_2_12; // 0x78
	::Class_2_A8F5ABF31E066ED4* Field_2_10; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D40DAE97CB89A74B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D40DAE97CB89A74B_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D40DAE97CB89A74B_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D40DAE97CB89A74B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
