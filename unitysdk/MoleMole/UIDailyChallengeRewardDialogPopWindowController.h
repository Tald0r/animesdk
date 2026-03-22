#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_1685EC66FBD28897;
class Class_2_8B0F2404306BC80A;
class Class_2_9D9172C07F82DDAE;
class MonoUITableScrollV2;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_CREATITEMICON_OFFSET UNITYSDK_OFFSET(0x8BE7350)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_GETUIELEMENTINFO_OFFSET UNITYSDK_OFFSET(0x8BE6190)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x8BE5890)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x8BE65A0)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_ONCLICKITEMBTN_OFFSET UNITYSDK_OFFSET(0x8BE77F0)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8BE58A0)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x8BE6DC0)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x8BE69C0)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8BE6BA0)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8BE5940)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8BE5D50)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_OPENEQUIPDETAIL_OFFSET UNITYSDK_OFFSET(0x8BE7BB0)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_REFRESHITEMLIST_OFFSET UNITYSDK_OFFSET(0x8BE7550)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_REFRESHTIP_OFFSET UNITYSDK_OFFSET(0x8BE6D30)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x8BE6FC0)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_RESETCONTENT_OFFSET UNITYSDK_OFFSET(0x8BE7F20)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_SETTIPS_OFFSET UNITYSDK_OFFSET(0x8BE6C30)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_WAITFRAMEEND_OFFSET UNITYSDK_OFFSET(0x8BE7750)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8BE7FC0)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8BE7FE0)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x8BE8050)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x8BE8080)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8BE8090)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8BE80A0)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8BE80B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyChallengeRewardDialogPopWindowController_TypeDefinitionIndex = 67907;

	class UIDailyChallengeRewardDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Single _dragThreshold; // 0x0
		::Class_2_8B0F2404306BC80A* _view; // 0x2F8
		::System::String* _tipsInfo; // 0x300
		::Class_2_9D9172C07F82DDAE* _itemModel; // 0x308
		::System::Boolean _skipAnim; // 0x310
		::System::Single _scrollPos; // 0x314
		::System::Int32 _xcount; // 0x318
		::System::Int32 _ycount; // 0x31C
		::System::Int32 _pageCount; // 0x320
		::System::Int32 _curPageIndex; // 0x324
		::UnityEngine::Vector4 _contentOffset; // 0x328
		::System::Int32 _maxPageIndex; // 0x338
		::System::Int32 _curShowCount; // 0x33C
		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* _curShowItems; // 0x340
		::MonoUITableScrollV2* _scrollRectEx; // 0x348
		::UnityEngine::Bounds _viewBounds; // 0x350
		::UnityEngine::RectTransform* _viewRect; // 0x368
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Byte>* _itemStatus; // 0x370
		::UnityEngine::Animation* _anim; // 0x378
		::System::Boolean _isClosing; // 0x380
		::System::Boolean useCustomInfo; // 0x381
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* customItemList; // 0x388
		::System::String* customTitle; // 0x390
		::System::String* customTitleEn; // 0x398

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetTips(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_SETTIPS_OFFSET))(this, text);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void GetUIElementInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_GETUIELEMENTINFO_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* CreatItemIcon(::Struct_2_575273D27F02957E binderInfo)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Struct_2_575273D27F02957E))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_CREATITEMICON_OFFSET))(this, binderInfo);
		}

		::System::Void RefreshItemList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_REFRESHITEMLIST_OFFSET))(this);
		}

		::System::Void RefreshTip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_REFRESHTIP_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Collections::IEnumerator* waitFrameEnd()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_WAITFRAMEEND_OFFSET))(this);
		}

		::System::Void OnClickItemBtn(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_ONCLICKITEMBTN_OFFSET))(this, index);
		}

		::System::Void OpenEquipDetail(::Class_1_0D6706375CDAAE8C* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_OPENEQUIPDETAIL_OFFSET))(this, itemData);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* ResetContent()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_RESETCONTENT_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
