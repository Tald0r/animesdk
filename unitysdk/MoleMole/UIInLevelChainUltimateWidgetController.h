#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_A859226CC8C47666;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER_GETSLOTCOLORBYINDEX_OFFSET UNITYSDK_OFFSET(0xB127F90)
#define MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER_GETTEAMINDEX_OFFSET UNITYSDK_OFFSET(0xB128230)
#define MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0xB127600)
#define MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB127730)
#define MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB1277D0)
#define MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB1274E0)
#define MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB127680)
#define MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER_PLAYFADEINANIM_OFFSET UNITYSDK_OFFSET(0xB1282A0)
#define MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER_PLAYFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0xB127980)
#define MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER_REFRESHROLEICONIMG_OFFSET UNITYSDK_OFFSET(0xB1285A0)
#define MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xB127B90)
#define MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xB1278B0)
#define MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB128870)
#define MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER__PLAYFADEOUTANIM_B__9_0_OFFSET UNITYSDK_OFFSET(0xB1288C0)
#define MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB128900)
#define MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB128970)
#define MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB1289F0)
#define MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB128A50)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelChainUltimateWidgetController_TypeDefinitionIndex = 45855;

	class UIInLevelChainUltimateWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_A859226CC8C47666* _view; // 0x2A0
		::System::Int32 _teamIndex; // 0x2A8
		::System::Boolean _isShow; // 0x2AC
		::Foundation::Coroutine::CoroutineHandle _fadeOutCoroutineHandle; // 0x2B0
		::System::Single _autoFadeOutTimer; // 0x2B4
		::System::String* _cachedIconPath; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Int32 teamIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, teamIndex);
		}

		::System::Int32 GetTeamIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER_GETTEAMINDEX_OFFSET))(this);
		}

		::System::Void PlayFadeInAnim(::MoleMole::Battle::Entity* caster)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER_PLAYFADEINANIM_OFFSET))(this, caster);
		}

		::System::Void PlayFadeOutAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER_PLAYFADEOUTANIM_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::UnityEngine::Color GetSlotColorByIndex(::System::Int32 teamIndex)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER_GETSLOTCOLORBYINDEX_OFFSET))(this, teamIndex);
		}

		::System::Void RefreshRoleIconImg(::MoleMole::Battle::Entity* caster)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER_REFRESHROLEICONIMG_OFFSET))(this, caster);
		}

		::System::Void _PlayFadeOutAnim_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER__PLAYFADEOUTANIM_B__9_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINULTIMATEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
