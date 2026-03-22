#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_1685EC66FBD28897;
class Class_2_9D9172C07F82DDAE;
class Class_2_E2A9D06B146745F8;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_CREATEITEM_OFFSET UNITYSDK_OFFSET(0x8A35FD0)
#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_GETUIELEMENTINFO_OFFSET UNITYSDK_OFFSET(0x8A34DA0)
#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x8A33880)
#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x8A337D0)
#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x8A34320)
#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_ONCLICKITEMBTN_OFFSET UNITYSDK_OFFSET(0x8A36380)
#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8A337E0)
#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x8A34880)
#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x8A33890)
#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x8A34610)
#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8A347F0)
#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8A33930)
#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8A33DD0)
#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_OPENEQUIPDETAIL_OFFSET UNITYSDK_OFFSET(0x8A366D0)
#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_REFRESHITEMLIST_OFFSET UNITYSDK_OFFSET(0x8A357E0)
#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x8A351B0)
#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_RESETCONTENT_OFFSET UNITYSDK_OFFSET(0x8A36A20)
#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_WAITFRAMEEND_OFFSET UNITYSDK_OFFSET(0x8A35F30)
#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8A36AC0)
#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8A36AE0)
#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x8A36B50)
#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x8A36B80)
#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x8A36BE0)
#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8A36BF0)
#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8A36C00)
#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8A36C10)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowRewardBagDialogPopWindowController_TypeDefinitionIndex = 53245;

	class UIHollowRewardBagDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Single _dragThreshold; // 0x0
		// static const ::System::Int32 ROOTCOUNT = 0x7; // 0x0
		// static const ::System::Int32 ROOT2COUNT = 0xE; // 0x0
		::MoleMole::MonoGamepadCustomList* rootList; // 0x2F8
		::MoleMole::MonoGamepadCustomList* root2List; // 0x300
		::Class_2_9D9172C07F82DDAE* _itemModel; // 0x308
		::Class_2_E2A9D06B146745F8* _view; // 0x310
		::System::Boolean _skipAnim; // 0x318
		::System::Single _scrollPos; // 0x31C
		::System::Int32 _xcount; // 0x320
		::System::Int32 _ycount; // 0x324
		::System::Int32 _pageCount; // 0x328
		::System::Int32 _curPageIndex; // 0x32C
		::UnityEngine::Vector4 _contentOffset; // 0x330
		::System::Int32 _maxPageIndex; // 0x340
		::System::Int32 _curShowCount; // 0x344
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* _curShowItems; // 0x348
		::MonoUITableScrollV2* _scrollRectEx; // 0x350
		::UnityEngine::Bounds _viewBounds; // 0x358
		::UnityEngine::RectTransform* _viewRect; // 0x370
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Byte>* _itemStatus; // 0x378
		::UnityEngine::Animation* _anim; // 0x380
		::System::Boolean _isClosing; // 0x388
		::System::Boolean useCustomInfo; // 0x389
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* customItemList; // 0x390
		::System::String* customTitle; // 0x398
		::System::String* customTitleEn; // 0x3A0
		::System::Int32 item1ValidCount; // 0x3A8
		::System::Int32 item2ValidCount; // 0x3AC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void GetUIElementInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_GETUIELEMENTINFO_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void RefreshItemList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_REFRESHITEMLIST_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void CreateItem(::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* itemlist, ::UnityEngine::Transform* root)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_CREATEITEM_OFFSET))(this, itemlist, root);
		}

		::System::Collections::IEnumerator* waitFrameEnd()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_WAITFRAMEEND_OFFSET))(this);
		}

		::System::Void OnClickItemBtn(::Class_1_1685EC66FBD28897* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1685EC66FBD28897*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_ONCLICKITEMBTN_OFFSET))(this, itemData);
		}

		::System::Void OpenEquipDetail(::Class_1_0D6706375CDAAE8C* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_OPENEQUIPDETAIL_OFFSET))(this, itemData);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* ResetContent()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER_RESETCONTENT_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
