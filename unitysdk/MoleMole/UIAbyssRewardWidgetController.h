#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_289;
class Class_2_60638234271CCDB8_43;
class Class_2_DA8BF519212BAE65;
class Class_3_64D9DF94F8C16A38;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETACTIVESELECTSHOW_OFFSET UNITYSDK_OFFSET(0xD1B7700)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETCANCLICK_OFFSET UNITYSDK_OFFSET(0xD1B7910)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETCANGETREWARD_OFFSET UNITYSDK_OFFSET(0xD1B7680)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETCURRENTLEVEL_OFFSET UNITYSDK_OFFSET(0xD1B7810)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETISUNLOCK_OFFSET UNITYSDK_OFFSET(0xD1B74D0)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETREWARDCUSTOMLISTISFOCUS_OFFSET UNITYSDK_OFFSET(0xD1B6640)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETREWARDID_OFFSET UNITYSDK_OFFSET(0xD1B7890)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_ONCLICKGETITEM_OFFSET UNITYSDK_OFFSET(0xD1B79F0)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD1B6090)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xD1B6210)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xD1B6710)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD1B6130)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD1B5B90)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xD1B7090)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD1B7E10)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD1B7E20)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xD1B7E90)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xD1B7EC0)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD1B7F40)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD1B7FC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssRewardWidgetController_TypeDefinitionIndex = 41730;

	class UIAbyssRewardWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_60638234271CCDB8_43* _view; // 0x2D0
		::Class_2_208CC9941471731A_289* rewardBarCfg; // 0x2D8
		::System::Action_1<::MoleMole::UIAbyssRewardWidgetController*>* OnClickGetReward; // 0x2E0
		::System::Action* OnRewardFocusChange; // 0x2E8
		::MoleMole::UIItemIconBtnWidgetController* _itemIconBtn0; // 0x2F0
		::MoleMole::UIItemIconBtnWidgetController* _itemIconBtn1; // 0x2F8
		::Class_2_DA8BF519212BAE65* _abyssModel; // 0x300
		::Class_3_64D9DF94F8C16A38* currentGroup; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Boolean GetRewardCustomListIsFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETREWARDCUSTOMLISTISFOCUS_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Boolean GetIsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETISUNLOCK_OFFSET))(this);
		}

		::System::Boolean GetCanGetReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETCANGETREWARD_OFFSET))(this);
		}

		::System::Boolean GetActiveSelectShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETACTIVESELECTSHOW_OFFSET))(this);
		}

		::System::Int32 GetCurrentLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETCURRENTLEVEL_OFFSET))(this);
		}

		::System::Int32 GetRewardID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETREWARDID_OFFSET))(this);
		}

		::System::Boolean GetCanClick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETCANCLICK_OFFSET))(this);
		}

		::System::Void OnClickGetItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_ONCLICKGETITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
