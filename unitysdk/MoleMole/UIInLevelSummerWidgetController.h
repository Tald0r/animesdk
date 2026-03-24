#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIInLevelLightUpPointsItemControllerBase.h"

class Class_2_7AA01DA713CC33A9_3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_DOREFRESHITEMSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x9D74F30)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_ITEMFADEIN_OFFSET UNITYSDK_OFFSET(0x9D74B60)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_ITEMFADEOUT_OFFSET UNITYSDK_OFFSET(0x9D74BB0)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_ITEMLOOP_OFFSET UNITYSDK_OFFSET(0x9D74BA0)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_LIGHTUPANIM_OFFSET UNITYSDK_OFFSET(0x9D74C20)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_LIGHTUPGO_OFFSET UNITYSDK_OFFSET(0x9D74C10)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_MAXANIM_OFFSET UNITYSDK_OFFSET(0x9D74C50)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_POINTMAXFADEIN_OFFSET UNITYSDK_OFFSET(0x9D74BF0)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_POINTMAXFADEOUT_OFFSET UNITYSDK_OFFSET(0x9D74C00)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9D74DB0)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9D74E50)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9D74C60)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x9D74D00)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9D75110)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER___BASE_DOREFRESHITEMSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x9D75150)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9D75160)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9D751D0)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9D75250)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x9D752B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelSummerWidgetController_TypeDefinitionIndex = 67500;

	class UIInLevelSummerWidgetController : public ::MoleMole::UIInLevelLightUpPointsItemControllerBase
	{
	public:
		::Class_2_7AA01DA713CC33A9_3* _view; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::String* get_ItemFadeIn()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_ITEMFADEIN_OFFSET))(this);
		}

		::System::String* get_ItemLoop()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_ITEMLOOP_OFFSET))(this);
		}

		::System::String* get_ItemFadeOut()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_ITEMFADEOUT_OFFSET))(this);
		}

		::System::String* get_PointMaxFadeIn()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_POINTMAXFADEIN_OFFSET))(this);
		}

		::System::String* get_PointMaxFadeOut()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_POINTMAXFADEOUT_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_LightUpGo()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_LIGHTUPGO_OFFSET))(this);
		}

		::UnityEngine::Animation* get_LightUpAnim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_LIGHTUPANIM_OFFSET))(this);
		}

		::UnityEngine::Animation* get_MaxAnim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_MAXANIM_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void DoRefreshItemShowState(::System::Boolean isLightUp, ::System::Boolean forceRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_DOREFRESHITEMSHOWSTATE_OFFSET))(this, isLightUp, forceRefresh);
		}

		::System::Void __base_DoRefreshItemShowState(::System::Boolean P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER___BASE_DOREFRESHITEMSHOWSTATE_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
