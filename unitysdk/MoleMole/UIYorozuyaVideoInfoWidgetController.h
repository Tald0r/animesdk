#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7ECB9691B142D586;
class Class_1_7F489DAFAFC6BD02;
class Class_1_8B664C71B784890D;
class Class_2_0A55B5A82A61DAFA_1;
class Class_2_208CC9941471731A_98;
class Class_2_61AC41B6DCFBC671;
class Class_2_79AE422BA06F6D26_96;
class Class_2_A8F5ABF31E066ED4;
class Class_2_DBD69E52FAE36934;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowTaskDialogPopWindowController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class RawImage; }

#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_CLOSEVIDEO_OFFSET UNITYSDK_OFFSET(0x7C6D2A0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_GETAUTOTIPDES_OFFSET UNITYSDK_OFFSET(0x7C6B1E0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_GETYOROZUYAVIDEOURL_OFFSET UNITYSDK_OFFSET(0x7C6CA10)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_ONAUTOBTNCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x7C68710)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7C68670)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x7C6DB60)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_ONPRESSUREBTNCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x7C68940)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7C6DD50)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7C67D40)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x7C685C0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_OVERRIDELOOPTEXT_OFFSET UNITYSDK_OFFSET(0x7C6D510)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_PLAYMAPLOGO_OFFSET UNITYSDK_OFFSET(0x7C6DA20)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_REFRESHAUTOPROGRESS_OFFSET UNITYSDK_OFFSET(0x7C6A990)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_REFRESHAUTOVIEW_OFFSET UNITYSDK_OFFSET(0x7C6A5C0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_SETAUTOTIPSSTATE_OFFSET UNITYSDK_OFFSET(0x7C6B850)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_SETLEVELINFO_OFFSET UNITYSDK_OFFSET(0x7C690C0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_SETLEVEL_OFFSET UNITYSDK_OFFSET(0x7C6CFC0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_SETLOGOINFO_OFFSET UNITYSDK_OFFSET(0x7C69830)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_SETNOISE_OFFSET UNITYSDK_OFFSET(0x7C6D580)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_SETPRESSURECONSOLEBTNACTIVE_OFFSET UNITYSDK_OFFSET(0x7C6C890)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_SETPRESSURECONSOLEBTNKEYACTIVE_OFFSET UNITYSDK_OFFSET(0x7C6C920)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0x7C699E0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_SETTIMECOST_OFFSET UNITYSDK_OFFSET(0x7C6CE30)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_SETVIDEINFO_OFFSET UNITYSDK_OFFSET(0x7C69360)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_UPDATELEFTVIEW_OFFSET UNITYSDK_OFFSET(0x7C68C30)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x7C6A8F0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x7C6E0F0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER__CLOSEVIDEO_B__29_0_OFFSET UNITYSDK_OFFSET(0x7C6E2D0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x7C6E050)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER__SETAUTOTIPSSTATE_B__14_0_OFFSET UNITYSDK_OFFSET(0x7C6E130)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER__SETAUTOTIPSSTATE_B__14_1_OFFSET UNITYSDK_OFFSET(0x7C6E240)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER__SETAUTOTIPSSTATE_B__14_2_OFFSET UNITYSDK_OFFSET(0x7C6E1F0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER__SETVIDEINFO_B__21_0_OFFSET UNITYSDK_OFFSET(0x7C6E290)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7C6E300)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x7C6E370)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7C6E3D0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7C6E450)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x7C6E4B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaVideoInfoWidgetController_TypeDefinitionIndex = 53654;

	class UIYorozuyaVideoInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_DEFAULT_NEEDLE_ANGLE()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(UIYorozuyaVideoInfoWidgetController_TypeDefinitionIndex)->GetStaticField(0x10CE0);
		}
		// static const ::System::String* autoTipFadeIn; // 0x0
		// static const ::System::String* autoTipFadeOut; // 0x0
		// static const ::System::Int32 MAX_RECOMMENDEDHITTYPES_COUNT = 0x2; // 0x0
		// static const ::System::Int32 MAX_HOLLOW_ABILITY_TAGS_COUNT = 0x3; // 0x0
		::Class_2_79AE422BA06F6D26_96* _view; // 0x2A0
		::System::Single lastTime; // 0x2A8
		::Foundation::Coroutine::CoroutineHandle _autoTipsHandle; // 0x2AC
		::System::Single autoTipFadeOutLen; // 0x2B0
		::System::Int32 hangState; // 0x2B4
		::System::Collections::Generic::List_1<::Class_1_7F489DAFAFC6BD02*>* challInfoList; // 0x2B8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* lastSelectVideoDir; // 0x2C0
		::UnityEngine::UI::RawImage* _videoRawImg; // 0x2C8
		::Foundation::AssetRequestHandle _videoRequest; // 0x2D0
		::Class_1_7ECB9691B142D586* _playerHelper; // 0x2F0
		::Il2CppArray<::Class_2_A8F5ABF31E066ED4*>* _rewardTypeIcons; // 0x2F8
		::Class_2_0A55B5A82A61DAFA_1* _selectQuestConfig; // 0x300
		::Class_2_208CC9941471731A_98* _selectHollowExcelConfig; // 0x308
		::Class_1_8B664C71B784890D* _selectQuestInfo; // 0x310
		::Class_2_61AC41B6DCFBC671* questModel; // 0x318
		::Class_2_DBD69E52FAE36934* _yorozuyaModel; // 0x320
		::System::Boolean isOpenVideoPanel; // 0x328
		::System::UInt32 leftVideoSoundPlayID; // 0x32C
		::MoleMole::UIHollowTaskDialogPopWindowController* _taskDialog; // 0x330
		::UnityEngine::Material* difficutyVideoMaterial; // 0x338
		::Foundation::AssetRequestHandle _aniCloneMatHandle; // 0x340
		::System::String* lastNeedleType; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnAutoBtnClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_ONAUTOBTNCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnPressureBtnClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_ONPRESSUREBTNCLICKHANDLE_OFFSET))(this);
		}

		::System::Void UpdateLeftView(::Class_2_0A55B5A82A61DAFA_1* _questConfig)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0A55B5A82A61DAFA_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_UPDATELEFTVIEW_OFFSET))(this, _questConfig);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void RefreshAutoView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_REFRESHAUTOVIEW_OFFSET))(this);
		}

		::System::Void SetAutoTipsState(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_SETAUTOTIPSSTATE_OFFSET))(this, isShow);
		}

		::System::Boolean GetAutoTipDes(::System::String*& des)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_GETAUTOTIPDES_OFFSET))(this, des);
		}

		::System::Void RefreshAutoProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_REFRESHAUTOPROGRESS_OFFSET))(this);
		}

		::System::Void SetPressureConsoleBtnActive(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_SETPRESSURECONSOLEBTNACTIVE_OFFSET))(this, enable);
		}

		::System::Void SetPressureConsoleBtnKeyActive(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_SETPRESSURECONSOLEBTNKEYACTIVE_OFFSET))(this, enable);
		}

		::System::Void SetVideInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_SETVIDEINFO_OFFSET))(this);
		}

		::System::String* GetYorozuyaVideoUrl(::System::Int32 hollowConfigID)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_GETYOROZUYAVIDEOURL_OFFSET))(this, hollowConfigID);
		}

		::System::Void SetProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_SETPROGRESS_OFFSET))(this);
		}

		::System::Void SetTimeCost(::System::Int32 c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_SETTIMECOST_OFFSET))(this, c);
		}

		::System::Void SetLogoInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_SETLOGOINFO_OFFSET))(this);
		}

		::System::Void SetLevelInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_SETLEVELINFO_OFFSET))(this);
		}

		::System::Void SetLevel(::System::Int32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_SETLEVEL_OFFSET))(this, level);
		}

		::System::Void CloseVideo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_CLOSEVIDEO_OFFSET))(this);
		}

		::System::Void OverrideLoopText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_OVERRIDELOOPTEXT_OFFSET))(this, text);
		}

		::System::Void SetNoise()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_SETNOISE_OFFSET))(this);
		}

		::System::Void PlayMapLogo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_PLAYMAPLOGO_OFFSET))(this);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _SetAutoTipsState_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER__SETAUTOTIPSSTATE_B__14_0_OFFSET))(this);
		}

		::System::Void _SetAutoTipsState_b__14_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER__SETAUTOTIPSSTATE_B__14_2_OFFSET))(this);
		}

		::System::Void _SetAutoTipsState_b__14_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER__SETAUTOTIPSSTATE_B__14_1_OFFSET))(this);
		}

		::System::Void _SetVideInfo_b__21_0(::Class_1_7ECB9691B142D586* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7ECB9691B142D586*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER__SETVIDEINFO_B__21_0_OFFSET))(this, vp);
		}

		::System::Void _CloseVideo_b__29_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER__CLOSEVIDEO_B__29_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
