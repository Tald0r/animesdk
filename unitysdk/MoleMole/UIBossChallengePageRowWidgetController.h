#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIBossChallengePageController_LayerInfoData.h"

class Class_2_A6780D51809974EC;
namespace MoleMole { class UIControlReference; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_GET_LAYERDATA_OFFSET UNITYSDK_OFFSET(0xDDC4E60)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xDDC5070)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xDDC51F0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_ONSELECTEDLAYERCHANGED_OFFSET UNITYSDK_OFFSET(0xDDC60C0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xDDC5110)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xDDC4E70)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xDDC5310)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_SETCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0xDDC6050)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_SET_LAYERDATA_OFFSET UNITYSDK_OFFSET(0xDDC4E50)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDDC61F0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER__ONUIINIT_B__9_0_OFFSET UNITYSDK_OFFSET(0xDDC6200)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER__ONUIINIT_B__9_1_OFFSET UNITYSDK_OFFSET(0xDDC6290)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xDDC62A0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xDDC6310)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xDDC6390)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xDDC6410)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengePageRowWidgetController_TypeDefinitionIndex = 59122;

	class UIBossChallengePageRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_A6780D51809974EC* _view; // 0x2D0
		::MoleMole::UIBossChallengePageController_LayerInfoData _layerData_k__BackingField; // 0x2D8
		::System::Action_1<::MoleMole::UIBossChallengePageRowWidgetController*>* _clickCallback; // 0x2E0
		::System::Int32 _selectLayerIndex; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void set_layerData(::MoleMole::UIBossChallengePageController_LayerInfoData value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBossChallengePageController_LayerInfoData))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_SET_LAYERDATA_OFFSET))(this, value);
		}

		::MoleMole::UIBossChallengePageController_LayerInfoData get_layerData()
		{
			return ((::MoleMole::UIBossChallengePageController_LayerInfoData(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_GET_LAYERDATA_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void SetClickCallback(::System::Action_1<::MoleMole::UIBossChallengePageRowWidgetController*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIBossChallengePageRowWidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_SETCLICKCALLBACK_OFFSET))(this, callback);
		}

		::System::Void OnSelectedLayerChanged(::MoleMole::UIBossChallengePageController_LayerInfoData selectedLayerData)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBossChallengePageController_LayerInfoData))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_ONSELECTEDLAYERCHANGED_OFFSET))(this, selectedLayerData);
		}

		::System::Void _OnUIInit_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER__ONUIINIT_B__9_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__9_1(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER__ONUIINIT_B__9_1_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
