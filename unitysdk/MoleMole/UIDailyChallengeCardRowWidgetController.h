#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_A3F38457E644339A.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_1_6535CE33BDD95E74;
class Class_2_66D0287CB134BA6D;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIDoubleTipsInfoWidgetController; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_BINDEVENT_OFFSET UNITYSDK_OFFSET(0xC60A460)
#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_ENABLEIMGOFFSET_OFFSET UNITYSDK_OFFSET(0xC60ACC0)
#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_FORCEINITLOOPTEXT_OFFSET UNITYSDK_OFFSET(0xC60A660)
#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_GETLOOPTEXTRUNINGTIME_OFFSET UNITYSDK_OFFSET(0xC60AD30)
#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC60A2C0)
#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_GET__VIEW_OFFSET UNITYSDK_OFFSET(0xC60A330)
#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_ONBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xC60D560)
#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC60A860)
#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC60A3A0)
#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0xC60D710)
#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xC60B060)
#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_SAMPLEANIMATION_OFFSET UNITYSDK_OFFSET(0xC60D7F0)
#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_SETALWAYSINTERACTABLE_OFFSET UNITYSDK_OFFSET(0xC60AFF0)
#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_SETBUTTONENABLE_OFFSET UNITYSDK_OFFSET(0xC60CE80)
#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_SETCONSOLEKEY_OFFSET UNITYSDK_OFFSET(0xC60ABA0)
#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_SETDATA_1_OFFSET UNITYSDK_OFFSET(0xC60CCC0)
#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0xC60CB10)
#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_SETDOUBLETIP_OFFSET UNITYSDK_OFFSET(0xC60D2B0)
#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_SETEMPTYLOCK_OFFSET UNITYSDK_OFFSET(0xC60AF10)
#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_SETENABLEADD_OFFSET UNITYSDK_OFFSET(0xC60AEA0)
#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_SETENABLECOOLDOWN_OFFSET UNITYSDK_OFFSET(0xC60A910)
#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_SETIGNORESHOWSPOILED_OFFSET UNITYSDK_OFFSET(0xC60AF80)
#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_SETOVERRIDELOCKSTATE_OFFSET UNITYSDK_OFFSET(0xC60CF00)
#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_SETREWARDBUFFICON_OFFSET UNITYSDK_OFFSET(0xC60CF70)
#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_SETUPICON_OFFSET UNITYSDK_OFFSET(0xC60D130)
#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_SYNCANIMATION_OFFSET UNITYSDK_OFFSET(0xC60A980)
#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC60D8A0)
#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC60D8D0)
#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC60D940)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyChallengeCardRowWidgetController_TypeDefinitionIndex = 63592;

	class UIDailyChallengeCardRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Boolean _enableClick; // 0x2A0
		::System::Action_1<::System::Int32>* _onClick; // 0x2A8
		::System::Boolean _showAddPanel; // 0x2B0
		::System::Boolean _showEmptyLock; // 0x2B1
		::System::Boolean _alwaysInteractable; // 0x2B2
		::System::Boolean _showCoolDownPanel; // 0x2B3
		::System::Boolean _matchMachineLevel; // 0x2B4
		::System::Boolean _overrideLockState; // 0x2B5
		::System::Boolean _enableImgOffset; // 0x2B6
		::System::Boolean _isIgnoreShowSpoiled; // 0x2B7
		::MoleMole::UIDoubleTipsInfoWidgetController* _doubleTipsInfoWidgetController; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_66D0287CB134BA6D* get__viewModel()
		{
			return ((::Class_2_66D0287CB134BA6D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::Class_2_66D0287CB134BA6D* get__view()
		{
			return ((::Class_2_66D0287CB134BA6D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_GET__VIEW_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void ForceInitLoopText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_FORCEINITLOOPTEXT_OFFSET))(this);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_BINDEVENT_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void SetEnableCoolDown(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_SETENABLECOOLDOWN_OFFSET))(this, value);
		}

		::System::Void SyncAnimation(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_SYNCANIMATION_OFFSET))(this, time);
		}

		::System::Void SetConsoleKey(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_SETCONSOLEKEY_OFFSET))(this, state);
		}

		::System::Void EnableImgOffset(::System::Boolean v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_ENABLEIMGOFFSET_OFFSET))(this, v);
		}

		::System::Single GetLoopTextRuningTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_GETLOOPTEXTRUNINGTIME_OFFSET))(this);
		}

		::System::Void SetEnableAdd(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_SETENABLEADD_OFFSET))(this, value);
		}

		::System::Void SetEmptyLock(::System::Boolean emptyLock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_SETEMPTYLOCK_OFFSET))(this, emptyLock);
		}

		::System::Void SetIgnoreShowSpoiled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_SETIGNORESHOWSPOILED_OFFSET))(this);
		}

		::System::Void SetAlwaysInteractable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_SETALWAYSINTERACTABLE_OFFSET))(this, value);
		}

		::System::Void SetData(::System::Int32 cardId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_SETDATA_OFFSET))(this, cardId);
		}

		::System::Void SetData_1(::System::Int32 cardId, ::System::Boolean selectable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_SETDATA_1_OFFSET))(this, cardId, selectable);
		}

		::System::Void SetButtonEnable(::System::Boolean enable, ::System::Action_1<::System::Int32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_SETBUTTONENABLE_OFFSET))(this, enable, callback);
		}

		::System::Void SetOverrideLockState(::System::Boolean isLock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_SETOVERRIDELOCKSTATE_OFFSET))(this, isLock);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void SetRewardBuffIcon(::System::Boolean show, ::System::Int32 buffID, ::Enum_3_A3F38457E644339A rewardBuffGameTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::Enum_3_A3F38457E644339A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_SETREWARDBUFFICON_OFFSET))(this, show, buffID, rewardBuffGameTag);
		}

		::System::Void SetUpIcon(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_SETUPICON_OFFSET))(this, show);
		}

		::System::Void SetDoubleTip(::System::Boolean show, ::Class_1_6535CE33BDD95E74* rewardBuffWrapper)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_1_6535CE33BDD95E74*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_SETDOUBLETIP_OFFSET))(this, show, rewardBuffWrapper);
		}

		::System::Void OnButtonClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_ONBUTTONCLICK_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask PlayAnimation(::System::String* clipName, ::System::Threading::CancellationToken cts)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::String*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_PLAYANIMATION_OFFSET))(this, clipName, cts);
		}

		::System::Void SampleAnimation(::System::String* clipName, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER_SAMPLEANIMATION_OFFSET))(this, clipName, time);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
