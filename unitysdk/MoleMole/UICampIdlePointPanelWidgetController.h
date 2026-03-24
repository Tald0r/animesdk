#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_51.h"
#include "unitysdk/Enum_3_340DE32BA097F66C.h"
#include "unitysdk/MoleMole/UICampIdlePointPanelWidgetController_InViewState.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/MonoUITableScrollV2_ScrollParams_SelectAlignType.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_60DDD9C206686F44;
class Class_2_724B52733CF016D0;
class Class_2_9E3E3CDA608A4F58;
class MonoScrollBarEx;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UICampIdleNodeWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_BINDSCROLLBAR_OFFSET UNITYSDK_OFFSET(0xB280BF0)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GETNODEPREFABBYID_OFFSET UNITYSDK_OFFSET(0xB2814D0)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GETVIEWSTATEOF_OFFSET UNITYSDK_OFFSET(0xB280B20)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GET_CONTENTBTN_OFFSET UNITYSDK_OFFSET(0xB280B00)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GET_DIALOGSPACEANIMATION_OFFSET UNITYSDK_OFFSET(0xB280AA0)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GET_DIALOGSPACE_OFFSET UNITYSDK_OFFSET(0xB280AC0)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GET_POINTPANEL_OFFSET UNITYSDK_OFFSET(0xB280AE0)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_INITNODES_OFFSET UNITYSDK_OFFSET(0xB280CF0)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB281FB0)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB282050)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB280A00)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB281F00)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_SCROLLTOID_OFFSET UNITYSDK_OFFSET(0xB281740)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_SETPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xB280C80)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_TRYAVOIDOCCULUSION_OFFSET UNITYSDK_OFFSET(0xB281B10)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB282130)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB282160)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB2821D0)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB282250)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB2822B0)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdlePointPanelWidgetController_TypeDefinitionIndex = 43010;

	class UICampIdlePointPanelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_724B52733CF016D0* _view; // 0x2A0
		::Enum_3_0A3761FE34514D6C_51 m_playType; // 0x2A8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UICampIdleNodeWidgetController*>* m_ctrlDict; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::Class_2_9E3E3CDA608A4F58* get_DialogSpaceAnimation()
		{
			return ((::Class_2_9E3E3CDA608A4F58*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GET_DIALOGSPACEANIMATION_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_DialogSpace()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GET_DIALOGSPACE_OFFSET))(this);
		}

		::MoleMole::MonoGamepadCustomList* get_PointPanel()
		{
			return ((::MoleMole::MonoGamepadCustomList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GET_POINTPANEL_OFFSET))(this);
		}

		::Class_2_60DDD9C206686F44* get_ContentBtn()
		{
			return ((::Class_2_60DDD9C206686F44*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GET_CONTENTBTN_OFFSET))(this);
		}

		::MoleMole::UICampIdlePointPanelWidgetController_InViewState GetViewStateOf(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::MoleMole::UICampIdlePointPanelWidgetController_InViewState(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GETVIEWSTATEOF_OFFSET))(this, rectTransform);
		}

		::System::Void BindScrollBar(::MonoScrollBarEx* bar)
		{
			return ((::System::Void(*)(::PVOID, ::MonoScrollBarEx*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_BINDSCROLLBAR_OFFSET))(this, bar);
		}

		::System::Void SetPlayType(::Enum_3_0A3761FE34514D6C_51 playType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_51))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_SETPLAYTYPE_OFFSET))(this, playType);
		}

		::System::Void InitNodes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_INITNODES_OFFSET))(this);
		}

		::Enum_3_340DE32BA097F66C GetNodePrefabByID(::System::Int32 id)
		{
			return ((::Enum_3_340DE32BA097F66C(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GETNODEPREFABBYID_OFFSET))(this, id);
		}

		::System::Void ScrollToID(::System::Int32 nodeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_SCROLLTOID_OFFSET))(this, nodeID);
		}

		::System::Void TryAvoidOcculusion(::System::Int32 nodeID, ::MonoUITableScrollV2_ScrollParams_SelectAlignType alignType, ::UnityEngine::Vector2 range)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MonoUITableScrollV2_ScrollParams_SelectAlignType, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_TRYAVOIDOCCULUSION_OFFSET))(this, nodeID, alignType, range);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
