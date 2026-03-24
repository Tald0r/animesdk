#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIDailyChallengeCardWidgetController___c__DisplayClass15_0.h"
#include "unitysdk/Struct_2_FEFADCB82FEB841E_1.h"

class Class_1_30D3D578039787FA;
class Class_2_60638234271CCDB8_142;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIDoubleTipsInfoWidgetController; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_BINDEVENT_OFFSET UNITYSDK_OFFSET(0xB0CCD00)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB0CCE70)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0xB0CD2D0)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xB0CCF10)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB0CD170)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB0CCC50)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_OPENREWARDPREVIEW_OFFSET UNITYSDK_OFFSET(0xB0CD3D0)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_PLAYCOR_OFFSET UNITYSDK_OFFSET(0xB0CF470)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_PLAYNEXTTEXTURESHEET_OFFSET UNITYSDK_OFFSET(0xB0CEC80)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_REFRESHPANEL_OFFSET UNITYSDK_OFFSET(0xB0CDCB0)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_SETCLICKEDACTION_OFFSET UNITYSDK_OFFSET(0xB0CCBE0)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0xB0CD0F0)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_WAITPLAY_OFFSET UNITYSDK_OFFSET(0xB0CF2C0)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER__BINDEVENT_B__13_0_OFFSET UNITYSDK_OFFSET(0xB0CF5C0)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB0CF520)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB0CF510)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER__OPENREWARDPREVIEW_G__GETLEVELREWARD_15_0_OFFSET UNITYSDK_OFFSET(0xB0CDC40)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB0CF6E0)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0xB0CF750)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xB0CF7B0)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB0CF830)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB0CF8B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyChallengeCardWidgetController_TypeDefinitionIndex = 73451;

	class UIDailyChallengeCardWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::System::String*>*>** StaticGet_TextureKeys()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(UIDailyChallengeCardWidgetController_TypeDefinitionIndex)->GetStaticField(0x431D0);
		}
		::Class_2_60638234271CCDB8_142* _view; // 0x2D0
		::System::UInt32 entranceId; // 0x2D8
		::System::Boolean unlocked; // 0x2DC
		::System::Action_1<::System::Int32>* OnSelectClicked; // 0x2E0
		::System::Int32 _currentTextureSheetIndex; // 0x2E8
		::Class_1_30D3D578039787FA* _player; // 0x2F0
		::UnityEngine::Coroutine* _coroutine; // 0x2F8
		::MoleMole::UIDoubleTipsInfoWidgetController* _doubleTipsInfoWidgetController; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void SetClickedAction(::System::Action_1<::System::Int32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_SETCLICKEDACTION_OFFSET))(this, callback);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_BINDEVENT_OFFSET))(this);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OpenRewardPreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_OPENREWARDPREVIEW_OFFSET))(this);
		}

		::System::Void SetData(::Struct_2_FEFADCB82FEB841E_1 info)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_FEFADCB82FEB841E_1))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_SETDATA_OFFSET))(this, info);
		}

		::System::Void RefreshPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_REFRESHPANEL_OFFSET))(this);
		}

		::System::Void WaitPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_WAITPLAY_OFFSET))(this);
		}

		::System::Collections::IEnumerator* PlayCor()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_PLAYCOR_OFFSET))(this);
		}

		::System::Void PlayNextTextureSheet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_PLAYNEXTTEXTURESHEET_OFFSET))(this);
		}

		::System::Void _BindEvent_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER__BINDEVENT_B__13_0_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>* _OpenRewardPreview_g__GetLevelReward_15_0(::System::Int32 level, ::MoleMole::UIDailyChallengeCardWidgetController___c__DisplayClass15_0& a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Int32, ::MoleMole::UIDailyChallengeCardWidgetController___c__DisplayClass15_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER__OPENREWARDPREVIEW_G__GETLEVELREWARD_15_0_OFFSET))(level, a2);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
