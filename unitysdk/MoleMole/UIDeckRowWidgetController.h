#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_B00164FCF88F89F6.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_45EB76A87BDD923A_2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIDailyChallengeCardRowWidgetController; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER_CANBEUPBYREWARDBUFF_OFFSET UNITYSDK_OFFSET(0xA2722C0)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER_GETCARDID_OFFSET UNITYSDK_OFFSET(0xA271AC0)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0xA271390)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xA271F90)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER_ONCONTROLLERCLICK_OFFSET UNITYSDK_OFFSET(0xA272000)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA2717B0)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xA271930)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA271850)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA2712E0)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA271700)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0xA2720B0)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xA271CE0)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER_SAMPLEANIMATION_OFFSET UNITYSDK_OFFSET(0xA272190)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER_SETCARDCLICKFUNC_OFFSET UNITYSDK_OFFSET(0xA271F20)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER_SETREWARDBUFFICON_OFFSET UNITYSDK_OFFSET(0xA272230)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA272370)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA272380)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xA2723F0)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA272470)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA2724F0)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA272550)

namespace MoleMole
{
	inline static constexpr unsigned int UIDeckRowWidgetController_TypeDefinitionIndex = 61309;

	class UIDeckRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		// static const ::System::String* DailyChallengeDeckMiniFadeIn; // 0x0
		// static const ::System::String* DailyChallengeDeckMiniFadeOut; // 0x0
		// static const ::System::String* DailyChallengeDeckMiniFadeInDown; // 0x0
		// static const ::System::String* DailyChallengeDeckMiniFadeInUp; // 0x0
		// static const ::System::String* DailyChallengeDeckMiniFadeOutDown; // 0x0
		// static const ::System::String* DailyChallengeDeckMiniFadeOutUp; // 0x0
		::Class_2_45EB76A87BDD923A_2* _view; // 0x2D0
		::Struct_2_B00164FCF88F89F6 viewData; // 0x2D8
		::MoleMole::UIDailyChallengeCardRowWidgetController* controller; // 0x2E8
		::System::Int32 cardId; // 0x2F0
		::System::Action_1<::System::Int32>* onClick; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetCardClickFunc(::System::Action_1<::System::Int32>* OnClickAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER_SETCARDCLICKFUNC_OFFSET))(this, OnClickAction);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER_ISEMPTY_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Int32 GetCardId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER_GETCARDID_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnControllerClick(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER_ONCONTROLLERCLICK_OFFSET))(this, value);
		}

		::Cysharp::Threading::Tasks::UniTask PlayAnimation(::System::String* clipName, ::System::Threading::CancellationToken cts)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::String*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER_PLAYANIMATION_OFFSET))(this, clipName, cts);
		}

		::System::Void SampleAnimation(::System::String* clipName, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER_SAMPLEANIMATION_OFFSET))(this, clipName, time);
		}

		::System::Void SetRewardBuffIcon(::System::Boolean v, ::System::Int32 buffSourceType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER_SETREWARDBUFFICON_OFFSET))(this, v, buffSourceType);
		}

		::System::Boolean CanBeUpByRewardBuff(::System::Int32 machineLevelId, ::System::Int32& buffID, ::System::Collections::Generic::List_1<::System::Int32>* excludeBuffList)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER_CANBEUPBYREWARDBUFF_OFFSET))(this, machineLevelId, buffID, excludeBuffList);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
