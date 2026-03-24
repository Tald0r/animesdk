#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_789D157590CAB0D0;
class Class_3_4666E61F66433B1E_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x873CF20)
#define MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x873CF90)
#define MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x873D090)
#define MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER_UPDATEINROOMPLAYERLIST_OFFSET UNITYSDK_OFFSET(0x873D2F0)
#define MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x873D3C0)
#define MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x873D3F0)
#define MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x873D460)

namespace MoleMole
{
	inline static constexpr unsigned int UIInGamePlayerInviteWidgetController_TypeDefinitionIndex = 72063;

	class UIInGamePlayerInviteWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_789D157590CAB0D0* get__viewModel()
		{
			return ((::Class_2_789D157590CAB0D0*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void UpdateInRoomPlayerList(::System::Collections::Generic::List_1<::Class_3_4666E61F66433B1E_1*>* playerList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_4666E61F66433B1E_1*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER_UPDATEINROOMPLAYERLIST_OFFSET))(this, playerList);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
