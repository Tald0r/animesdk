#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1F76884FC39FD584;
class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIMainCitySwitchRoleSwitchPanelWidgetController; }
namespace MoleMole { class UIMainCitySwitchRoleTimePanelWidgetController; }
namespace MoleMole { class UIPlayerSkinSwitchWidgetController; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_C8393BDF0FB18A03_METHOD_2_44B69BBA3A965CE1_OFFSET UNITYSDK_OFFSET(0x75CA170)
#define CLASS_2_C8393BDF0FB18A03_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x75CA490)
#define CLASS_2_C8393BDF0FB18A03_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x75CA5B0)
#define CLASS_2_C8393BDF0FB18A03__CTOR_OFFSET UNITYSDK_OFFSET(0x75CA5A0)

inline static constexpr unsigned int Class_2_C8393BDF0FB18A03_TypeDefinitionIndex = 68089;

class Class_2_C8393BDF0FB18A03 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIMainCitySwitchRoleSwitchPanelWidgetController*>* Field_2_2; // 0x18
	::Class_2_9E3E3CDA608A4F58* Field_2_4; // 0x20
	::Class_2_9E3E3CDA608A4F58* Field_2_5; // 0x28
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIPlayerSkinSwitchWidgetController*>* Field_2_6; // 0x30
	::Class_2_1F76884FC39FD584* Field_2_0; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x40
	::UnityEngine::Transform* Field_2_8; // 0x48
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIMainCitySwitchRoleTimePanelWidgetController*>* Field_2_1; // 0x50
	::MoleMole::NotificationBadgeEx* Field_2_7; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8393BDF0FB18A03__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_44B69BBA3A965CE1(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C8393BDF0FB18A03_METHOD_2_44B69BBA3A965CE1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C8393BDF0FB18A03_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8393BDF0FB18A03_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
