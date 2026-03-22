#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205E43D40B9E7AEA.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_7ECB9691B142D586;
class Class_2_79F6D62CE30E3F8E_87;
class Class_2_D665932EA6EA9262;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIVideoWidgetController; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_BINDEVENT_OFFSET UNITYSDK_OFFSET(0xA33FCA0)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_CHECCKSELECT_OFFSET UNITYSDK_OFFSET(0xA340460)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0xA33F380)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0xA33F430)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xA33F370)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONCONFRIMMAN_OFFSET UNITYSDK_OFFSET(0xA33F950)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONCONFRIMWOMAN_OFFSET UNITYSDK_OFFSET(0xA340730)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA33F390)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xA33F560)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA3402D0)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA33FA50)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA33F440)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_OPENINPUTNAMEVIEW_OFFSET UNITYSDK_OFFSET(0xA3407C0)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_PLAYSPLITVIDEO_OFFSET UNITYSDK_OFFSET(0xA33F760)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_RESETCLICKSTATE_OFFSET UNITYSDK_OFFSET(0xA3408E0)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_SETCONFIG_OFFSET UNITYSDK_OFFSET(0xA33F9E0)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_SHOWROLENPCNAME_OFFSET UNITYSDK_OFFSET(0xA340040)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA340970)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER__PLAYSPLITVIDEO_B__10_1_OFFSET UNITYSDK_OFFSET(0xA340AC0)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER__PLAYSPLITVIDEO_G__ONVIDEOSTART_10_0_OFFSET UNITYSDK_OFFSET(0xA340A20)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA340B30)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xA340BA0)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA340BB0)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA340BC0)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA340BD0)

namespace MoleMole
{
	inline static constexpr unsigned int UICreateRolePageController_TypeDefinitionIndex = 61705;

	class UICreateRolePageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* VideoBG; // 0x0
		// static const ::System::String* OPEN_FADEIN; // 0x0
		// static const ::System::String* CLOSE_FADEOUT; // 0x0
		// static const ::System::Int32 MAX_VIDEO_COUNT = 0x2; // 0x0
		::Class_2_79F6D62CE30E3F8E_87* _view; // 0x2F8
		::System::Collections::Generic::List_1<::System::Object*>* options; // 0x300
		::System::Boolean _isInputName; // 0x308
		::System::String* _inputName; // 0x310
		::System::Int32 _curStartVideo; // 0x318
		::MoleMole::UIVideoWidgetController* fullScreen; // 0x320
		::System::Boolean isClickSelect; // 0x328
		::Class_2_D665932EA6EA9262* _procedureConfig; // 0x330
		::System::Int32 _selectTag; // 0x338
		::System::Int32 _beforeSelect; // 0x33C
		::Class_1_7ECB9691B142D586* rightVideo; // 0x340
		::Class_1_7ECB9691B142D586* leftVideo; // 0x348
		::System::String* left_url; // 0x350
		::System::String* right_url; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::Enum_3_205E43D40B9E7AEA get_MessageMatchPage()
		{
			return ((::Enum_3_205E43D40B9E7AEA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONSHOW_OFFSET))(this, openCtrlContext);
		}

		::System::Void PlaySplitVideo(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_PLAYSPLITVIDEO_OFFSET))(this, url);
		}

		::System::Void SetConfig(::Class_2_D665932EA6EA9262* config)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D665932EA6EA9262*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_SETCONFIG_OFFSET))(this, config);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ChecckSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_CHECCKSELECT_OFFSET))(this);
		}

		::System::Void ShowRoleNPCName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_SHOWROLENPCNAME_OFFSET))(this);
		}

		::System::Void OnConfrimMan()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONCONFRIMMAN_OFFSET))(this);
		}

		::System::Void OnConfrimWoman()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONCONFRIMWOMAN_OFFSET))(this);
		}

		::System::Void OpenInputNameView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_OPENINPUTNAMEVIEW_OFFSET))(this);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_BINDEVENT_OFFSET))(this);
		}

		::System::Void ResetClickState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_RESETCLICKSTATE_OFFSET))(this);
		}

		::System::Void _PlaySplitVideo_g__OnVideoStart_10_0(::Class_1_7ECB9691B142D586* videoPlayerHelper)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7ECB9691B142D586*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER__PLAYSPLITVIDEO_G__ONVIDEOSTART_10_0_OFFSET))(this, videoPlayerHelper);
		}

		::System::Void _PlaySplitVideo_b__10_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER__PLAYSPLITVIDEO_B__10_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
