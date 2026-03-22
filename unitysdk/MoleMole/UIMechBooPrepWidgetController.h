#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_0_16E4307DCC419505_241;
class Class_2_79F6D62CE30E3F8E_53;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER_GETRANKRARITYICONPATH_OFFSET UNITYSDK_OFFSET(0x9E7F000)
#define MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER_ISCLOSETORESETTIME_OFFSET UNITYSDK_OFFSET(0x9E7FFE0)
#define MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9E7EE80)
#define MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9E7EF20)
#define MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9E7ED30)
#define MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x9E7EDD0)
#define MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x9E7F1E0)
#define MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9E801E0)
#define MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9E80210)
#define MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9E80280)
#define MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9E80300)
#define MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x9E80360)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooPrepWidgetController_TypeDefinitionIndex = 41298;

	class UIMechBooPrepWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_53* _view; // 0x2A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Foundation::AssetPath GetRankRarityIconPath(::System::Int32 rank)
		{
			return ((::Foundation::AssetPath(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER_GETRANKRARITYICONPATH_OFFSET))(this, rank);
		}

		::System::Void RefreshView(::Class_0_16E4307DCC419505_241* levelInfo, ::System::Action_1<::Class_0_16E4307DCC419505_241*>* onClickScriptBtn)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_241*, ::System::Action_1<::Class_0_16E4307DCC419505_241*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, levelInfo, onClickScriptBtn);
		}

		::System::Boolean IsCloseToResetTime(::System::Int64 unlockTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER_ISCLOSETORESETTIME_OFFSET))(this, unlockTime);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
