#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Share/EAvatarSkillType.h"

class Class_1_6D3ECB4C39924DFD;
class Class_1_945ACFB1FEBC7A2C_5;
class Class_1_FE222B85F7CE3D1B;
class Class_2_4DB8F971EA29B0BC;
class Class_2_D89CCC627A66D0AD;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIRoleSkillDataRowChildWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIROLESKILLATTRIBUTEROWCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA69CF90)
#define MOLEMOLE_UIROLESKILLATTRIBUTEROWCHILDWINDOWCONTROLLER_SHOWATTRIBUTEVIEW_OFFSET UNITYSDK_OFFSET(0xA69D030)
#define MOLEMOLE_UIROLESKILLATTRIBUTEROWCHILDWINDOWCONTROLLER_SHOWBUDDYATTRIBUTEVIEW_OFFSET UNITYSDK_OFFSET(0xA69D320)
#define MOLEMOLE_UIROLESKILLATTRIBUTEROWCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA69D6D0)
#define MOLEMOLE_UIROLESKILLATTRIBUTEROWCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA69D770)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSkillAttributeRowChildWindowController_TypeDefinitionIndex = 80864;

	class UIRoleSkillAttributeRowChildWindowController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_4DB8F971EA29B0BC* _view; // 0x2A0
		::System::Collections::Generic::List_1<::MoleMole::UIRoleSkillDataRowChildWindowController*>* _dataItemList; // 0x2A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLATTRIBUTEROWCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLATTRIBUTEROWCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void ShowAttributeView(::Class_1_FE222B85F7CE3D1B* group, ::Class_2_D89CCC627A66D0AD* info, ::Share::EAvatarSkillType type)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FE222B85F7CE3D1B*, ::Class_2_D89CCC627A66D0AD*, ::Share::EAvatarSkillType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLATTRIBUTEROWCHILDWINDOWCONTROLLER_SHOWATTRIBUTEVIEW_OFFSET))(this, group, info, type);
		}

		::System::Void ShowBuddyAttributeView(::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_5*>* group, ::Class_1_6D3ECB4C39924DFD* skillInfo, ::System::Boolean showTitle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_5*>*, ::Class_1_6D3ECB4C39924DFD*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLATTRIBUTEROWCHILDWINDOWCONTROLLER_SHOWBUDDYATTRIBUTEVIEW_OFFSET))(this, group, skillInfo, showTitle);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLATTRIBUTEROWCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}
	};
}
