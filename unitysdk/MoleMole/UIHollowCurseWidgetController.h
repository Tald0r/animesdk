#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_7D7E4C0BD4076E2D;
namespace MoleMole { class UIControlReference; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA193780)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA193820)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA1936E0)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER_PLAYEND_OFFSET UNITYSDK_OFFSET(0xA193E00)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER_PLAYSTART_OFFSET UNITYSDK_OFFSET(0xA193900)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER_RESETSTATE_OFFSET UNITYSDK_OFFSET(0xA193AF0)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA193ED0)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER__DELAY_OFFSET UNITYSDK_OFFSET(0xA193D60)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA193F80)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA193FF0)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA194070)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___DELAY_B__6_0_OFFSET UNITYSDK_OFFSET(0xA193F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCurseWidgetController_TypeDefinitionIndex = 41253;

	class UIHollowCurseWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_7D7E4C0BD4076E2D* _view; // 0x2A0
		::System::Collections::Generic::List_1<::Foundation::Coroutine::CoroutineHandle>* handles; // 0x2A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void PlayStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER_PLAYSTART_OFFSET))(this);
		}

		::System::Void PlayEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER_PLAYEND_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* _Delay()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER__DELAY_OFFSET))(this);
		}

		::System::Void ResetState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER_RESETSTATE_OFFSET))(this);
		}

		::System::Void __Delay_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___DELAY_B__6_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
