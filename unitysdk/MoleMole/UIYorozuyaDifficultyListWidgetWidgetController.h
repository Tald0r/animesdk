#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIYorozuyaDifficultyInfoWidgetControllerContext_NestType.h"
#include "unitysdk/MoleMole/UIYorozuyaDifficultyListWidgetWidgetController_PointRootState.h"

class Class_2_208CC9941471731A_495;
class Class_2_724B3079070B9259_2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIYorozuyaDifficultyInfoWidgetController; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x7BE6B90)
#define MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7BE61A0)
#define MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x7BE6320)
#define MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7BE6240)
#define MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7BE5ED0)
#define MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_REFRESHUIBYPOINTROOTSTATE_OFFSET UNITYSDK_OFFSET(0x7BE6560)
#define MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_SELECTHEATBUFF_OFFSET UNITYSDK_OFFSET(0x7BE6DC0)
#define MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_SETHEATID_OFFSET UNITYSDK_OFFSET(0x7BE64D0)
#define MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_SETSELECTSTATE_OFFSET UNITYSDK_OFFSET(0x7BE7410)
#define MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_UPDATEUI_OFFSET UNITYSDK_OFFSET(0x7BE75E0)
#define MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x7BE79D0)
#define MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7BE79E0)
#define MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x7BE7A50)
#define MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7BE7AD0)
#define MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7BE7B50)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaDifficultyListWidgetWidgetController_TypeDefinitionIndex = 56564;

	class UIYorozuyaDifficultyListWidgetWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_724B3079070B9259_2* _view; // 0x2D0
		::System::Int32 index; // 0x2D8
		::System::Action_2<::System::Int32, ::System::Boolean>* toggleCall; // 0x2E0
		::System::Action* selectCall; // 0x2E8
		::System::Boolean isSelect; // 0x2F0
		::MoleMole::UIYorozuyaDifficultyInfoWidgetControllerContext_NestType m_nestType; // 0x2F4
		::MoleMole::UIYorozuyaDifficultyListWidgetWidgetController_PointRootState m_pointRootState; // 0x2F8
		::Class_2_208CC9941471731A_495* _heatConfig; // 0x300
		::MoleMole::UIYorozuyaDifficultyInfoWidgetController* _parentWidget; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshUIByPointRootState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_REFRESHUIBYPOINTROOTSTATE_OFFSET))(this);
		}

		::System::Void SelectHeatBuff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_SELECTHEATBUFF_OFFSET))(this);
		}

		::System::Void SetHeatID(::Class_2_208CC9941471731A_495* _heatConfig, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_495*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_SETHEATID_OFFSET))(this, _heatConfig, index);
		}

		::System::Void UpdateUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_UPDATEUI_OFFSET))(this);
		}

		::System::Void SetSelectState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_SETSELECTSTATE_OFFSET))(this);
		}

		::System::Boolean IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_ISUNLOCK_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
