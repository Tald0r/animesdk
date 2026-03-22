#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_9D9172C07F82DDAE;
class Class_2_B8B3B146A4DA74F5;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x7A6D860)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_INVOKECLICK_OFFSET UNITYSDK_OFFSET(0x7A6F5B0)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7A6DB40)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7A6DBE0)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7A6D6D0)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x7A6F6F0)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_REFRESHMUTE_OFFSET UNITYSDK_OFFSET(0x7A6EC10)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x7A6DDF0)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETBANGBOOSTATE_OFFSET UNITYSDK_OFFSET(0x7A6FCF0)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETCLICKFUNCTION_OFFSET UNITYSDK_OFFSET(0x7A6F540)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETEFFECT_OFFSET UNITYSDK_OFFSET(0x7A6E6D0)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETEMPTYBG_OFFSET UNITYSDK_OFFSET(0x7A6E640)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETMOREINFO_OFFSET UNITYSDK_OFFSET(0x7A6FDD0)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETSTATE_OFFSET UNITYSDK_OFFSET(0x7A6F7B0)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x7A6F390)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x7A70050)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER__INITVIEW_B__15_0_OFFSET UNITYSDK_OFFSET(0x7A70080)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7A701C0)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7A70230)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7A702B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardItemBtnWidgetController_TypeDefinitionIndex = 77423;

	class UIHollowCardItemBtnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::String* AnimationFadeInName; // 0x0
		// static const ::System::String* AnimationFadeOutName; // 0x0
		// static const ::System::String* CurseEffect; // 0x0
		// static const ::System::String* CombineEffect; // 0x0
		// static const ::System::String* SEffect; // 0x0
		// static const ::System::String* CurseMaterial; // 0x0
		::Foundation::AssetRequestHandle _handle; // 0x2A0
		::System::Boolean showBangbooIcon; // 0x2C0
		::System::Boolean bangbooState; // 0x2C1
		::System::Action_2<::UnityEngine::GameObject*, ::System::Int32>* _clickCallback; // 0x2C8
		::System::Int32 _itemid; // 0x2D0
		::Class_2_B8B3B146A4DA74F5* _view; // 0x2D8
		::UnityEngine::Animation* _animation; // 0x2E0
		::Class_2_9D9172C07F82DDAE* _itemModel; // 0x2E8
		::System::Boolean _enable; // 0x2F0
		::UnityEngine::Material* _defaultMaterial; // 0x2F8
		::UnityEngine::GameObject* CombineEffectGo; // 0x300
		::UnityEngine::GameObject* SEffectGo; // 0x308
		::UnityEngine::GameObject* CurseEffectGo; // 0x310
		::UnityEngine::Animation* _iconAnim; // 0x318
		::UnityEngine::Material* _curseMaterial; // 0x320
		::System::Boolean _playCurseAnim; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Int32 itemid, ::System::Boolean dontSetEffect, ::System::Boolean resetEffectState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, itemid, dontSetEffect, resetEffectState);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void SetClickFunction(::System::Action_2<::UnityEngine::GameObject*, ::System::Int32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::UnityEngine::GameObject*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETCLICKFUNCTION_OFFSET))(this, callback);
		}

		::System::Void InvokeClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_INVOKECLICK_OFFSET))(this);
		}

		::System::Void PlayAnimation(::System::Boolean isfadein)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_PLAYANIMATION_OFFSET))(this, isfadein);
		}

		::System::Void SetEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETEFFECT_OFFSET))(this);
		}

		::System::Void RefreshMute(::System::Boolean anim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_REFRESHMUTE_OFFSET))(this, anim);
		}

		::System::Void SetState(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETSTATE_OFFSET))(this, enable);
		}

		::System::Void SetBangbooState(::System::Boolean showBangbooIcon)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETBANGBOOSTATE_OFFSET))(this, showBangbooIcon);
		}

		::System::Void SetEmptyBg(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETEMPTYBG_OFFSET))(this, active);
		}

		::System::Void SetMoreInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETMOREINFO_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void _InitView_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER__INITVIEW_B__15_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
