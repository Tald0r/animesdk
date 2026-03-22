#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowGuideItemWidgetController___c__DisplayClass15_0.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_EC95E4DBAA37F712;
namespace MoleMole { class UIControlReference; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_GET_FULLSCREENRECTTRANS_OFFSET UNITYSDK_OFFSET(0xC072FA0)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_GET_ISPLAYERVISIBLE_OFFSET UNITYSDK_OFFSET(0xC072F70)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xC072F80)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_HIDEVIEW_OFFSET UNITYSDK_OFFSET(0xC073BB0)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC0731A0)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC073240)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC072FC0)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_RESETVIEWSTATE_OFFSET UNITYSDK_OFFSET(0xC073320)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_SET_FULLSCREENRECTTRANS_OFFSET UNITYSDK_OFFSET(0xC072FB0)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xC072F90)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_SHOWVIEW_OFFSET UNITYSDK_OFFSET(0xC073A70)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0xC073430)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC0740C0)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER__HIDEVIEW_B__17_0_OFFSET UNITYSDK_OFFSET(0xC0741D0)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER__ONUIINIT_B__10_0_OFFSET UNITYSDK_OFFSET(0xC074110)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER__TICK_G___UPDATEPOS_15_0_OFFSET UNITYSDK_OFFSET(0xC073CA0)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER__TICK_G___UPDATEROT_15_1_OFFSET UNITYSDK_OFFSET(0xC073E90)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC0743C0)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC074430)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC0744B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowGuideItemWidgetController_TypeDefinitionIndex = 77505;

	class UIHollowGuideItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Boolean _IsShow_k__BackingField; // 0x2A0
		::UnityEngine::RectTransform* _FullScreenRectTrans_k__BackingField; // 0x2A8
		::UnityEngine::Vector3 _initWorldPos; // 0x2B0
		::Class_2_EC95E4DBAA37F712* _view; // 0x2C0
		::System::Boolean _prvPlayerVisible; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlayerVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_GET_ISPLAYERVISIBLE_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_GET_ISSHOW_OFFSET))(this);
		}

		::System::Void set_IsShow(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_SET_ISSHOW_OFFSET))(this, value);
		}

		::UnityEngine::RectTransform* get_FullScreenRectTrans()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_GET_FULLSCREENRECTTRANS_OFFSET))(this);
		}

		::System::Void set_FullScreenRectTrans(::UnityEngine::RectTransform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_SET_FULLSCREENRECTTRANS_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ResetViewState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_RESETVIEWSTATE_OFFSET))(this);
		}

		::System::Void Tick(::UnityEngine::Vector3 inputWorldPos, ::UnityEngine::Camera* cam, ::System::Boolean playerVisible, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Camera*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_TICK_OFFSET))(this, inputWorldPos, cam, playerVisible, deltaTime);
		}

		::System::Void ShowView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_SHOWVIEW_OFFSET))(this);
		}

		::System::Void HideView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_HIDEVIEW_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER__ONUIINIT_B__10_0_OFFSET))(this);
		}

		::System::Void _Tick_g___updatePos_15_0(::MoleMole::UIHollowGuideItemWidgetController___c__DisplayClass15_0& a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowGuideItemWidgetController___c__DisplayClass15_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER__TICK_G___UPDATEPOS_15_0_OFFSET))(this, a1);
		}

		::System::Void _Tick_g___updateRot_15_1(::MoleMole::UIHollowGuideItemWidgetController___c__DisplayClass15_0& a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowGuideItemWidgetController___c__DisplayClass15_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER__TICK_G___UPDATEROT_15_1_OFFSET))(this, a1);
		}

		::System::Void _HideView_b__17_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER__HIDEVIEW_B__17_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
