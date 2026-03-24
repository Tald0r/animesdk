#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_794BA983EDDBCFDE_Class_1_40F0860CEB67D2B1;
class Class_2_60DDD9C206686F44;
class Class_2_D4013B1655644290;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_GETBUTTON_OFFSET UNITYSDK_OFFSET(0xADFF3D0)
#define MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xADFEE70)
#define MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_ONCLICKMSG_OFFSET UNITYSDK_OFFSET(0xADFF620)
#define MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xADFF440)
#define MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0xADFF4E0)
#define MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xADFEFE0)
#define MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xADFF590)
#define MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xADFEE80)
#define MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_SHOWAVATAROPENMESSAGE_OFFSET UNITYSDK_OFFSET(0xADFF7B0)
#define MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xADFFB70)
#define MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xADFFB80)
#define MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0xADFFBF0)
#define MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xADFFC50)
#define MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xADFFC60)
#define MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xADFFC70)

namespace MoleMole
{
	inline static constexpr unsigned int UIMessageChildWindowController_TypeDefinitionIndex = 62009;

	class UIMessageChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_D4013B1655644290* _view; // 0x2F8
		::System::Single _titleWidth; // 0x300
		::System::Collections::Generic::List_1<::Class_1_794BA983EDDBCFDE_Class_1_40F0860CEB67D2B1*>* _curMessageUsers; // 0x308
		::System::Boolean newBie; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_ONSHOW_OFFSET))(this, openCtrlContext);
		}

		::Class_2_60DDD9C206686F44* GetButton()
		{
			return ((::Class_2_60DDD9C206686F44*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_GETBUTTON_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnClickMsg()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_ONCLICKMSG_OFFSET))(this);
		}

		::System::Void ShowAvatarOpenMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_SHOWAVATAROPENMESSAGE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
