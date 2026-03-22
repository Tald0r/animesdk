#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF.h"
#include "unitysdk/MoleMole/HudItemBaseController.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_291103C9AB9F509D;
namespace MoleMole { class MonoBuffIcon; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER_GETBUFFICONGAMEOBJECTBYBUFF_OFFSET UNITYSDK_OFFSET(0x8C748C0)
#define MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER_GETSTUNSTRING_OFFSET UNITYSDK_OFFSET(0x8C74B30)
#define MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8C742F0)
#define MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x8C74650)
#define MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8C746C0)
#define MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8C74390)
#define MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8C745A0)
#define MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER_REFRESHSHIELDARMORTEXT_OFFSET UNITYSDK_OFFSET(0x8C74AD0)
#define MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER_REORDERBUFFLIST_OFFSET UNITYSDK_OFFSET(0x8C74A70)
#define MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER_SETDISABLE_OFFSET UNITYSDK_OFFSET(0x8C747B0)
#define MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x8C74750)
#define MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8C74BD0)
#define MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8C74C30)
#define MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x8C74CA0)
#define MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8C74CB0)
#define MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8C74CC0)
#define MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8C74D30)
#define MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER___BASE_SETDISABLE_OFFSET UNITYSDK_OFFSET(0x8C74DA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelAvatarHudItemChildWindowController_TypeDefinitionIndex = 46061;

	class UIInLevelAvatarHudItemChildWindowController : public ::MoleMole::HudItemBaseController
	{
	public:
		// static const ::System::Int32 MAX_STUN_TEXT_VALUE = 0x63; // 0x0
		// static const ::System::Int32 MIN_STUN_TEXT_VALUE = 0x0; // 0x0
		// static const ::System::Int32 EMPTY_STUN_TEXT_VALUE = 0xFFFFFFFF; // 0x0
		::System::Collections::Generic::List_1<::MoleMole::MonoBuffIcon*>* _BuffIconMap; // 0x350
		::System::Collections::Generic::List_1<::MoleMole::MonoBuffIcon*>* _UnUsedBuffIcons; // 0x358
		::System::Boolean _isHeavyAttackShow; // 0x360
		::System::Single _shieldSliderOriginVal; // 0x364
		::System::Single _armorSliderOriginVal; // 0x368
		::System::Single _hpSliderOriginVal; // 0x36C
		::UnityEngine::Transform* _newHudFollowTrans; // 0x370
		::Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF _stunMixinState; // 0x378
		::UnityEngine::Color _stunRecoverTextColor; // 0x37C
		::UnityEngine::Color _stunNormalTextColor; // 0x38C
		::Class_2_291103C9AB9F509D* _view; // 0x3A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void SetDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER_SETDISABLE_OFFSET))(this);
		}

		::MoleMole::MonoBuffIcon* GetBuffIconGameObjectByBuff(::System::Int32 buffID)
		{
			return ((::MoleMole::MonoBuffIcon*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER_GETBUFFICONGAMEOBJECTBYBUFF_OFFSET))(this, buffID);
		}

		::System::Void ReOrderBuffList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER_REORDERBUFFLIST_OFFSET))(this);
		}

		::System::Void RefreshShieldArmorText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER_REFRESHSHIELDARMORTEXT_OFFSET))(this);
		}

		::System::String* GetStunString(::System::Int32 stunValue)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER_GETSTUNSTRING_OFFSET))(this, stunValue);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELAVATARHUDITEMCHILDWINDOWCONTROLLER___BASE_SETDISABLE_OFFSET))(this);
		}
	};
}
