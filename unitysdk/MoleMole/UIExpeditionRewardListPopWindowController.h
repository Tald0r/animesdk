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

#define MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xBEF8230)
#define MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBEF8AE0)
#define MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBEF8B80)
#define MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBEF8240)
#define MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBEF8450)
#define MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER_UPDATEEXTRALIST_OFFSET UNITYSDK_OFFSET(0xBEF9020)
#define MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER_UPDATENORMALLIST_OFFSET UNITYSDK_OFFSET(0xBEF8C10)
#define MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER_UPDATEREWARD_OFFSET UNITYSDK_OFFSET(0xBEF8A20)
#define MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER_UPDATETITLE_OFFSET UNITYSDK_OFFSET(0xBEF8580)
#define MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER_UPDATEUI_OFFSET UNITYSDK_OFFSET(0xBEF9400)
#define MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBEF9460)
#define MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBEF95A0)
#define MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBEF9610)
#define MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBEF9620)
#define MOLEMOLE_UIEXPEDITIONREWARDLISTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBEF9630)

namespace MoleMole
{
	inline static constexpr unsigned int UIExpeditionRewardListPopWindowController_TypeDefinitionIndex = 65824;

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
