#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_52BF5A8E97668B1D_10;
namespace MoleMole { class UIControlReference; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER_BINDEVENT_OFFSET UNITYSDK_OFFSET(0xAF3ABF0)
#define MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAF3AD60)
#define MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER_ONMAINBTNPRESS_OFFSET UNITYSDK_OFFSET(0xAF3AEE0)
#define MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAF3AE00)
#define MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAF3AB40)
#define MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xAF3B060)
#define MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0xAF3AF90)
#define MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAF3B0C0)
#define MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAF3B0F0)
#define MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAF3B160)
#define MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAF3B1E0)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupMonsterCardWidgetController_TypeDefinitionIndex = 69267;

	class UILineupMonsterCardWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_52BF5A8E97668B1D_10* _view; // 0x2A0
		::System::Action_1<::System::Int32>* onBtnClick; // 0x2A8
		::System::Int32 slotId; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER_BINDEVENT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnMainBtnPress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER_ONMAINBTNPRESS_OFFSET))(this);
		}

		::System::Void SetData(::System::Int32 inSlotId, ::System::Action_1<::System::Int32>* onClickCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER_SETDATA_OFFSET))(this, inSlotId, onClickCallback);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
