#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_9760011945436DFC_3;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }

#define MOLEMOLE_UIGENERALSUBTITLEPOPWINDOWCONTROLLER_GET_ISIGNOREINPUT_OFFSET UNITYSDK_OFFSET(0x9600700)
#define MOLEMOLE_UIGENERALSUBTITLEPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x96006F0)
#define MOLEMOLE_UIGENERALSUBTITLEPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9600710)
#define MOLEMOLE_UIGENERALSUBTITLEPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x96007B0)
#define MOLEMOLE_UIGENERALSUBTITLEPOPWINDOWCONTROLLER_SHOWDIALOGID_OFFSET UNITYSDK_OFFSET(0x9600840)
#define MOLEMOLE_UIGENERALSUBTITLEPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9600A60)
#define MOLEMOLE_UIGENERALSUBTITLEPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9600A70)
#define MOLEMOLE_UIGENERALSUBTITLEPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9600AE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralSubtitlePopWindowController_TypeDefinitionIndex = 70059;

	class UIGeneralSubtitlePopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_9760011945436DFC_3* _view; // 0x2F8
		::System::String* debugSubtitleKey; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLEPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLEPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsIgnoreInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLEPOPWINDOWCONTROLLER_GET_ISIGNOREINPUT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLEPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLEPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ShowDialogId(::System::String* subtitleKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLEPOPWINDOWCONTROLLER_SHOWDIALOGID_OFFSET))(this, subtitleKey);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLEPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLEPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
