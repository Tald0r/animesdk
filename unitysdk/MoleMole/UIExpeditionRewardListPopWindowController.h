#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_202A28762617354F;
namespace MoleMole { class ExpeditionRewardListContext; }
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UISuibianTempleAdditionalMaterialBonusRowWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xA968820)
#define MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA9690D0)
#define MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA969170)
#define MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA968830)
#define MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA968A40)
#define MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER_UPDATEEXTRALIST_OFFSET UNITYSDK_OFFSET(0xA969610)
#define MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER_UPDATENORMALLIST_OFFSET UNITYSDK_OFFSET(0xA969200)
#define MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER_UPDATEREWARD_OFFSET UNITYSDK_OFFSET(0xA969010)
#define MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER_UPDATETITLE_OFFSET UNITYSDK_OFFSET(0xA968B70)
#define MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER_UPDATEUI_OFFSET UNITYSDK_OFFSET(0xA9699F0)
#define MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA969A50)
#define MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA969B90)
#define MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA969C00)
#define MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA969C10)
#define MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA969C20)

namespace MoleMole
{
	inline static constexpr unsigned int UIExpeditionRewardListPopWindowController_TypeDefinitionIndex = 37697;

	class UIExpeditionRewardListPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_202A28762617354F* _view; // 0x2F8
		::MoleMole::ExpeditionRewardListContext* _context; // 0x300
		::MoleMole::MonoGamepadCustomList* _rewardList; // 0x308
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _rewardGameObjects; // 0x310
		::System::Collections::Generic::List_1<::MoleMole::UISuibianTempleAdditionalMaterialBonusRowWidgetController*>* _normalList; // 0x318
		::System::Collections::Generic::List_1<::MoleMole::UISuibianTempleAdditionalMaterialBonusRowWidgetController*>* _extraList; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void UpdateTitle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER_UPDATETITLE_OFFSET))(this);
		}

		::System::Void UpdateReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER_UPDATEREWARD_OFFSET))(this);
		}

		::System::Void UpdateNormalList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER_UPDATENORMALLIST_OFFSET))(this);
		}

		::System::Void UpdateExtraList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER_UPDATEEXTRALIST_OFFSET))(this);
		}

		::System::Void UpdateUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER_UPDATEUI_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
