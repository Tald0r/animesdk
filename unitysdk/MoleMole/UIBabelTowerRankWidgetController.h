#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_69CBB7FF0BE6A673_20;
namespace MoleMole { class BabelTowerRankConfig; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_GETRANKTRANSFORM_OFFSET UNITYSDK_OFFSET(0xDF06710)
#define MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_HIDEALL_OFFSET UNITYSDK_OFFSET(0xDF064E0)
#define MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xDF05DC0)
#define MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xDF05E60)
#define MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xDF05BC0)
#define MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xDF05D10)
#define MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_REFRESHRANKANIMATIONUP_OFFSET UNITYSDK_OFFSET(0xDF062D0)
#define MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_REFRESHRANKANIMATION_OFFSET UNITYSDK_OFFSET(0xDF05F40)
#define MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_REFRESHRANK_OFFSET UNITYSDK_OFFSET(0xDF06130)
#define MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDF068A0)
#define MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xDF068D0)
#define MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xDF06940)
#define MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xDF069C0)
#define MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xDF06A20)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabelTowerRankWidgetController_TypeDefinitionIndex = 50515;

	class UIBabelTowerRankWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_69CBB7FF0BE6A673_20* _view; // 0x2A0
		::MoleMole::BabelTowerRankConfig* config; // 0x2A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshRankAnimation(::System::Int32 lastRank, ::System::Int32 rank)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_REFRESHRANKANIMATION_OFFSET))(this, lastRank, rank);
		}

		::System::Single RefreshRankAnimationUp(::System::Int32 lastRank, ::System::Int32 rank)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_REFRESHRANKANIMATIONUP_OFFSET))(this, lastRank, rank);
		}

		::UnityEngine::Transform* GetRankTransform(::System::Int32 rank)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_GETRANKTRANSFORM_OFFSET))(this, rank);
		}

		::System::Void RefreshRank(::System::Int32 rank)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_REFRESHRANK_OFFSET))(this, rank);
		}

		::System::Void HideAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_HIDEALL_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
