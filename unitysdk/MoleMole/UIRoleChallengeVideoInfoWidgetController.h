#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7ECB9691B142D586;
class Class_1_7F489DAFAFC6BD02;
class Class_1_A047EA5169B6B30F;
class Class_2_0A55B5A82A61DAFA;
class Class_2_208CC9941471731A_261;
class Class_2_61AC41B6DCFBC671;
class Class_2_79AE422BA06F6D26_156;
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

#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_CLOSEVIDEO_OFFSET UNITYSDK_OFFSET(0x96EE2F0)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_GETYOROZUYAVIDEOURL_OFFSET UNITYSDK_OFFSET(0x96EDD90)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x96EC230)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x96EEBA0)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x96EEC70)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x96EC2D0)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x96EC6F0)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_OVERRIDELOOPTEXT_OFFSET UNITYSDK_OFFSET(0x96EE560)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_PLAYMAPLOGO_OFFSET UNITYSDK_OFFSET(0x96EEA60)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_SETLEVELINFO_OFFSET UNITYSDK_OFFSET(0x96ECC20)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_SETLOGOINFO_OFFSET UNITYSDK_OFFSET(0x96ED390)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_SETNOISE_OFFSET UNITYSDK_OFFSET(0x96EE5D0)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0x96ED540)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_SETTIMECOST_OFFSET UNITYSDK_OFFSET(0x96EE160)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_SETVIDEINFO_OFFSET UNITYSDK_OFFSET(0x96ECEC0)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_UPDATELEFTVIEW_OFFSET UNITYSDK_OFFSET(0x96EC7A0)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x96EF010)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER__CLOSEVIDEO_B__14_0_OFFSET UNITYSDK_OFFSET(0x96EF090)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x96EEF70)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER__SETVIDEINFO_B__7_0_OFFSET UNITYSDK_OFFSET(0x96EF050)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x96EF0C0)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x96EF130)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x96EF190)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x96EF210)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x96EF270)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleChallengeVideoInfoWidgetController_TypeDefinitionIndex = 51806;

	class UIRoleChallengeVideoInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_DEFAULT_NEEDLE_ANGLE()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(UIRoleChallengeVideoInfoWidgetController_TypeDefinitionIndex)->GetStaticField(0x116B0);
		}
		// static const ::System::Int32 MAX_RECOMMENDEDHITTYPES_COUNT = 0x2; // 0x0
		// static const ::System::Int32 MAX_HOLLOW_ABILITY_TAGS_COUNT = 0x3; // 0x0
		::Class_2_79AE422BA06F6D26_156* _view; // 0x2A0
		::System::Int32 hangState; // 0x2A8
		::System::Collections::Generic::List_1<::Class_1_7F489DAFAFC6BD02*>* challInfoList; // 0x2B0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* lastSelectVideoDir; // 0x2B8
		::UnityEngine::UI::RawImage* _videoRawImg; // 0x2C0
		::Foundation::AssetRequestHandle _videoRequest; // 0x2C8
		::Class_1_7ECB9691B142D586* _playerHelper; // 0x2E8
		::Il2CppArray<::Class_2_A8F5ABF31E066ED4*>* _rewardTypeIcons; // 0x2F0
		::Class_2_0A55B5A82A61DAFA* _selectQuestConfig; // 0x2F8
		::Class_2_208CC9941471731A_261* _selectHollowExcelConfig; // 0x300
		::Class_1_A047EA5169B6B30F* _selectQuestInfo; // 0x308
		::Class_2_61AC41B6DCFBC671* questModel; // 0x310
		::Class_2_DBD69E52FAE36934* _yorozuyaModel; // 0x318
		::System::Boolean isOpenVideoPanel; // 0x320
		::System::UInt32 leftVideoSoundPlayID; // 0x324
		::MoleMole::UIHollowTaskDialogPopWindowController* _taskDialog; // 0x328
		::UnityEngine::Material* difficutyVideoMaterial; // 0x330
		::Foundation::AssetRequestHandle _aniCloneMatHandle; // 0x338
		::System::String* lastNeedleType; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void UpdateLeftView(::Class_2_0A55B5A82A61DAFA* _questConfig)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0A55B5A82A61DAFA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_UPDATELEFTVIEW_OFFSET))(this, _questConfig);
		}

		::System::Void SetVideInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_SETVIDEINFO_OFFSET))(this);
		}

		::System::String* GetYorozuyaVideoUrl(::System::Int32 hollowConfigID)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_GETYOROZUYAVIDEOURL_OFFSET))(this, hollowConfigID);
		}

		::System::Void SetProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_SETPROGRESS_OFFSET))(this);
		}

		::System::Void SetTimeCost(::System::Int32 c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_SETTIMECOST_OFFSET))(this, c);
		}

		::System::Void SetLogoInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_SETLOGOINFO_OFFSET))(this);
		}

		::System::Void SetLevelInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_SETLEVELINFO_OFFSET))(this);
		}

		::System::Void CloseVideo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_CLOSEVIDEO_OFFSET))(this);
		}

		::System::Void OverrideLoopText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_OVERRIDELOOPTEXT_OFFSET))(this, text);
		}

		::System::Void SetNoise()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_SETNOISE_OFFSET))(this);
		}

		::System::Void PlayMapLogo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_PLAYMAPLOGO_OFFSET))(this);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _SetVideInfo_b__7_0(::Class_1_7ECB9691B142D586* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7ECB9691B142D586*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER__SETVIDEINFO_B__7_0_OFFSET))(this, vp);
		}

		::System::Void _CloseVideo_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER__CLOSEVIDEO_B__14_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
