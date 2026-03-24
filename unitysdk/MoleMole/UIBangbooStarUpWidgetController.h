#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/BangbooBaseWidget.h"

class Class_2_79F6D62CE30E3F8E_95;
class Class_2_C832474F3EB70101;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_GETHASSTARMATERIAL_OFFSET UNITYSDK_OFFSET(0xBFCFAC0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_GETRIGHTBTNTEXT_OFFSET UNITYSDK_OFFSET(0xBFCFD30)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBFCE300)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_ONSTARUP_OFFSET UNITYSDK_OFFSET(0xBFCF5F0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBFCE3A0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBFCE0D0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_RIGHTBTNCALL_OFFSET UNITYSDK_OFFSET(0xBFCFE00)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_SETCONSUME_OFFSET UNITYSDK_OFFSET(0xBFCE9E0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_SETSTAR_OFFSET UNITYSDK_OFFSET(0xBFCF340)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_SHOWCURSTAR_OFFSET UNITYSDK_OFFSET(0xBFCE820)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_SHOWNEXTSTAR_OFFSET UNITYSDK_OFFSET(0xBFCE950)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_SHOWPROPERTY_OFFSET UNITYSDK_OFFSET(0xBFCF230)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_UPDATEUI_OFFSET UNITYSDK_OFFSET(0xBFCE6B0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xBFD0210)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBFD01E0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER__ONSTARUP_B__9_0_OFFSET UNITYSDK_OFFSET(0xBFD0250)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER__ONSTARUP_B__9_1_OFFSET UNITYSDK_OFFSET(0xBFD0260)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER__RIGHTBTNCALL_B__13_0_OFFSET UNITYSDK_OFFSET(0xBFD0270)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_GETRIGHTBTNTEXT_OFFSET UNITYSDK_OFFSET(0xBFD02A0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBFD0310)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBFD0380)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBFD0400)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_RIGHTBTNCALL_OFFSET UNITYSDK_OFFSET(0xBFD0460)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_UPDATEUI_OFFSET UNITYSDK_OFFSET(0xBFD04C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooStarUpWidgetController_TypeDefinitionIndex = 49638;

	class UIBangbooStarUpWidgetController : public ::MoleMole::BangbooBaseWidget
	{
	public:
		static ::System::String** StaticGet_StarUPAni()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooStarUpWidgetController_TypeDefinitionIndex)->GetStaticField(0x40630);
		}
		::Class_2_C832474F3EB70101* _view; // 0x2C0
		::Foundation::Coroutine::CoroutineHandle okBtnDisableHandle; // 0x2C8
		::MoleMole::UIItemIconBtnWidgetController* _itemController; // 0x2D0
		::Class_2_79F6D62CE30E3F8E_95* _ParentView; // 0x2D8
		::System::Int32 useMat; // 0x2E0
		::System::Boolean isStarUpShowing; // 0x2E4
		::System::Boolean isUseAdaptiveItem; // 0x2E5
		::System::Boolean isSuggestUseAdaptiveItem; // 0x2E6

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void UpdateUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_UPDATEUI_OFFSET))(this);
		}

		::System::Void ShowProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_SHOWPROPERTY_OFFSET))(this);
		}

		::System::Void ShowCurStar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_SHOWCURSTAR_OFFSET))(this);
		}

		::System::Void ShowNextStar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_SHOWNEXTSTAR_OFFSET))(this);
		}

		::System::Void SetStar(::System::Int32 starCount, ::UnityEngine::Transform* starRoot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_SETSTAR_OFFSET))(this, starCount, starRoot);
		}

		::System::Void OnStarUp(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_ONSTARUP_OFFSET))(this, arg);
		}

		::System::Boolean GetHasStarMaterial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_GETHASSTARMATERIAL_OFFSET))(this);
		}

		::System::Void SetConsume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_SETCONSUME_OFFSET))(this);
		}

		::System::Void RightBtnCall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_RIGHTBTNCALL_OFFSET))(this);
		}

		::System::String* GetRightBtnText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_GETRIGHTBTNTEXT_OFFSET))(this);
		}

		::System::Void _OnStarUp_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER__ONSTARUP_B__9_0_OFFSET))(this);
		}

		::System::Void _OnStarUp_b__9_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER__ONSTARUP_B__9_1_OFFSET))(this);
		}

		::System::Void _RightBtnCall_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER__RIGHTBTNCALL_B__13_0_OFFSET))(this);
		}

		::System::String* __base_GetRightBtnText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_GETRIGHTBTNTEXT_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_RightBtnCall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_RIGHTBTNCALL_OFFSET))(this);
		}

		::System::Void __base_UpdateUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_UPDATEUI_OFFSET))(this);
		}
	};
}
