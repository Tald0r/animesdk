#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_14E7CE92E8A3183F;
class Class_2_208CC9941471731A_677;
class Class_2_46B1304F31463D00;
class Class_2_DA8BF519212BAE65;
namespace MoleMole { class UIAbyssLimboAniMono; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_GETENTRANCEID_OFFSET UNITYSDK_OFFSET(0xDC21BE0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_GETNEEDPLAYUNLOCKEFFECT_OFFSET UNITYSDK_OFFSET(0xDC264A0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_GETPROGRESSEFFECTPLAYCOUNT_OFFSET UNITYSDK_OFFSET(0xDC26570)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_GET_ISAFKLOCKED_OFFSET UNITYSDK_OFFSET(0xDC26480)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_GET_ISBOSSRUSHENTRANCE_OFFSET UNITYSDK_OFFSET(0xDC254B0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_GET_ISLOCK_OFFSET UNITYSDK_OFFSET(0xDC26490)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_GET_ISNESTENTRANCE_OFFSET UNITYSDK_OFFSET(0xDC254C0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0xDC213D0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ISNEW_OFFSET UNITYSDK_OFFSET(0xDC27440)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ISRED_OFFSET UNITYSDK_OFFSET(0xDC27650)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xDC27840)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xDC262B0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ONLIMBOBTNCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0xDC1D750)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xDC263D0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xDC278E0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xDC254D0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xDC26070)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_REFRESHENTRANCEVIEW_OFFSET UNITYSDK_OFFSET(0xDC26610)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_REFRESHHOBAPREFACVIEW_OFFSET UNITYSDK_OFFSET(0xDC26820)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_REFRESHNEWSTATE_OFFSET UNITYSDK_OFFSET(0xDC23080)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_REFRESHPERIODVIEW_OFFSET UNITYSDK_OFFSET(0xDC26F30)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0xDC21D60)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDC279C0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER__ONUIOPEN_B__21_0_OFFSET UNITYSDK_OFFSET(0xDC27AE0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER__ONUIOPEN_B__21_1_OFFSET UNITYSDK_OFFSET(0xDC27AF0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER__REFRESHSTATE_B__35_0_OFFSET UNITYSDK_OFFSET(0xDC27B00)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER__REFRESHSTATE_B__35_1_OFFSET UNITYSDK_OFFSET(0xDC27B70)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER__REFRESHSTATE_B__35_2_OFFSET UNITYSDK_OFFSET(0xDC27BE0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER__REFRESHSTATE_B__35_3_OFFSET UNITYSDK_OFFSET(0xDC27C80)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xDC27E10)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xDC27E80)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xDC27EF0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xDC27F70)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xDC27FD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssLimboWidgetController_TypeDefinitionIndex = 48587;

	class UIAbyssLimboWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::String* ProgressLightAniName; // 0x0
		::Class_2_46B1304F31463D00* _view; // 0x2A0
		::UnityEngine::Transform* lockObj; // 0x2A8
		::UnityEngine::Transform* newObj; // 0x2B0
		::UnityEngine::Transform* redPointObj; // 0x2B8
		::Il2CppArray<::UnityEngine::GameObject*>* progressIconArr; // 0x2C0
		::Il2CppArray<::UnityEngine::GameObject*>* progressLightArr; // 0x2C8
		::MoleMole::UIAbyssLimboAniMono* aniMono; // 0x2D0
		::UnityEngine::UI::Image* iconInTrack; // 0x2D8
		::System::Int32 limboIndex; // 0x2E0
		::System::Action_1<::Class_2_208CC9941471731A_677*>* clickAction; // 0x2E8
		::Class_2_DA8BF519212BAE65* _abyssModel; // 0x2F0
		::UnityEngine::Animation* difficutyLoopAni; // 0x2F8
		::UnityEngine::Animation* difficutyLoopAni2; // 0x300
		::System::Boolean m_isBossRushEntrance; // 0x308
		::System::Boolean m_isNestEntrance; // 0x309
		::System::Collections::Generic::List_1<::Class_2_14E7CE92E8A3183F*>* abyssDungeonList; // 0x310
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* progressLightList; // 0x318
		::System::Collections::Generic::List_1<::UnityEngine::Animation*>* progressAniList; // 0x320
		::System::Boolean hasDifficuty; // 0x328
		::System::Boolean m_isAfkLocked; // 0x329
		::System::Boolean m_isLock; // 0x32A
		::Class_2_208CC9941471731A_677* entranceCfg; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsBossRushEntrance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_GET_ISBOSSRUSHENTRANCE_OFFSET))(this);
		}

		::System::Boolean get_IsNestEntrance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_GET_ISNESTENTRANCE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void InitView(::System::Int32 abyssGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_INITVIEW_OFFSET))(this, abyssGroup);
		}

		::System::Boolean get_IsAfkLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_GET_ISAFKLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_GET_ISLOCK_OFFSET))(this);
		}

		::System::Void RefreshState(::System::Single delay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_REFRESHSTATE_OFFSET))(this, delay);
		}

		::System::Void RefreshEntranceView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_REFRESHENTRANCEVIEW_OFFSET))(this);
		}

		::System::Void RefreshPeriodView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_REFRESHPERIODVIEW_OFFSET))(this);
		}

		::System::Void RefreshHobaPrefacView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_REFRESHHOBAPREFACVIEW_OFFSET))(this);
		}

		::System::Int32 GetEntranceID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_GETENTRANCEID_OFFSET))(this);
		}

		::System::Boolean GetNeedPlayUnlockEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_GETNEEDPLAYUNLOCKEFFECT_OFFSET))(this);
		}

		::System::Int32 GetProgressEffectPlayCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_GETPROGRESSEFFECTPLAYCOUNT_OFFSET))(this);
		}

		::System::Void RefreshNewState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_REFRESHNEWSTATE_OFFSET))(this);
		}

		::System::Boolean IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ISNEW_OFFSET))(this);
		}

		::System::Boolean IsRed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ISRED_OFFSET))(this);
		}

		::System::Void OnLimboBtnClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ONLIMBOBTNCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__21_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER__ONUIOPEN_B__21_0_OFFSET))(this, args);
		}

		::System::Void _OnUIOpen_b__21_1(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER__ONUIOPEN_B__21_1_OFFSET))(this, args);
		}

		::System::Void _RefreshState_b__35_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER__REFRESHSTATE_B__35_0_OFFSET))(this);
		}

		::System::Void _RefreshState_b__35_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER__REFRESHSTATE_B__35_1_OFFSET))(this);
		}

		::System::Void _RefreshState_b__35_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER__REFRESHSTATE_B__35_2_OFFSET))(this);
		}

		::System::Void _RefreshState_b__35_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER__REFRESHSTATE_B__35_3_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
