#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_79F6D62CE30E3F8E_17;
class Class_2_C04F87C132BA9A06;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralIconCardRarityWidgetController; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCAAA9D0)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_ONFOCUSSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xCAAA5C0)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_ONITEMCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0xCAAA840)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xCAAA7A0)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCAABDA0)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCAAA2C0)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xCAAA920)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_PLAYCHANGEEQUIPANI_OFFSET UNITYSDK_OFFSET(0xCAAB870)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_REFRESHDRESSSTATE_OFFSET UNITYSDK_OFFSET(0xCAAB6C0)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xCAAAD10)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_SETAVATARDATA_OFFSET UNITYSDK_OFFSET(0xCAAAC00)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_SETROBOTDATA_OFFSET UNITYSDK_OFFSET(0xCAABC20)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_SETSELECTALPHA_OFFSET UNITYSDK_OFFSET(0xCAAA630)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_SETSELECTID_OFFSET UNITYSDK_OFFSET(0xCAABC90)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_SETSLOTDATA_OFFSET UNITYSDK_OFFSET(0xCAAAA70)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCAABE80)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER__PLAYCHANGEEQUIPANI_B__25_0_OFFSET UNITYSDK_OFFSET(0xCAABEB0)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER__PLAYCHANGEEQUIPANI_B__25_1_OFFSET UNITYSDK_OFFSET(0xCAABEC0)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCAABF20)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xCAABF90)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCAABFF0)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCAAC070)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xCAAC0D0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopEquipRowWidgetController_TypeDefinitionIndex = 38109;

	class UICoopEquipRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::String* IconFadeIn; // 0x0
		// static const ::System::String* IconFadeOut; // 0x0
		// static const ::System::String* IconSwitchFadeIn; // 0x0
		// static const ::System::String* IconSwitchFadeOut; // 0x0
		::Class_2_79F6D62CE30E3F8E_17* _view; // 0x2A0
		::Class_2_C04F87C132BA9A06* _coopModel; // 0x2A8
		::System::Int32 _slotID; // 0x2B0
		::System::Int32 _avatarID; // 0x2B4
		::System::Int32 _robotID; // 0x2B8
		::System::Action_1<::System::Int32>* _clickAction; // 0x2C0
		::System::Boolean _isUnlock; // 0x2C8
		::MoleMole::UIGeneralIconCardRarityWidgetController* _rarityWidget; // 0x2D0
		::Foundation::Coroutine::CoroutineHandle _fadeCoroutineHandle; // 0x2D8
		::System::Int32 _lastEquipID; // 0x2DC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnFocusStateChanged(::System::Boolean obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_ONFOCUSSTATECHANGED_OFFSET))(this, obj);
		}

		::System::Void SetSelectAlpha(::System::Boolean isFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_SETSELECTALPHA_OFFSET))(this, isFocus);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnItemClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_ONITEMCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void SetSlotData(::System::Int32 slotID, ::System::Action_1<::System::Int32>* clickAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_SETSLOTDATA_OFFSET))(this, slotID, clickAction);
		}

		::System::Void SetAvatarData(::System::Int32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_SETAVATARDATA_OFFSET))(this, avatarID);
		}

		::System::Void RefreshDressState(::System::Boolean withAni)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_REFRESHDRESSSTATE_OFFSET))(this, withAni);
		}

		::System::Void SetRobotData(::System::Int32 robotID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_SETROBOTDATA_OFFSET))(this, robotID);
		}

		::System::Single PlayChangeEquipAni()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_PLAYCHANGEEQUIPANI_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void SetSelectID(::System::Int32 selectID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_SETSELECTID_OFFSET))(this, selectID);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _PlayChangeEquipAni_b__25_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER__PLAYCHANGEEQUIPANI_B__25_0_OFFSET))(this);
		}

		::System::Void _PlayChangeEquipAni_b__25_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER__PLAYCHANGEEQUIPANI_B__25_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
