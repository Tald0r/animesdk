#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5EA2B17DF83E32C8_1.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_208CC9941471731A_106;
class Class_2_208CC9941471731A_53;
class Class_2_E9C73AC5DD9D615D;
class Class_3_601FA52CA5E757A0;
class MonoUIGachaItemParam_ConfigItem;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_GETCONFIGITEMS_OFFSET UNITYSDK_OFFSET(0xADEE650)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_GETRARITYSOUNDKEY_OFFSET UNITYSDK_OFFSET(0xADEEC50)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_GET_IGNOREFADING_OFFSET UNITYSDK_OFFSET(0xADED800)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xADEDE60)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_ONPLAYANIMFINISH_OFFSET UNITYSDK_OFFSET(0xADEED10)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_ONPLAYFADEINANIMATIONAFTERLOADING_OFFSET UNITYSDK_OFFSET(0xADEDDC0)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xADEDF00)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xADED810)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xADED8B0)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_PLAYITEMFADEINANIM_OFFSET UNITYSDK_OFFSET(0xADEE0A0)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_REFRESHITEMIMAGE_OFFSET UNITYSDK_OFFSET(0xADEE8B0)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_REFRESHRARITY_OFFSET UNITYSDK_OFFSET(0xADEE6D0)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xADEDB70)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_REGISTERONCLICK_OFFSET UNITYSDK_OFFSET(0xADEE5E0)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_RESETFADEINANIMSTATE_OFFSET UNITYSDK_OFFSET(0xADEDFE0)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xADEF310)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER__ONUIOPEN_B__4_0_OFFSET UNITYSDK_OFFSET(0xADEF340)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xADEF3B0)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___BASE_ONPLAYFADEINANIMATIONAFTERLOADING_OFFSET UNITYSDK_OFFSET(0xADEF420)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xADEF430)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xADEF4B0)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xADEF510)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaItemWidgetController_TypeDefinitionIndex = 56484;

	class UIGachaItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_E9C73AC5DD9D615D* _view; // 0x2A0
		::Class_3_601FA52CA5E757A0* _item; // 0x2A8
		::Enum_3_5EA2B17DF83E32C8_1 _itemType; // 0x2B0
		::Class_2_208CC9941471731A_53* _template; // 0x2B8
		::Class_2_208CC9941471731A_106* _resourceTemplate; // 0x2C0
		::System::Action_2<::Enum_3_5EA2B17DF83E32C8_1, ::System::Int32>* _onClick; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IgnoreFading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_GET_IGNOREFADING_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnPlayFadeInAnimationAfterLoading(::System::String* fadeAnimation, ::System::Boolean isPlayToEnd, ::System::Single animSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_ONPLAYFADEINANIMATIONAFTERLOADING_OFFSET))(this, fadeAnimation, isPlayToEnd, animSpeed);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ResetFadeInAnimState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_RESETFADEINANIMSTATE_OFFSET))(this);
		}

		::System::Void PlayItemFadeInAnim(::System::Single activateAnimDelay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_PLAYITEMFADEINANIM_OFFSET))(this, activateAnimDelay);
		}

		::System::Void RegisterOnClick(::System::Action_2<::Enum_3_5EA2B17DF83E32C8_1, ::System::Int32>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::Enum_3_5EA2B17DF83E32C8_1, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_REGISTERONCLICK_OFFSET))(this, action);
		}

		::System::Collections::Generic::List_1<::MonoUIGachaItemParam_ConfigItem*>* GetConfigItems()
		{
			return ((::System::Collections::Generic::List_1<::MonoUIGachaItemParam_ConfigItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_GETCONFIGITEMS_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshItemImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_REFRESHITEMIMAGE_OFFSET))(this);
		}

		::System::Void RefreshRarity(::System::Int32 rarityValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_REFRESHRARITY_OFFSET))(this, rarityValue);
		}

		::System::String* GetRaritySoundKey(::System::Int32 rarity)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_GETRARITYSOUNDKEY_OFFSET))(this, rarity);
		}

		::System::Void OnPlayAnimFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_ONPLAYANIMFINISH_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER__ONUIOPEN_B__4_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnPlayFadeInAnimationAfterLoading(::System::String* P0, ::System::Boolean P1, ::System::Single P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___BASE_ONPLAYFADEINANIMATIONAFTERLOADING_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
