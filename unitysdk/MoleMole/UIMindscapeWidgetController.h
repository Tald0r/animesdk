#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIMindscapeWidgetController_ECardClampType.h"
#include "unitysdk/MoleMole/UIMindscapeWidgetController_EGyroStickMergeType.h"
#include "unitysdk/MoleMole/UIMindscapeWidgetController_EGyroType.h"
#include "unitysdk/MoleMole/UIMindscapeWidgetController_EStickState.h"
#include "unitysdk/MoleMole/UIMindscapeWidgetController_EStickType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_3CDBAA6BC10A7F83;
class Class_1_5F780812A1FAD31A;
class Class_2_79AE422BA06F6D26_253;
class Class_2_D89CCC627A66D0AD;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace MoleMole { class UIMindscapeCutBgController; }
namespace MoleMole { class UIMindscapeSwitchBtnRowWidgetController; }
namespace MoleMole { class UIRoleChangeWidgetController; }
namespace MoleMole { class UIRoleInfoPageContext; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_CHANGETABSTATE_OFFSET UNITYSDK_OFFSET(0xA8350B0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_DORELEASEMINDSCAPECUTBG_OFFSET UNITYSDK_OFFSET(0xA837050)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_GETCANSHOWLENTICULAR_OFFSET UNITYSDK_OFFSET(0xA837610)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_GETDEFAULTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0xA836E20)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_GETLENTICULAROPEN_OFFSET UNITYSDK_OFFSET(0xA833740)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_GETPCLERPSPEED_OFFSET UNITYSDK_OFFSET(0xA834990)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_GET__CURINPUTVEC_OFFSET UNITYSDK_OFFSET(0xA831B60)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0xA8305F0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ISTRAININGROOM_OFFSET UNITYSDK_OFFSET(0xA831650)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONAVATARCHANGEHANDLE_OFFSET UNITYSDK_OFFSET(0xA835E40)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONBACKCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0xA830C20)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA831A40)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0xA834BE0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONGETITEMDURINGMINDSCAPE_OFFSET UNITYSDK_OFFSET(0xA838090)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0xA8315A0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xA831C10)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xA834AA0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONLENTICULARTOGGLEHANDLE_OFFSET UNITYSDK_OFFSET(0xA838AF0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xA831140)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONSWITCHBTNCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0xA8309B0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONTABCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0xA835010)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONTALENTUNLOCKOVERHANDLE_OFFSET UNITYSDK_OFFSET(0xA837150)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONTALENTUNOCKEND_OFFSET UNITYSDK_OFFSET(0xA837810)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xA830FD0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA838C90)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA830220)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA830CF0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_OPENGMLENTICULAR_OFFSET UNITYSDK_OFFSET(0xA830F30)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_PLAYMASKFADEIN_OFFSET UNITYSDK_OFFSET(0xA836070)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_PLAYVIEWFADEIN_OFFSET UNITYSDK_OFFSET(0xA8317B0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_PRESETBGTABSTATE_OFFSET UNITYSDK_OFFSET(0xA8355A0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_REFRESHBACKGROUND_OFFSET UNITYSDK_OFFSET(0xA836640)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_REFRESHLENTICULARTOGGLESTATE_OFFSET UNITYSDK_OFFSET(0xA837C40)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_REFRESHSWITCHINPUTKEY_OFFSET UNITYSDK_OFFSET(0xA834E90)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_REFRESHTABSTATE_OFFSET UNITYSDK_OFFSET(0xA8385F0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xA831440)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_RESETATTITUDECURRENTVEC_OFFSET UNITYSDK_OFFSET(0xA8337A0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_SETBGMODEL_OFFSET UNITYSDK_OFFSET(0xA8361C0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_SETCLOSEACTION_OFFSET UNITYSDK_OFFSET(0xA831AE0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_SETDEAULTSWITCHTAB_OFFSET UNITYSDK_OFFSET(0xA8382A0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_SETGYROSCOPEVEC_OFFSET UNITYSDK_OFFSET(0xA833810)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_SETLENTICULARTIPANI_OFFSET UNITYSDK_OFFSET(0xA835790)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_SETTOGGLEBTNSTATE_OFFSET UNITYSDK_OFFSET(0xA830B20)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_SET__CURINPUTVEC_OFFSET UNITYSDK_OFFSET(0xA831B70)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_UPDATELENTICULAR_OFFSET UNITYSDK_OFFSET(0xA834040)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA833C90)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA839320)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA8390B0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__DORELEASEMINDSCAPECUTBG_B__110_0_OFFSET UNITYSDK_OFFSET(0xA839660)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__ONBACKCLICKHANDLE_B__25_0_OFFSET UNITYSDK_OFFSET(0xA8393E0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__ONTALENTUNOCKEND_B__113_0_OFFSET UNITYSDK_OFFSET(0xA8397D0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__PLAYVIEWFADEIN_B__33_0_OFFSET UNITYSDK_OFFSET(0xA839400)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__SETLENTICULARTIPANI_B__104_0_OFFSET UNITYSDK_OFFSET(0xA8394C0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__SETLENTICULARTIPANI_B__104_1_OFFSET UNITYSDK_OFFSET(0xA8395C0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__SETLENTICULARTIPANI_B__104_2_OFFSET UNITYSDK_OFFSET(0xA839610)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA8397E0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0xA839850)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0xA839910)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xA839970)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xA8399A0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xA839A00)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xA839A70)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA839A80)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA839B00)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA839B60)

