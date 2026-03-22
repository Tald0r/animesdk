#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/MultipleVideoPlayerManager_PlayParam.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_7ECB9691B142D586;
class Class_2_4213727AF74D4ECF;
namespace MoleMole { class MultipleVideoPlayerManager; }
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_GET_CURRENTVIDEOPLAYERHELPER_OFFSET UNITYSDK_OFFSET(0xB2DEC70)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0xB2DDA20)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_GET_ISPREPARED_OFFSET UNITYSDK_OFFSET(0xB2DEB90)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_GET_PERMANENT_OFFSET UNITYSDK_OFFSET(0xB2DDA30)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xB2DDA10)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_INITVIDEOPLAYER_1_OFFSET UNITYSDK_OFFSET(0xB2DE2E0)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_INITVIDEOPLAYER_2_OFFSET UNITYSDK_OFFSET(0xB2DE4C0)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_INITVIDEOPLAYER_OFFSET UNITYSDK_OFFSET(0xB2DE080)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB2DDDF0)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_ONFULLSCREENVIDEORAWIMAGEANIM_OFFSET UNITYSDK_OFFSET(0xB2DDD10)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xB2DDE90)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB2DDFF0)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB2DDA40)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_PLAYBYINDEX_OFFSET UNITYSDK_OFFSET(0xB2DEA70)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_PLAY_OFFSET UNITYSDK_OFFSET(0xB2DE680)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_SETALPHA_OFFSET UNITYSDK_OFFSET(0xB2DDC70)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_STOP_OFFSET UNITYSDK_OFFSET(0xB2DEB20)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_TRYPLAY_OFFSET UNITYSDK_OFFSET(0xB2DE700)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xB2DECF0)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB2DED70)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB2DED90)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xB2DED80)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB2DEE00)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB2DEE10)

namespace MoleMole
{
	inline static constexpr unsigned int UIFullScreenVideoV2PopWindowController_TypeDefinitionIndex = 44030;

	class UIFullScreenVideoV2PopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_4213727AF74D4ECF* _view; // 0x2F8
		::MoleMole::MultipleVideoPlayerManager* _multipleVideoPlayerManager; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Boolean get_Permanent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_GET_PERMANENT_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnFullScreenVideoRawImageAnim(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_ONFULLSCREENVIDEORAWIMAGEANIM_OFFSET))(this, obj);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitVideoPlayer(::System::String* relativeUrl, ::System::Boolean loop, ::System::Action_1<::Class_1_7ECB9691B142D586*>* onPrepare, ::System::Action_1<::Class_1_7ECB9691B142D586*>* onEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::Class_1_7ECB9691B142D586*>*, ::System::Action_1<::Class_1_7ECB9691B142D586*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_INITVIDEOPLAYER_OFFSET))(this, relativeUrl, loop, onPrepare, onEnd);
		}

		::System::Void InitVideoPlayer_1(::System::Collections::Generic::List_1<::MoleMole::MultipleVideoPlayerManager_PlayParam>* paramList, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>* onPrepare, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>* onEnd, ::System::Boolean onlyPrepare)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::MultipleVideoPlayerManager_PlayParam>*, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>*, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_INITVIDEOPLAYER_1_OFFSET))(this, paramList, onPrepare, onEnd, onlyPrepare);
		}

		::System::Void InitVideoPlayer_2(::System::String* videoGroupKey, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>* onPrepare, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>* onEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>*, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_INITVIDEOPLAYER_2_OFFSET))(this, videoGroupKey, onPrepare, onEnd);
		}

		::System::Void Play(::System::Action* onEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_PLAY_OFFSET))(this, onEnd);
		}

		::System::Void TryPlay(::System::Action* onEnd, ::System::Boolean& isPreparing, ::System::Action* prepareFinished)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean&, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_TRYPLAY_OFFSET))(this, onEnd, isPreparing, prepareFinished);
		}

		::System::Void PlayByIndex(::System::Int32 index, ::System::Boolean autoPlay, ::System::Action* onPlayNext, ::System::Action* onEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_PLAYBYINDEX_OFFSET))(this, index, autoPlay, onPlayNext, onEnd);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_STOP_OFFSET))(this);
		}

		::System::Void SetAlpha(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_SETALPHA_OFFSET))(this, v);
		}

		::System::Boolean get_IsPrePared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_GET_ISPREPARED_OFFSET))(this);
		}

		::Class_1_7ECB9691B142D586* get_CurrentVideoPlayerHelper()
		{
			return ((::Class_1_7ECB9691B142D586*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_GET_CURRENTVIDEOPLAYERHELPER_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
