#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_0F81C900BF7F52E0_4;
class Class_2_DA8BF519212BAE65;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIABYSSTASKPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xA507350)
#define MOLEMOLE_UIABYSSTASKPAGECONTROLLER_ONCLOSEBTNCLICK_OFFSET UNITYSDK_OFFSET(0xA507F30)
#define MOLEMOLE_UIABYSSTASKPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA507360)
#define MOLEMOLE_UIABYSSTASKPAGECONTROLLER_ONREWARDBTNCLICK_OFFSET UNITYSDK_OFFSET(0xA507FA0)
#define MOLEMOLE_UIABYSSTASKPAGECONTROLLER_ONTASKCHANGEHANDLE_OFFSET UNITYSDK_OFFSET(0xA507950)
#define MOLEMOLE_UIABYSSTASKPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA508110)
#define MOLEMOLE_UIABYSSTASKPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA507400)
#define MOLEMOLE_UIABYSSTASKPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA5077A0)
#define MOLEMOLE_UIABYSSTASKPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA5081A0)
#define MOLEMOLE_UIABYSSTASKPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA5081B0)
#define MOLEMOLE_UIABYSSTASKPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA508220)
#define MOLEMOLE_UIABYSSTASKPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA508230)
#define MOLEMOLE_UIABYSSTASKPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA508240)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssTaskPageController_TypeDefinitionIndex = 78704;

	class UIAbyssTaskPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_0F81C900BF7F52E0_4* _view; // 0x2F8
		::Class_2_DA8BF519212BAE65* _abyssModel; // 0x300
		::System::Int32 _currentAbyssGroup; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTASKPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTASKPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTASKPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTASKPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTASKPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCloseBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTASKPAGECONTROLLER_ONCLOSEBTNCLICK_OFFSET))(this);
		}

		::System::Void OnRewardBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTASKPAGECONTROLLER_ONREWARDBTNCLICK_OFFSET))(this);
		}

		::System::Void OnTaskChangeHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTASKPAGECONTROLLER_ONTASKCHANGEHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTASKPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTASKPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTASKPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTASKPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTASKPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
