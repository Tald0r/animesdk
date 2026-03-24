#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_48D56DACBE4271BC;
class Class_2_208CC9941471731A_574;
class Class_2_3B0F8CEEFA465A87;
class Class_2_79AE422BA06F6D26_158;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_BINDSLOTDATA_OFFSET UNITYSDK_OFFSET(0x8CACCA0)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_GET_SLOTDATA_OFFSET UNITYSDK_OFFSET(0x8CAC720)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8CAC9B0)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x8CACBC0)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8CACA50)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8CAC730)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_REFRESHAUTOBATTLEBANGBOOCARD_OFFSET UNITYSDK_OFFSET(0x8CAD460)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_SETDRAGGING_OFFSET UNITYSDK_OFFSET(0x8CAD2D0)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x8CAD0A0)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_TOGGLEHINT_OFFSET UNITYSDK_OFFSET(0x8CAD180)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_TRYSETHOVERING_OFFSET UNITYSDK_OFFSET(0x8CAD390)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER__BINDSLOTDATA_B__21_0_OFFSET UNITYSDK_OFFSET(0x8CADFB0)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER__BINDSLOTDATA_B__21_1_OFFSET UNITYSDK_OFFSET(0x8CAE270)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER__BINDSLOTDATA_B__21_2_OFFSET UNITYSDK_OFFSET(0x8CAE4B0)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER__BINDSLOTDATA_B__21_3_OFFSET UNITYSDK_OFFSET(0x8CAE8A0)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8CADFA0)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8CAE9B0)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x8CAEA20)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8CAEAA0)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8CAEB20)

namespace MoleMole
{
	inline static constexpr unsigned int UIABStandbySlotItemWidgetController_TypeDefinitionIndex = 51899;

	class UIABStandbySlotItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_158* _view; // 0x2D0
		::Class_2_3B0F8CEEFA465A87* _slotData; // 0x2D8
		::Class_1_48D56DACBE4271BC* _syncHelper; // 0x2E0
		::System::Boolean _isCurDragging; // 0x2E8
		::System::Boolean _isHovering; // 0x2E9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_3B0F8CEEFA465A87* get_SlotData()
		{
			return ((::Class_2_3B0F8CEEFA465A87*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_GET_SLOTDATA_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void ToggleHint(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_TOGGLEHINT_OFFSET))(this, isShow);
		}

		::System::Void SetDragging(::System::Boolean isDragging)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_SETDRAGGING_OFFSET))(this, isDragging);
		}

		::System::Void TrySetHovering(::System::Boolean isHovering)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_TRYSETHOVERING_OFFSET))(this, isHovering);
		}

		::System::Void SetEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_SETEMPTY_OFFSET))(this);
		}

		::System::Void BindSlotData(::Class_2_3B0F8CEEFA465A87* slotData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_3B0F8CEEFA465A87*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_BINDSLOTDATA_OFFSET))(this, slotData);
		}

		static ::Class_2_208CC9941471731A_574* RefreshAutoBattleBangBooCard(::System::Int32 characterID, ::UnityEngine::Transform* starRoot, ::UnityEngine::Transform* qualityRoot, ::UnityEngine::Transform* emptyRoot, ::UnityEngine::Transform* normalRoot, ::Class_2_A8F5ABF31E066ED4* bangbooImg, ::Class_2_A8F5ABF31E066ED4* attributeIcon, ::Class_2_A8F5ABF31E066ED4* careerIcon, ::UnityEngine::UI::Extension::UILocalizationText* nameText, ::Class_2_A8F5ABF31E066ED4* rarityIcon, ::UnityEngine::UI::Extension::UILocalizationText* attributeText, ::UnityEngine::UI::Extension::UILocalizationText* careerText, ::Class_2_A8F5ABF31E066ED4* attrBg, ::Class_2_A8F5ABF31E066ED4* careerBg)
		{
			return ((::Class_2_208CC9941471731A_574*(*)(::System::Int32, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::Class_2_A8F5ABF31E066ED4*, ::Class_2_A8F5ABF31E066ED4*, ::Class_2_A8F5ABF31E066ED4*, ::UnityEngine::UI::Extension::UILocalizationText*, ::Class_2_A8F5ABF31E066ED4*, ::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::UI::Extension::UILocalizationText*, ::Class_2_A8F5ABF31E066ED4*, ::Class_2_A8F5ABF31E066ED4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_REFRESHAUTOBATTLEBANGBOOCARD_OFFSET))(characterID, starRoot, qualityRoot, emptyRoot, normalRoot, bangbooImg, attributeIcon, careerIcon, nameText, rarityIcon, attributeText, careerText, attrBg, careerBg);
		}

		::System::Void _BindSlotData_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER__BINDSLOTDATA_B__21_0_OFFSET))(this);
		}

		::System::Void _BindSlotData_b__21_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER__BINDSLOTDATA_B__21_1_OFFSET))(this);
		}

		::System::Void _BindSlotData_b__21_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER__BINDSLOTDATA_B__21_2_OFFSET))(this);
		}

		::System::Void _BindSlotData_b__21_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER__BINDSLOTDATA_B__21_3_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
