#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/MoleMole/UIYorozuyaVideoInfoStoryPageController___c__DisplayClass10_0.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7ECB9691B142D586;
class Class_1_8B664C71B784890D;
class Class_2_0A55B5A82A61DAFA_1;
class Class_2_33EA27A25F076E07;
class Class_2_61AC41B6DCFBC671;
class Class_2_79F6D62CE30E3F8E_105;
class Class_2_A8F5ABF31E066ED4;
class Class_2_D6F9B792012303A1;
class Class_2_DBD69E52FAE36934;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralBottomRewardInfoWidgetController; }
namespace MoleMole { class UIGeneralPopUpArrowWidgetController; }
namespace MoleMole { class UIMainStoryRow03ChildWindowController; }
namespace MoleMole { class UITapesGroup3DModelController; }
namespace MoleMole::Config { class UIAnimDelayPara; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class RawImage; }

#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_GETYOROZUYAVIDEOURL_OFFSET UNITYSDK_OFFSET(0x9399890)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_GET_ISSHOW2DUI_OFFSET UNITYSDK_OFFSET(0x939A0F0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x9396610)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9396C10)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9396FC0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9396620)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_OVERRIDELOOPTEXT_OFFSET UNITYSDK_OFFSET(0x93994C0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_PLAYMAPLOGO_OFFSET UNITYSDK_OFFSET(0x9399F90)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_REFRESHPROGRESS_OFFSET UNITYSDK_OFFSET(0x93988E0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_REFRESHRECOMMENDEDHITTYPES_OFFSET UNITYSDK_OFFSET(0x9398CD0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_REFRESHVIDEOVIEW_OFFSET UNITYSDK_OFFSET(0x9399C60)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_SETCOMPLEXITYINFO_OFFSET UNITYSDK_OFFSET(0x9398130)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_SETLEVELINFO_OFFSET UNITYSDK_OFFSET(0x9399220)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_SETNOISE_OFFSET UNITYSDK_OFFSET(0x9396D20)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_SETVIDEINFO_OFFSET UNITYSDK_OFFSET(0x9398460)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_SET_ISSHOW2DUI_OFFSET UNITYSDK_OFFSET(0x939A0E0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_UPDATELEFTVIEW_OFFSET UNITYSDK_OFFSET(0x93972C0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x939A100)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER__REFRESHVIDEOVIEW_B__15_0_OFFSET UNITYSDK_OFFSET(0x939A1D0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER__SETCOMPLEXITYINFO_G__SETTIMECOST_10_0_OFFSET UNITYSDK_OFFSET(0x9399760)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER__SETVIDEINFO_B__11_0_OFFSET UNITYSDK_OFFSET(0x939A190)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER__VIDEOPLAYER_PREPARECOMPLETED_OFFSET UNITYSDK_OFFSET(0x9396CB0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x939A1E0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x939A250)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x939A2D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaVideoInfoStoryPageController_TypeDefinitionIndex = 48123;

	class UIYorozuyaVideoInfoStoryPageController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 MAX_RECOMMENDEDHITTYPES_COUNT = 0x2; // 0x0
		::Class_2_79F6D62CE30E3F8E_105* _view; // 0x2A0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* lastSelectVideoDir; // 0x2A8
		::System::Boolean _isLevelFadeIn; // 0x2B0
		::System::Boolean _isMoving; // 0x2B1
		::System::Boolean isStartPerformFinish; // 0x2B2
		::System::Action* _startPerformFinishAction; // 0x2B8
		::MoleMole::Config::UIAnimDelayPara* _delayPara; // 0x2C0
		::MoleMole::UITapesGroup3DModelController* _tapesGroup; // 0x2C8
		::System::Int32 _curArchiveType; // 0x2D0
		::System::Int32 _curVHSTemplateID; // 0x2D4
		::Class_2_33EA27A25F076E07* _mainStoryModel; // 0x2D8
		::System::Single _dragBegTimeStamp; // 0x2E0
		::System::Single _dragEndTimeStamp; // 0x2E4
		::UnityEngine::Vector3 _dragBegPosition; // 0x2E8
		::UnityEngine::Vector3 _dragEndPosition; // 0x2F4
		::MoleMole::UIMainStoryRow03ChildWindowController* _selectRow; // 0x300
		::Class_1_7ECB9691B142D586* _playerHelper; // 0x308
		::UnityEngine::UI::RawImage* _videoRawImg; // 0x310
		::System::Int32 _curDiff; // 0x318
		::System::Boolean _isShow2DUI; // 0x31C
		::System::Single stickPressTimeCount; // 0x320
		::System::String* curVideoUrl; // 0x328
		::Class_2_D6F9B792012303A1* _fromBattleTaskCompletionSource; // 0x330
		::System::Boolean _showTapeDeckInfo; // 0x338
		::UnityEngine::RectTransform* _currentScrollToTarget; // 0x340
		::System::Boolean _needScrollToTarget; // 0x348
		::System::Boolean _personalWaitStartPerformFinish; // 0x349
		::System::Boolean _ignoreInProgressTips; // 0x34A
		::MoleMole::UIGeneralBottomRewardInfoWidgetController* _bottomRewardInfo; // 0x350
		::MoleMole::UIGeneralPopUpArrowWidgetController* _leftPopupArrowWidget; // 0x358
		::MoleMole::UIGeneralPopUpArrowWidgetController* _rightPopupArrowWidget; // 0x360
		::Class_1_8B664C71B784890D* _selectQuestInfo; // 0x368
		::Class_2_61AC41B6DCFBC671* questModel; // 0x370
		::Class_2_DBD69E52FAE36934* _yorozuyaModel; // 0x378
		::Il2CppArray<::Class_2_A8F5ABF31E066ED4*>* _rewardTypeIcons; // 0x380
		::Class_2_0A55B5A82A61DAFA_1* _selectQuestConfig; // 0x388
		::UnityEngine::Material* difficutyVideoMaterial; // 0x390
		::System::UInt32 leftVideoSoundPlayID; // 0x398
		::System::Boolean isOpenVideoPanel; // 0x39C
		::Foundation::AssetRequestHandle _aniCloneMatHandle; // 0x3A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void _videoPlayer_prepareCompleted(::Class_1_7ECB9691B142D586* source)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7ECB9691B142D586*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER__VIDEOPLAYER_PREPARECOMPLETED_OFFSET))(this, source);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void UpdateLeftView(::Class_2_0A55B5A82A61DAFA_1* _questConfig)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0A55B5A82A61DAFA_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_UPDATELEFTVIEW_OFFSET))(this, _questConfig);
		}

		::System::Void SetLevelInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_SETLEVELINFO_OFFSET))(this);
		}

		::System::Void OverrideLoopText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_OVERRIDELOOPTEXT_OFFSET))(this, text);
		}

		::System::Void SetComplexityInfo(::System::String* complexity)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_SETCOMPLEXITYINFO_OFFSET))(this, complexity);
		}

		::System::Void SetVideInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_SETVIDEINFO_OFFSET))(this);
		}

		::System::String* GetYorozuyaVideoUrl(::System::Int32 hollowConfigID)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_GETYOROZUYAVIDEOURL_OFFSET))(this, hollowConfigID);
		}

		::System::Void SetNoise()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_SETNOISE_OFFSET))(this);
		}

		::System::Void RefreshVideoView(::System::String* videoUrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_REFRESHVIDEOVIEW_OFFSET))(this, videoUrl);
		}

		::System::Void RefreshProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_REFRESHPROGRESS_OFFSET))(this);
		}

		::System::Void RefreshRecommendedHitTypes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_REFRESHRECOMMENDEDHITTYPES_OFFSET))(this);
		}

		::System::Void PlayMapLogo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_PLAYMAPLOGO_OFFSET))(this);
		}

		::System::Void set_IsShow2DUI(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_SET_ISSHOW2DUI_OFFSET))(this, value);
		}

		::System::Boolean get_IsShow2DUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_GET_ISSHOW2DUI_OFFSET))(this);
		}

		static ::System::Void _SetComplexityInfo_g__SetTimeCost_10_0(::System::Int32 c, ::MoleMole::UIYorozuyaVideoInfoStoryPageController___c__DisplayClass10_0& a2)
		{
			return ((::System::Void(*)(::System::Int32, ::MoleMole::UIYorozuyaVideoInfoStoryPageController___c__DisplayClass10_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER__SETCOMPLEXITYINFO_G__SETTIMECOST_10_0_OFFSET))(c, a2);
		}

		::System::Void _SetVideInfo_b__11_0(::Class_1_7ECB9691B142D586* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7ECB9691B142D586*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER__SETVIDEINFO_B__11_0_OFFSET))(this, vp);
		}

		::System::Void _RefreshVideoView_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER__REFRESHVIDEOVIEW_B__15_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
