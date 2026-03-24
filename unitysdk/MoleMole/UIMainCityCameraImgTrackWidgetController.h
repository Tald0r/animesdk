#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_D80ACD1ACA5CCC2A;
class Class_2_1A758423AB45D919;
namespace MoleMole { class UICameraTrackWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER_GETORCREATEWIDGET_OFFSET UNITYSDK_OFFSET(0x984D1A0)
#define MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER_ONCAMERACONTROLTIPSCLEARALL_OFFSET UNITYSDK_OFFSET(0x984D2F0)
#define MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER_ONCAMERACONTROLTIPSMODIFY_OFFSET UNITYSDK_OFFSET(0x984D380)
#define MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER_ONCAMERACONTROLTIPSREMOVE_OFFSET UNITYSDK_OFFSET(0x984D6B0)
#define MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x984C830)
#define MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x984C7C0)
#define MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x984C8D0)
#define MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x984C590)
#define MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x984C710)
#define MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER_REFRESHUI_OFFSET UNITYSDK_OFFSET(0x984C9B0)
#define MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x984D9E0)
#define MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x984DB40)
#define MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x984DBB0)
#define MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x984DBC0)
#define MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x984DC40)
#define MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x984DCA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityCameraImgTrackWidgetController_TypeDefinitionIndex = 63250;

	class UIMainCityCameraImgTrackWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_1A758423AB45D919* _view; // 0x2A0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UICameraTrackWidgetController*>* _showWidgets; // 0x2A8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UICameraTrackWidgetController*>* _removeWidgets; // 0x2B0
		::Class_1_D80ACD1ACA5CCC2A* _cameraControlTip; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER_REFRESHUI_OFFSET))(this);
		}

		::MoleMole::UICameraTrackWidgetController* GetOrCreateWidget()
		{
			return ((::MoleMole::UICameraTrackWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER_GETORCREATEWIDGET_OFFSET))(this);
		}

		::System::Void OnCameraControlTipsClearALl(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER_ONCAMERACONTROLTIPSCLEARALL_OFFSET))(this, obj);
		}

		::System::Void OnCameraControlTipsModify(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER_ONCAMERACONTROLTIPSMODIFY_OFFSET))(this, obj);
		}

		::System::Void OnCameraControlTipsRemove(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER_ONCAMERACONTROLTIPSREMOVE_OFFSET))(this, obj);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERAIMGTRACKWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
