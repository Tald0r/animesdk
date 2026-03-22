#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_72D718364F0A8071.h"

class Class_2_79F6D62CE30E3F8E_133;
class Class_2_D89CCC627A66D0AD;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralConversionTipsPopWindowContext; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace MoleMole { class UIRoleSkillLevelUpAttributeRowChildWindowController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_BINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA72D120)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_GETBTNTEXT_OFFSET UNITYSDK_OFFSET(0xA72F220)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0xA72CF30)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xA72CF20)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONCLICKCONSOLECHECKCONSUMEBTN_OFFSET UNITYSDK_OFFSET(0xA72FB50)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONCLICKCONSUMEICONBTN_OFFSET UNITYSDK_OFFSET(0xA72FA90)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA72CF40)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONINFOCLICKED_OFFSET UNITYSDK_OFFSET(0xA72F430)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONITEMCHANGEHANDLE_OFFSET UNITYSDK_OFFSET(0xA72F100)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONLEVELUPOKCLICKED_OFFSET UNITYSDK_OFFSET(0xA72F5E0)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xA72D830)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA72D610)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA72CFE0)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA72D720)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xA72D920)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_SHOWLEVELUPERRORHINT_OFFSET UNITYSDK_OFFSET(0xA72F340)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA72FC60)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER__ONLEVELUPOKCLICKED_B__37_0_OFFSET UNITYSDK_OFFSET(0xA72FE30)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER__ONLEVELUPOKCLICKED_B__37_1_OFFSET UNITYSDK_OFFSET(0xA72FDF0)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA72FFA0)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xA730010)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA730020)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA730030)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA730040)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSkillLevelUpPopWindowController_TypeDefinitionIndex = 54403;

	class UIRoleSkillLevelUpPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* NO_CONSUME_ANIM; // 0x0
		::Class_2_79F6D62CE30E3F8E_133* _view; // 0x2F8
		::Class_2_D89CCC627A66D0AD* _cacheAvatarInfo; // 0x300
		::Struct_2_72D718364F0A8071 _skill; // 0x308
		::System::Collections::Generic::List_1<::MoleMole::UIRoleSkillLevelUpAttributeRowChildWindowController*>* _levelUpAttributeList; // 0x318
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _itemCtrlList; // 0x320
		::System::Boolean _isLevelUpAnimPlaying; // 0x328
		::System::Int32 _consumeItemID; // 0x32C
		::System::Int32 firstUnenoughID; // 0x330
		::System::Boolean isJumpToCompose; // 0x334
		::System::Int32 jumpToItemID; // 0x338
		::System::Int32 jumpTabIndex; // 0x33C
		::System::Int32 composeNeedCount; // 0x340
		::System::Boolean isSuggestUseMaterialConversion; // 0x344
		::MoleMole::UIGeneralConversionTipsPopWindowContext* conversionContext; // 0x348
		::System::Boolean isSuggestUseMaterialConversionAndAdaptive; // 0x350
		::System::Boolean isSuggestUseAdaptiveMaterial; // 0x351
		::System::Boolean isUseAdaptiveMaterial; // 0x352
		::System::Int32 useAdaptiveItemID; // 0x354
		::System::Int32 useAdaptiveItemCount; // 0x358
		::Foundation::Coroutine::CoroutineHandle okBtnDisableHandle; // 0x35C
		::System::Boolean isWaitSkillLevelUpRsp; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnItemChangeHandle(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONITEMCHANGEHANDLE_OFFSET))(this, args);
		}

		::System::String* GetBtnText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_GETBTNTEXT_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Boolean isUpgrading, ::System::Boolean withOutLevelMes, ::System::Boolean closeAfterUpgradeDone, ::System::Boolean withTweenEffect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this, isUpgrading, withOutLevelMes, closeAfterUpgradeDone, withTweenEffect);
		}

		::System::Void ShowLevelUpErrorHint(::System::Boolean bShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_SHOWLEVELUPERRORHINT_OFFSET))(this, bShow);
		}

		::System::Void BindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_BINDCALLBACK_OFFSET))(this);
		}

		::System::Void OnInfoClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONINFOCLICKED_OFFSET))(this);
		}

		::System::Void OnLevelUpOKClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONLEVELUPOKCLICKED_OFFSET))(this);
		}

		::System::Void OnClickConsumeIconBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONCLICKCONSUMEICONBTN_OFFSET))(this);
		}

		::System::Void OnClickConsoleCheckConsumeBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONCLICKCONSOLECHECKCONSUMEBTN_OFFSET))(this);
		}

		::System::Void _OnLevelUpOKClicked_b__37_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER__ONLEVELUPOKCLICKED_B__37_1_OFFSET))(this);
		}

		::System::Void _OnLevelUpOKClicked_b__37_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER__ONLEVELUPOKCLICKED_B__37_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
