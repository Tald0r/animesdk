#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_DD3DB71501D05A1E;
class Class_3_F29999C3DD3E09BA;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIDataFixGameWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine::UI { class RawImage; }

#define MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER_DORESET_OFFSET UNITYSDK_OFFSET(0xA34C470)
#define MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER_GET_RTIMG_OFFSET UNITYSDK_OFFSET(0xA34B3D0)
#define MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA34C290)
#define MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER_ONRESET_OFFSET UNITYSDK_OFFSET(0xA34C770)
#define MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xA34BEA0)
#define MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA34C330)
#define MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA34B400)
#define MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA34B6B0)
#define MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER_ONWIN_OFFSET UNITYSDK_OFFSET(0xA34C9D0)
#define MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER_RESETVIEW_OFFSET UNITYSDK_OFFSET(0xA34C810)
#define MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA34CC60)
#define MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER__DORESET_B__14_0_OFFSET UNITYSDK_OFFSET(0xA34CD00)
#define MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER__ONUIINIT_B__9_0_OFFSET UNITYSDK_OFFSET(0xA34CC90)
#define MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER__ONUIOPEN_B__10_0_OFFSET UNITYSDK_OFFSET(0xA34CCC0)
#define MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER__ONUIOPEN_B__10_1_OFFSET UNITYSDK_OFFSET(0xA34CCE0)
#define MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER__ONWIN_B__16_0_OFFSET UNITYSDK_OFFSET(0xA34CD30)
#define MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA34CDA0)
#define MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xA34CE10)
#define MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA34CE20)
#define MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA34CEA0)
#define MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA34CF00)

namespace MoleMole
{
	inline static constexpr unsigned int UIDataFixOuterRenderWidgetController_TypeDefinitionIndex = 58367;

	class UIDataFixOuterRenderWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::String* REFRESH_ANIM; // 0x0
		// static const ::System::String* WIN_ANIM; // 0x0
		::Class_2_DD3DB71501D05A1E* _view; // 0x2A0
		::Class_3_F29999C3DD3E09BA* _model; // 0x2A8
		::MoleMole::UIDataFixGameWidgetController* controlWidget; // 0x2B0
		::System::String* lastBGMSpecialState; // 0x2B8
		::System::String* _soundLastGameState; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::RawImage* get_RTImg()
		{
			return ((::UnityEngine::UI::RawImage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER_GET_RTIMG_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void DoReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER_DORESET_OFFSET))(this);
		}

		::System::Void ResetView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER_RESETVIEW_OFFSET))(this);
		}

		::System::Void OnWin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER_ONWIN_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* OnReset()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER_ONRESET_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER__ONUIINIT_B__9_0_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__10_0(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER__ONUIOPEN_B__10_0_OFFSET))(this, _);
		}

		::System::Void _OnUIOpen_b__10_1(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER__ONUIOPEN_B__10_1_OFFSET))(this, _);
		}

		::System::Void _DoReset_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER__DORESET_B__14_0_OFFSET))(this);
		}

		::System::Void _OnWin_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER__ONWIN_B__16_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
