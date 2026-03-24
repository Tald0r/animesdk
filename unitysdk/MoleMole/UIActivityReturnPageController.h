#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_7ECB9691B142D586;
class Class_1_FFD2BFBAA17829FB;
class Class_2_6DE5FBED45BCAC88;
class Class_2_79AE422BA06F6D26_163;
namespace MoleMole { class BackFlowWidget; }
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class UIActivityReturnGiftPopWindowController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_BINDBUTTONS_OFFSET UNITYSDK_OFFSET(0xCFFA3B0)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_CLICKINTERKNOTTOOL_OFFSET UNITYSDK_OFFSET(0xCFFAC10)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_CLICKPREVIEWTRIAL_OFFSET UNITYSDK_OFFSET(0xCFFD910)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_CREATETABWIDGET_OFFSET UNITYSDK_OFFSET(0xCFFE0D0)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0xCFFD440)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xCFFC720)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_HIDEALL_OFFSET UNITYSDK_OFFSET(0xCFFA570)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_INITRETURNOPENTYPE_OFFSET UNITYSDK_OFFSET(0xCFFD4B0)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_INITRETURNPAGEITEMLIST_OFFSET UNITYSDK_OFFSET(0xCFFCCC0)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_ONCLICKINFOBTN_OFFSET UNITYSDK_OFFSET(0xCFFAB10)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_ONCLICKMAINTAB_OFFSET UNITYSDK_OFFSET(0xCFFDA40)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCFFC730)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_ONINTROVIDEOERROR_OFFSET UNITYSDK_OFFSET(0xCFFB400)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_ONINTROVIDEOFINISHED_OFFSET UNITYSDK_OFFSET(0xCFFAEE0)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_ONOPENRETURNPAGE_OFFSET UNITYSDK_OFFSET(0xCFFD210)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_ONTRAILVIDEOERROR_OFFSET UNITYSDK_OFFSET(0xCFFC2D0)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_ONTRAILVIDEOFINISH_OFFSET UNITYSDK_OFFSET(0xCFFC4B0)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xCFFCF00)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCFFCE70)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCFFC7D0)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xCFFCF70)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_OPENSUBACTIVITYTYPEWIDGET_OFFSET UNITYSDK_OFFSET(0xCFFD790)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_OPNETABWIDGETBYACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0xCFFDBF0)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_PLAYINTROVIDEOAUDIO_OFFSET UNITYSDK_OFFSET(0xCFFB9D0)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_PLAYINTROVIDEO_1_OFFSET UNITYSDK_OFFSET(0xCFFAFE0)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_PLAYINTROVIDEO_OFFSET UNITYSDK_OFFSET(0xCFFADA0)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_PLAYTRAILVIDEOAUDIO_OFFSET UNITYSDK_OFFSET(0xCFFC5A0)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_PLAYTRAILVIDEO_OFFSET UNITYSDK_OFFSET(0xCFFBEE0)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_POPINTROONCEREWARDDAILOG_OFFSET UNITYSDK_OFFSET(0xCFFB490)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_STOPINTROVIDEOAUDIO_OFFSET UNITYSDK_OFFSET(0xCFFB6E0)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_STOPTRAILVIDEOAUDIO_OFFSET UNITYSDK_OFFSET(0xCFFC350)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCFFE680)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCFFE770)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xCFFE7E0)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCFFE7F0)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCFFE800)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xCFFE810)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityReturnPageController_TypeDefinitionIndex = 75736;

	class UIActivityReturnPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* IntroVideoKey; // 0x0
		::System::Boolean IsPlayingIntroVideo; // 0x2F8
		::System::Boolean isPlayingIntroAudio; // 0x2F9
		::System::UInt32 pendingAudio1; // 0x2FC
		::System::UInt32 pendingAudio2; // 0x300
		::Class_2_79AE422BA06F6D26_163* _view; // 0x308
		::MoleMole::UIActivityReturnGiftPopWindowController* pop; // 0x310
		::System::Collections::Generic::Dictionary_2<::Enum_3_01618AD0437C8486, ::MoleMole::BackFlowWidget*>* allBackFlowUI; // 0x318
		::System::Collections::Generic::List_1<::Class_1_FFD2BFBAA17829FB*>* showBackFlowUIList; // 0x320
		::Class_2_6DE5FBED45BCAC88* _backFlowModel; // 0x328
		::MoleMole::BackFlowWidget* current; // 0x330
		::MoleMole::IVideoPlayer* _videoPlayer; // 0x338
		::Foundation::AssetRequestHandle _videoRequest; // 0x340
		::Class_1_7ECB9691B142D586* _videoPlayerHelper; // 0x360
		::System::Boolean isPlayingAudio; // 0x368
		::System::UInt32 pendingAudioId; // 0x36C
		::System::Int32 selectIndex; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void BindButtons()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_BINDBUTTONS_OFFSET))(this);
		}

		::System::Void HideAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_HIDEALL_OFFSET))(this);
		}

		::System::Void OnClickInfoBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_ONCLICKINFOBTN_OFFSET))(this);
		}

		::System::Void ClickInterKnotTool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_CLICKINTERKNOTTOOL_OFFSET))(this);
		}

		::System::Void PlayIntroVideo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_PLAYINTROVIDEO_OFFSET))(this);
		}

		::System::Void PlayIntroVideo_1(::System::String* url, ::System::Action_1<::Class_1_7ECB9691B142D586*>* OnVideoFinished)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::Class_1_7ECB9691B142D586*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_PLAYINTROVIDEO_1_OFFSET))(this, url, OnVideoFinished);
		}

		::System::Void OnIntroVideoError(::MoleMole::IVideoPlayer* video, ::System::String* error_msg)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_ONINTROVIDEOERROR_OFFSET))(this, video, error_msg);
		}

		::System::Void OnIntroVideoFinished(::Class_1_7ECB9691B142D586* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7ECB9691B142D586*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_ONINTROVIDEOFINISHED_OFFSET))(this, vp);
		}

		::System::Void PopIntroOnceRewardDailog(::System::Boolean isAuto)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_POPINTROONCEREWARDDAILOG_OFFSET))(this, isAuto);
		}

		::System::Void PlayIntroVideoAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_PLAYINTROVIDEOAUDIO_OFFSET))(this);
		}

		::System::Void StopIntroVideoAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_STOPINTROVIDEOAUDIO_OFFSET))(this);
		}

		::System::Void PlayTrailVideo(::System::String* url, ::System::Action_1<::Class_1_7ECB9691B142D586*>* OnVideoFinished)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::Class_1_7ECB9691B142D586*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_PLAYTRAILVIDEO_OFFSET))(this, url, OnVideoFinished);
		}

		::System::Void OnTrailVideoError(::MoleMole::IVideoPlayer* video, ::System::String* error_msg)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_ONTRAILVIDEOERROR_OFFSET))(this, video, error_msg);
		}

		::System::Void OnTrailVideoFinish(::Class_1_7ECB9691B142D586* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7ECB9691B142D586*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_ONTRAILVIDEOFINISH_OFFSET))(this, vp);
		}

		::System::Void PlayTrailVideoAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_PLAYTRAILVIDEOAUDIO_OFFSET))(this);
		}

		::System::Void StopTrailVideoAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_STOPTRAILVIDEOAUDIO_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::Class_2_79AE422BA06F6D26_163* GetView()
		{
			return ((::Class_2_79AE422BA06F6D26_163*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void InitReturnPageItemList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_INITRETURNPAGEITEMLIST_OFFSET))(this);
		}

		::System::Void OnOpenReturnPage(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_ONOPENRETURNPAGE_OFFSET))(this, openCtrlContext);
		}

		::Enum_3_01618AD0437C8486 InitReturnOpenType()
		{
			return ((::Enum_3_01618AD0437C8486(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_INITRETURNOPENTYPE_OFFSET))(this);
		}

		::System::Void ClickPreviewTrial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_CLICKPREVIEWTRIAL_OFFSET))(this);
		}

		::System::Void OnClickMainTab(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_ONCLICKMAINTAB_OFFSET))(this, index);
		}

		::Class_1_FFD2BFBAA17829FB* OpenSubActivityTypeWidget(::Enum_3_01618AD0437C8486 subActivityType)
		{
			return ((::Class_1_FFD2BFBAA17829FB*(*)(::PVOID, ::Enum_3_01618AD0437C8486))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_OPENSUBACTIVITYTYPEWIDGET_OFFSET))(this, subActivityType);
		}

		::System::Void OpneTabWidgetByActivityData(::Class_1_FFD2BFBAA17829FB* subActivityData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FFD2BFBAA17829FB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_OPNETABWIDGETBYACTIVITYDATA_OFFSET))(this, subActivityData);
		}

		::MoleMole::BackFlowWidget* CreateTabWidget(::Enum_3_01618AD0437C8486 backFlowType, ::MoleMole::UIControllerContextBase* context)
		{
			return ((::MoleMole::BackFlowWidget*(*)(::PVOID, ::Enum_3_01618AD0437C8486, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER_CREATETABWIDGET_OFFSET))(this, backFlowType, context);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
