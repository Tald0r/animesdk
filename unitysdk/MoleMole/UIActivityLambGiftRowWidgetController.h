#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5D3AF1309617E53D.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_B08665FEB7112467_2;
class Class_2_79AE422BA06F6D26_205;
namespace MoleMole { class UIActivityLambGiftItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER_ONCLICKREWARDITEM_OFFSET UNITYSDK_OFFSET(0xD3C18F0)
#define MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD3C0A90)
#define MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xD3C0C10)
#define MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD3C0B30)
#define MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD3C0560)
#define MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER_REFRESHREWARDSTATE_OFFSET UNITYSDK_OFFSET(0xD3C1430)
#define MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD3C1B70)
#define MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD3C1B80)
#define MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xD3C1BF0)
#define MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD3C1C70)
#define MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD3C1CF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityLambGiftRowWidgetController_TypeDefinitionIndex = 59680;

	class UIActivityLambGiftRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		// static const ::System::Int32 maxRewardCount = 0x2; // 0x0
		::Class_2_79AE422BA06F6D26_205* _view; // 0x2D0
		::Class_1_B08665FEB7112467_2* activityData; // 0x2D8
		::Il2CppArray<::MoleMole::UIActivityLambGiftItemWidgetController*>* rewardIconArray; // 0x2E0
		::System::Collections::Generic::Dictionary_2<::Enum_3_5D3AF1309617E53D, ::UnityEngine::GameObject*>* takeStateObejcts; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnClickRewardItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER_ONCLICKREWARDITEM_OFFSET))(this);
		}

		::System::Void RefreshRewardState(::Enum_3_5D3AF1309617E53D nowRewardState)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_5D3AF1309617E53D))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER_REFRESHREWARDSTATE_OFFSET))(this, nowRewardState);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
