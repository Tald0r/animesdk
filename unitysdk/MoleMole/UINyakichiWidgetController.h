#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_79F6D62CE30E3F8E_66;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UINyakichiAchievementRowWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UINYAKICHIWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAF5BD40)
#define MOLEMOLE_UINYAKICHIWIDGETCONTROLLER_ONQUESTUPDATE_OFFSET UNITYSDK_OFFSET(0xAF5BEC0)
#define MOLEMOLE_UINYAKICHIWIDGETCONTROLLER_ONTABCLICK_OFFSET UNITYSDK_OFFSET(0xAF5C1D0)
#define MOLEMOLE_UINYAKICHIWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAF5BDE0)
#define MOLEMOLE_UINYAKICHIWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAF5B7E0)
#define MOLEMOLE_UINYAKICHIWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAF5B880)
#define MOLEMOLE_UINYAKICHIWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAF5C8E0)
#define MOLEMOLE_UINYAKICHIWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAF5C990)
#define MOLEMOLE_UINYAKICHIWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAF5CA00)
#define MOLEMOLE_UINYAKICHIWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAF5CA80)
#define MOLEMOLE_UINYAKICHIWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAF5CAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UINyakichiWidgetController_TypeDefinitionIndex = 43011;

	class UINyakichiWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_66* _view; // 0x2A0
		::System::Collections::Generic::List_1<::MoleMole::UINyakichiAchievementRowWidgetController*>* itemList; // 0x2A8
		::System::Int32 CurrentTabIndex; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnQuestUpdate(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIWIDGETCONTROLLER_ONQUESTUPDATE_OFFSET))(this, arg);
		}

		::System::Void OnTabClick(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIWIDGETCONTROLLER_ONTABCLICK_OFFSET))(this, index);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