namespace MoleMole
{
	inline static constexpr unsigned int UIMindscapeWidgetController_TypeDefinitionIndex = 74106;

	class UIMindscapeWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::MoleMole::UIMindscapeWidgetController_EGyroStickMergeType* StaticGet_GyroStickMergeType()
		{
			return (::MoleMole::UIMindscapeWidgetController_EGyroStickMergeType*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xD930);
		}
		static ::UnityEngine::Vector2* StaticGet_PcDragSpeed()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xD934);
		}
		static ::System::Single* StaticGet_DampRate()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xD93C);
		}
		static ::System::Single* StaticGet_GyroscopeRateX()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xD940);
		}
		static ::System::Single* StaticGet_StickMoveThesholdSqr()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xD944);
		}
		static ::System::Single* StaticGet_GyroscopeSpeed()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xD948);
		}
		static ::MoleMole::UIMindscapeWidgetController_ECardClampType* StaticGet_CardClampType()
		{
			return (::MoleMole::UIMindscapeWidgetController_ECardClampType*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xD94C);
		}
		static ::MoleMole::UIMindscapeWidgetController_EStickState* StaticGet_StickState()
		{
			return (::MoleMole::UIMindscapeWidgetController_EStickState*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xD950);
		}
		static ::System::Single* StaticGet_PcLerpSpeedMax()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xD954);
		}
		static ::System::Single* StaticGet_StickMoveTheshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xD958);
		}
		static ::System::Single* StaticGet_PCDampRate()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xD95C);
		}
		static ::System::Single* StaticGet_GyroscopeRateY()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xD960);
		}
		static ::System::Boolean* StaticGet_UseOldGyroscope()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xD964);
		}
		static ::System::Boolean* StaticGet_IsPcResetWhenMouseUp()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xD965);
		}
		static ::System::Boolean* StaticGet_IsPcUseDrag()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xD966);
		}
		static ::System::Boolean* StaticGet_IsPcUseDamp()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xD967);
		}
		static ::System::Boolean* StaticGet_IsGyroscopeUseDamp()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xD968);
		}
		static ::System::Boolean* StaticGet_IsStickUseDamp()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xD969);
		}
		static ::MoleMole::UIMindscapeWidgetController_EGyroType* StaticGet_GyroType()
		{
			return (::MoleMole::UIMindscapeWidgetController_EGyroType*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xD96C);
		}
		static ::System::Single* StaticGet_PcLerpSpeedMin()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xD970);
		}
		static ::System::Single* StaticGet_StickToGyroTheshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xD974);
		}
		static ::System::Single* StaticGet_StickMoveRate()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xD978);
		}
		static ::MoleMole::UIMindscapeWidgetController_EStickType* StaticGet_StickType()
		{
			return (::MoleMole::UIMindscapeWidgetController_EStickType*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xD97C);
		}
		static ::System::Single* StaticGet_AccelIgnoreRate()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xD980);
		}
		static ::System::Single* StaticGet_PcLerpSpeedPower()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xD984);
		}
		// static const ::System::String* bgModelPath; // 0x0
		// static const ::System::Int32 BgCacheCount = 0x5; // 0x0
		// static const ::System::String* MindscapeTabCloseRecordKey; // 0x0
		// static const ::System::String* LineupSelectBottomTipsFadeIn; // 0x0
		// static const ::System::String* LineupSelectBottomTipsFadeOut; // 0x0
		::Class_2_79AE422BA06F6D26_253* _view; // 0x2A0
		::System::Collections::Generic::List_1<::MoleMole::UIMindscapeCutBgController*>* _bgCtrlList; // 0x2A8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>* _bgAssetDir; // 0x2B0
		::System::Collections::Generic::List_1<::MoleMole::UIMindscapeSwitchBtnRowWidgetController*>* _switchBtnList; // 0x2B8
		::MoleMole::UIGeneralToggleWidgetController* _lenticularToggle; // 0x2C0
		::System::Boolean _isLenticularToggleOn; // 0x2C8
		::MoleMole::UIMindscapeCutBgController* _currentBgCtrl; // 0x2D0
		::MoleMole::UIRoleChangeWidgetController* _roleChangeWidget; // 0x2D8
		::MoleMole::UIRoleInfoPageContext* _lastContext; // 0x2E0
		::Class_2_D89CCC627A66D0AD* _avatarData; // 0x2E8
		::System::Boolean _previewMode; // 0x2F0
		::System::Boolean _friendPreviewMode; // 0x2F1
		::System::Boolean _isShowLevelRow; // 0x2F2
		::Il2CppArray<::System::Boolean>* tabState; // 0x2F8
		::System::Action* _closeAction; // 0x300
		::System::Action* _closeOverAction; // 0x308
		::System::Boolean _isLenticularUnlock; // 0x310
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* items; // 0x318
		::System::String* LenticularSwitchAni; // 0x320
		::System::Single clickTime; // 0x328
		::Foundation::Coroutine::CoroutineHandle coroutineHandle; // 0x32C
		::System::Single _gyroscope_X; // 0x330
		::System::Single _gyroscope_Y; // 0x334
		::UnityEngine::Vector2 _curStickVec; // 0x338
		::UnityEngine::Vector2 __curInputVec; // 0x340
		::System::Nullable_1<::UnityEngine::Quaternion> _lastAttitude; // 0x348
		::Class_1_5F780812A1FAD31A* _gyroscopeInputHandler; // 0x360
		::System::Single _currentX; // 0x368
		::System::Single _currentY; // 0x36C
		::System::Boolean _useFollow; // 0x370
		::System::Boolean _isAttitudeReset; // 0x371
		::System::Single _lerpBetweenGyroAndStick; // 0x374
		::UnityEngine::Vector2 _lastGyroWhenStickReset; // 0x378
		::UnityEngine::Vector2 _stickInputVecLerpThreePointZeroPoint; // 0x380
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _tempVecList; // 0x388
		::System::Single _dampRate; // 0x390
		::UnityEngine::Vector2 _startMousePos; // 0x394
		::UnityEngine::Vector2 _lastMousePos; // 0x39C
		::UnityEngine::Vector2 _lastMouseVec; // 0x3A4
		::Foundation::Coroutine::CoroutineHandle _tipAniHandle; // 0x3AC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnSwitchBtnClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONSWITCHBTNCLICKHANDLE_OFFSET))(this);
		}

		::System::Void SetToggleBtnState(::System::Boolean isOn, ::System::Boolean withAni)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_SETTOGGLEBTNSTATE_OFFSET))(this, isOn, withAni);
		}

		::System::Void OnBackClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONBACKCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OpenGMLenticular()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_OPENGMLENTICULAR_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Boolean IsTrainingRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ISTRAININGROOM_OFFSET))(this);
		}

		::System::Void PlayViewFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_PLAYVIEWFADEIN_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void SetCloseAction(::System::Action* action, ::System::Action* overAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_SETCLOSEACTION_OFFSET))(this, action, overAction);
		}

		::UnityEngine::Vector2 get__curInputVec()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_GET__CURINPUTVEC_OFFSET))(this);
		}

		::System::Void set__curInputVec(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_SET__CURINPUTVEC_OFFSET))(this, value);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void ResetAttitudeCurrentVec()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_RESETATTITUDECURRENTVEC_OFFSET))(this);
		}

		::System::Void SetGyroscopeVec(::System::Single x, ::System::Single y, ::System::Boolean useFollow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_SETGYROSCOPEVEC_OFFSET))(this, x, y, useFollow);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateLenticular()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_UPDATELENTICULAR_OFFSET))(this);
		}

		::System::Single GetPcLerpSpeed(::System::Single pos)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_GETPCLERPSPEED_OFFSET))(this, pos);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Int32 OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 curIndex, ::System::Int32 nextIndex, ::MoleMole::InputActionEvent actionEvent, ::UnityEngine::Vector2 moveDir)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, gamepadModule, curIndex, nextIndex, actionEvent, moveDir);
		}

		::System::Void RefreshSwitchInputKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_REFRESHSWITCHINPUTKEY_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnTabClickHandle(::System::Int32 obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONTABCLICKHANDLE_OFFSET))(this, obj);
		}

		::System::Void PreSetBgTabState(::System::Int32 obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_PRESETBGTABSTATE_OFFSET))(this, obj);
		}

		::System::Void ChangeTabState(::System::Int32 obj, ::System::Boolean withAni)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_CHANGETABSTATE_OFFSET))(this, obj, withAni);
		}

		::System::Void SetLenticularTipAni(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_SETLENTICULARTIPANI_OFFSET))(this, isShow);
		}

		::System::Void OnAvatarChangeHandle(::Class_1_3CDBAA6BC10A7F83* obj)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3CDBAA6BC10A7F83*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONAVATARCHANGEHANDLE_OFFSET))(this, obj);
		}

		::System::Single PlayMaskFadeIn()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_PLAYMASKFADEIN_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, isInit);
		}

		::System::Void RefreshBackground()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_REFRESHBACKGROUND_OFFSET))(this);
		}

		::System::Void SetBgModel(::System::String* bgName, ::System::Action* completeHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_SETBGMODEL_OFFSET))(this, bgName, completeHandle);
		}

		::System::Void DoReleaseMindscapeCutBg()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_DORELEASEMINDSCAPECUTBG_OFFSET))(this);
		}

		::System::Int32 GetDefaultSelectIndex(::System::Boolean isInit)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_GETDEFAULTSELECTINDEX_OFFSET))(this, isInit);
		}

		::System::Void OnTalentUnlockOverHandle(::System::Int32 obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONTALENTUNLOCKOVERHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnTalentUnockEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONTALENTUNOCKEND_OFFSET))(this);
		}

		::System::Void OnGetItemDuringMindscape(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONGETITEMDURINGMINDSCAPE_OFFSET))(this, args);
		}

		::System::Void SetDeaultSwitchTab(::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_SETDEAULTSWITCHTAB_OFFSET))(this, isInit);
		}

		::System::Boolean GetLenticularOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_GETLENTICULAROPEN_OFFSET))(this);
		}

		::System::Boolean GetCanShowLenticular()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_GETCANSHOWLENTICULAR_OFFSET))(this);
		}

		::System::Void RefreshTabState(::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_REFRESHTABSTATE_OFFSET))(this, isInit);
		}

		::System::Void OnLenticularToggleHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONLENTICULARTOGGLEHANDLE_OFFSET))(this);
		}

		::System::Void RefreshLenticularToggleState(::System::Boolean withTabAni, ::System::Boolean withMask, ::System::Boolean isSetTip)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_REFRESHLENTICULARTOGGLESTATE_OFFSET))(this, withTabAni, withMask, isSetTip);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _OnBackClickHandle_b__25_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__ONBACKCLICKHANDLE_B__25_0_OFFSET))(this);
		}

		::System::Void _PlayViewFadeIn_b__33_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__PLAYVIEWFADEIN_B__33_0_OFFSET))(this);
		}

		::System::Void _SetLenticularTipAni_b__104_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__SETLENTICULARTIPANI_B__104_0_OFFSET))(this);
		}

		::System::Void _SetLenticularTipAni_b__104_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__SETLENTICULARTIPANI_B__104_1_OFFSET))(this);
		}

		::System::Void _SetLenticularTipAni_b__104_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__SETLENTICULARTIPANI_B__104_2_OFFSET))(this);
		}

		::System::Void _DoReleaseMindscapeCutBg_b__110_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__DORELEASEMINDSCAPECUTBG_B__110_0_OFFSET))(this);
		}

		::System::Void _OnTalentUnockEnd_b__113_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__ONTALENTUNOCKEND_B__113_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Int32 __base_OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::System::Int32 P2, ::MoleMole::InputActionEvent P3, ::UnityEngine::Vector2 P4)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
