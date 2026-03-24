#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_79F6D62CE30E3F8E_97;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8734950)
#define MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x87349F0)
#define MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x87346A0)
#define MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x87348A0)
#define MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER_REFRESHCONTRIBUTION_OFFSET UNITYSDK_OFFSET(0x87352B0)
#define MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER_REFRESHTEAM_OFFSET UNITYSDK_OFFSET(0x87353E0)
#define MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x8734BB0)
#define MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER_SETAVATARHPPERCENT_OFFSET UNITYSDK_OFFSET(0x87358E0)
#define MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER_SETCONTRIBUTIONTEXTSTATE_OFFSET UNITYSDK_OFFSET(0x8735BE0)
#define MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x8735840)
#define MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER_SETLIGHTERSUPPORT_OFFSET UNITYSDK_OFFSET(0x8735AA0)
#define MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER_SETLIKE_OFFSET UNITYSDK_OFFSET(0x8735780)
#define MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER_SETMVPIMAGESTATE_OFFSET UNITYSDK_OFFSET(0x8735C70)
#define MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8735D80)
#define MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER__GETROLEICONPATH_OFFSET UNITYSDK_OFFSET(0x8735200)
#define MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8735DB0)
#define MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8735E20)
#define MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8735EA0)
#define MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8735F00)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowResultRoleRowWidgetController_TypeDefinitionIndex = 72863;

	class UIHollowResultRoleRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_97* _view; // 0x2A0
		::UnityEngine::Material* hpMaterial; // 0x2A8
		::System::Int32 contribution; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Refresh(::System::Int32 avatarid, ::System::Int32 Contribution)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER_REFRESH_OFFSET))(this, avatarid, Contribution);
		}

		::System::Void RefreshContribution(::System::Int32 contribution, ::System::Boolean isMvp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER_REFRESHCONTRIBUTION_OFFSET))(this, contribution, isMvp);
		}

		::System::String* _GetRoleIconPath(::System::Int32 avatarid)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER__GETROLEICONPATH_OFFSET))(this, avatarid);
		}

		::System::Void RefreshTeam(::System::Int32 avatarId, ::System::Int32 teamIdx, ::System::Int32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER_REFRESHTEAM_OFFSET))(this, avatarId, teamIdx, level);
		}

		::System::Void SetLike()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER_SETLIKE_OFFSET))(this);
		}

		::System::Void SetEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER_SETEMPTY_OFFSET))(this);
		}

		::System::Void SetAvatarHpPercent(::System::Int32 percent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER_SETAVATARHPPERCENT_OFFSET))(this, percent);
		}

		::System::Void SetLighterSupport(::System::String* textKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER_SETLIGHTERSUPPORT_OFFSET))(this, textKey);
		}

		::System::Void SetContributionTextState(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER_SETCONTRIBUTIONTEXTSTATE_OFFSET))(this, state);
		}

		::System::Void SetMVPImageState(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER_SETMVPIMAGESTATE_OFFSET))(this, state);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTROLEROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
