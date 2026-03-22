#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_9E3E3CDA608A4F58;
class Class_2_C282B8DEFC72AD58;
class PopEffect;
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_COLLECTMIDDLETEXTS_OFFSET UNITYSDK_OFFSET(0xCAD0400)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_GET_ISIGNOREINPUT_OFFSET UNITYSDK_OFFSET(0xCAD0220)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0xCAD0230)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xCAD0210)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCAD06E0)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCAD17D0)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCAD0780)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCAD0250)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0xCAD1420)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_SET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0xCAD0240)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_SHOWDIALOG_OFFSET UNITYSDK_OFFSET(0xCAD0810)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_SHOWLEFTROOTITEM_OFFSET UNITYSDK_OFFSET(0xCAD1670)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCAD1900)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER__SHOWDIALOG_B__26_0_OFFSET UNITYSDK_OFFSET(0xCAD1970)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER__SHOWDIALOG_B__26_1_OFFSET UNITYSDK_OFFSET(0xCAD19E0)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER__SHOWDIALOG_B__26_2_OFFSET UNITYSDK_OFFSET(0xCAD1A50)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER__SHOWDIALOG_B__26_3_OFFSET UNITYSDK_OFFSET(0xCAD1AC0)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCAD1B30)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCAD1BA0)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCAD1BB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralSubtitle05EDPopWindowController_TypeDefinitionIndex = 78642;

	class UIGeneralSubtitle05EDPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* fadeInAnimName; // 0x0
		// static const ::System::String* fadeOutAnimName; // 0x0
		// static const ::System::Int32 MaxLeftLength = 0xA; // 0x0
		::System::Boolean _IsIgnoreInput_k__BackingField; // 0x2F8
		::Class_2_C282B8DEFC72AD58* _view; // 0x300
		::System::Boolean _NeedCache_k__BackingField; // 0x308
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* leftTexts; // 0x310
		::Foundation::Coroutine::CoroutineHandle leftFadeOutHandle; // 0x318
		::Foundation::Coroutine::CoroutineHandle middleFadeOutHandle; // 0x31C
		::Foundation::Coroutine::CoroutineHandle bottomFadeOutHandle; // 0x320
		::Foundation::Coroutine::CoroutineHandle upFadeOutHandle; // 0x324
		::System::Boolean showBottom; // 0x328
		::System::Boolean showLeft; // 0x329
		::System::Boolean showMiddle; // 0x32A
		::System::Boolean showTop; // 0x32B
		::PopEffect* _topTextEffect; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsIgnoreInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_GET_ISIGNOREINPUT_OFFSET))(this);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::System::Void set_NeedCache(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_SET_NEEDCACHE_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ShowDialog(::System::String* bottomSubtitleKey, ::System::String* middleTextKey, ::System::String* leftTopTextKey, ::Il2CppArray<::System::String*>* leftTextKeys, ::System::String* middleTopKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_SHOWDIALOG_OFFSET))(this, bottomSubtitleKey, middleTextKey, leftTopTextKey, leftTextKeys, middleTopKey);
		}

		::System::Void ShowLeftRootItem(::System::Int32 index, ::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_SHOWLEFTROOTITEM_OFFSET))(this, index, isShow);
		}

		::System::Void PlayAnimation(::Class_2_9E3E3CDA608A4F58* anim, ::System::String* stateName, ::Foundation::Coroutine::CoroutineHandle& fadeInHandle, ::System::Action* cb)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_9E3E3CDA608A4F58*, ::System::String*, ::Foundation::Coroutine::CoroutineHandle&, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_PLAYANIMATION_OFFSET))(this, anim, stateName, fadeInHandle, cb);
		}

		::System::Void CollectMiddleTexts(::UnityEngine::Transform* parentTrans)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_COLLECTMIDDLETEXTS_OFFSET))(this, parentTrans);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void _ShowDialog_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER__SHOWDIALOG_B__26_0_OFFSET))(this);
		}

		::System::Void _ShowDialog_b__26_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER__SHOWDIALOG_B__26_1_OFFSET))(this);
		}

		::System::Void _ShowDialog_b__26_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER__SHOWDIALOG_B__26_2_OFFSET))(this);
		}

		::System::Void _ShowDialog_b__26_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER__SHOWDIALOG_B__26_3_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
