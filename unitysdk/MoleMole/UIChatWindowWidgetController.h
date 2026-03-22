#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5F152DBF108B0858.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIChatWindowWidgetController_DataRefreshType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/MonoUITableScrollV2_MoveContext.h"
#include "unitysdk/System/DateTime.h"

class Class_1_1BC290F9827A1BD7;
class Class_1_9EDE5D0623B668B8;
class Class_1_B1CC8F53861C28C2;
class Class_1_BE6BF7909AD9D940;
class Class_2_01A9580380D362EF;
class Class_2_2F3C7D4EFC74D485;
class Class_2_79AE422BA06F6D26_64;
class Class_2_DF2C726EEEEC912D;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFriendChatEmojiWidgetController; }
namespace MoleMole { class UIFriendChatPopWindowController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
template <typename T> class Class_1_8914B0C55B12E9CE;

#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_BUILDCHATMSGITEM_OFFSET UNITYSDK_OFFSET(0xD039F10)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CANPROCESS_OFFSET UNITYSDK_OFFSET(0xD03C980)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CHECKCIRCLEALLOWCOMM_OFFSET UNITYSDK_OFFSET(0xD03B7B0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CHECKFRIENDALLOWCOMM_OFFSET UNITYSDK_OFFSET(0xD03B6A0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CHECKINSERTDETECTOR_OFFSET UNITYSDK_OFFSET(0xD03B230)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CHECKSENDMOVEVALID_OFFSET UNITYSDK_OFFSET(0xD03B580)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CHOPNOWMESSAGES_OFFSET UNITYSDK_OFFSET(0xD03A4E0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CLEARALLMSGITEMS_OFFSET UNITYSDK_OFFSET(0xD037A00)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CREATECHATLOADING_OFFSET UNITYSDK_OFFSET(0xD038C80)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CREATECHATMESSAGE_OFFSET UNITYSDK_OFFSET(0xD0389E0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CREATECHATSHARETEAM_OFFSET UNITYSDK_OFFSET(0xD038BA0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CREATECHATSPECIAL_OFFSET UNITYSDK_OFFSET(0xD038AC0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_FINISHSCROLL_OFFSET UNITYSDK_OFFSET(0xD03E540)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_FORCESCROLLTOBOTTOM_OFFSET UNITYSDK_OFFSET(0xD039450)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_GETTEMPLATEINDEXFROMDATA_OFFSET UNITYSDK_OFFSET(0xD038740)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_GET_ISSHOWINGEMPTYCIRCLECONTENT_OFFSET UNITYSDK_OFFSET(0xD03BE80)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_INITCIRCLEINFO_OFFSET UNITYSDK_OFFSET(0xD03C2B0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_INITEMPTYCIRCLECONTENT_OFFSET UNITYSDK_OFFSET(0xD038170)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_INITFRIENDINFO_OFFSET UNITYSDK_OFFSET(0xD037790)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_INITPLATFORMSETTING_OFFSET UNITYSDK_OFFSET(0xD035250)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_INITSCROLLTOBOTTOM_OFFSET UNITYSDK_OFFSET(0xD03B290)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0xD035690)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ISSENDTEXTVALID_OFFSET UNITYSDK_OFFSET(0xD03B870)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ISTIMEINSAMEDAY_OFFSET UNITYSDK_OFFSET(0xD03A730)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_LOOPADD_OFFSET UNITYSDK_OFFSET(0xD03A290)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKCHILDITEM_OFFSET UNITYSDK_OFFSET(0xD0382E0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKEMOJIBTN_OFFSET UNITYSDK_OFFSET(0xD03B9C0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKSCROLLTOBOTTOMBTN_OFFSET UNITYSDK_OFFSET(0xD039390)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKSENDBTN_OFFSET UNITYSDK_OFFSET(0xD036E90)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKSENDCIRCLEEMOJI_OFFSET UNITYSDK_OFFSET(0xD03BC00)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKSENDCIRCLEMSG_OFFSET UNITYSDK_OFFSET(0xD03B4D0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKSENDFRIENDEMOJI_OFFSET UNITYSDK_OFFSET(0xD03BAF0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKSENDFRIENDMSG_OFFSET UNITYSDK_OFFSET(0xD03B420)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD036C60)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONDESELECTINPUTFIELD_OFFSET UNITYSDK_OFFSET(0xD0395C0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xD036D00)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONINPUTCHANGED_OFFSET UNITYSDK_OFFSET(0xD0398D0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONSCROLLEND_OFFSET UNITYSDK_OFFSET(0xD03E360)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0xD03E020)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONSELECTEMOJI_OFFSET UNITYSDK_OFFSET(0xD03BA50)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONSELECTINPUTFIELD_OFFSET UNITYSDK_OFFSET(0xD0394D0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xD036890)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONSWITCHPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0xD0362B0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONSWITCHTAB_OFFSET UNITYSDK_OFFSET(0xD03A6C0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONTEXTVALIDATEINPUT_OFFSET UNITYSDK_OFFSET(0xD039770)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xD036A90)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD036F20)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD034CF0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONUPDATECIRCLEHISTORYMESSAGE_OFFSET UNITYSDK_OFFSET(0xD03CBE0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_PLAYSWITCHCHATITEMANIM_OFFSET UNITYSDK_OFFSET(0xD0380B0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_PLAYVOICE_OFFSET UNITYSDK_OFFSET(0xD038380)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_RECOVERLASTINPUTTEXT_OFFSET UNITYSDK_OFFSET(0xD03A9A0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_REFRESHALLCIRCLEMESSAGES_OFFSET UNITYSDK_OFFSET(0xD03CA30)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_REFRESHCIRCLEHISTORYMESSAGES_OFFSET UNITYSDK_OFFSET(0xD03CE00)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_REFRESHCIRCLENEWMESSAGES_OFFSET UNITYSDK_OFFSET(0xD03D580)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_RESET_OFFSET UNITYSDK_OFFSET(0xD03BFF0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_RESTORELASTINPUTTEXT_OFFSET UNITYSDK_OFFSET(0xD0372F0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SETPLATFORMBTNSHOWSTATE_OFFSET UNITYSDK_OFFSET(0xD036A00)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SET_ISSHOWINGEMPTYCIRCLECONTENT_OFFSET UNITYSDK_OFFSET(0xD03BE90)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SHOWCHAT_1_OFFSET UNITYSDK_OFFSET(0xD03BEA0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SHOWCHAT_OFFSET UNITYSDK_OFFSET(0xD0371B0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SHOWCIRCLEMESSAGE_OFFSET UNITYSDK_OFFSET(0xD03C8B0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SHOWEFFECT_OFFSET UNITYSDK_OFFSET(0xD03E4A0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SHOWEMPTYCIRCLECONTENT_OFFSET UNITYSDK_OFFSET(0xD03C3E0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SHOWEMPTYCONTENT_OFFSET UNITYSDK_OFFSET(0xD037910)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SHOWMESSAGE_OFFSET UNITYSDK_OFFSET(0xD03AE10)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_STAYNOWPOSITION_OFFSET UNITYSDK_OFFSET(0xD03DCD0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_STOPVOICE_OFFSET UNITYSDK_OFFSET(0xD036B00)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SWITCHCIRCLESHOWTITLESTATE_OFFSET UNITYSDK_OFFSET(0xD03C510)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SWITCHCONTENTPANELSHOWSTATE_OFFSET UNITYSDK_OFFSET(0xD037B20)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SWITCHFRIENDPLATFORMNAME_OFFSET UNITYSDK_OFFSET(0xD036390)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SWITCHWINDOWUI_OFFSET UNITYSDK_OFFSET(0xD037BB0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATECHATWINDOWINFO_CIRCLE_OFFSET UNITYSDK_OFFSET(0xD03C070)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATECHATWINDOWINFO_FRIEND_OFFSET UNITYSDK_OFFSET(0xD0375C0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATECIRCLEHISTORYMESSAGES_OFFSET UNITYSDK_OFFSET(0xD039BA0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATECIRCLENEWMESSAGES_OFFSET UNITYSDK_OFFSET(0xD03D4E0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATECIRCLE_OFFSET UNITYSDK_OFFSET(0xD038DD0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATECURRENTCHATMESSAGEANDSHOW_OFFSET UNITYSDK_OFFSET(0xD037640)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATEMAXINPUTHINTSHOWSTATE_OFFSET UNITYSDK_OFFSET(0xD039A40)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATESCROLLTOBOTTOMBTN_OFFSET UNITYSDK_OFFSET(0xD039100)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xD038D60)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD03E660)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__INITEMPTYCIRCLECONTENT_B__77_0_OFFSET UNITYSDK_OFFSET(0xD03EE70)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONCLICKSENDCIRCLEMSG_B__81_0_OFFSET UNITYSDK_OFFSET(0xD03EF80)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONCLICKSENDCIRCLEMSG_B__81_3_OFFSET UNITYSDK_OFFSET(0xD03F2D0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONCLICKSENDCIRCLEMSG_G__SENDMSG_81_1_OFFSET UNITYSDK_OFFSET(0xD03EF90)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONCLICKSENDFRIENDMSG_B__46_0_OFFSET UNITYSDK_OFFSET(0xD03EAF0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONCLICKSENDFRIENDMSG_B__46_3_OFFSET UNITYSDK_OFFSET(0xD03EDC0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONCLICKSENDFRIENDMSG_G__SENDMSG_46_1_OFFSET UNITYSDK_OFFSET(0xD03EB00)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONUIINIT_B__3_0_OFFSET UNITYSDK_OFFSET(0xD03E780)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONUIINIT_B__3_1_OFFSET UNITYSDK_OFFSET(0xD03E8C0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD03F380)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xD03F3F0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xD03F420)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xD03F490)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD03F4A0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD03F520)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatWindowWidgetController_TypeDefinitionIndex = 57443;

	class UIChatWindowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 _MAX_SCROLLVIEW_ITEM_COUNT_WHEN_FULLSCREEN = 0xF; // 0x0
		// static const ::System::String* _SWITCH_ITEM_ANIM; // 0x0
		// static const ::System::Int32 MAX_RETAIN_COUNT = 0x14; // 0x0
		::Class_2_79AE422BA06F6D26_64* _view; // 0x2A0
		::Class_2_2F3C7D4EFC74D485* _model; // 0x2A8
		::MoleMole::UIFriendChatEmojiWidgetController* _emojiWidget; // 0x2B0
		::Enum_3_5F152DBF108B0858 _currChatType; // 0x2B8
		::Class_1_BE6BF7909AD9D940* _currFriendInfo; // 0x2C0
		::Class_1_8914B0C55B12E9CE<::Class_1_9EDE5D0623B668B8*>* scrollViewContextList; // 0x2C8
		::System::Boolean _IsShowingEmptyCircleContent_k__BackingField; // 0x2D0
		::Class_1_1BC290F9827A1BD7* handler; // 0x2D8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* _inputTextCacheDic; // 0x2E0
		::System::Int32 maxLength; // 0x2E8
		::System::Boolean _allowSwitchPlatform; // 0x2EC
		::System::Boolean _canSwitchPlatform; // 0x2ED
		::MoleMole::UIFriendChatPopWindowController* _parentCtrl; // 0x2F0
		::System::Int32 MAX_SHOW_COUNT; // 0x2F8
		::System::Boolean _isOpenSync; // 0x2FC
		::MoleMole::UIChatWindowWidgetController_DataRefreshType _refreshType; // 0x300
		::System::Single _lastExecute; // 0x304
		::Class_2_01A9580380D362EF* _circleModel; // 0x308
		::Class_2_DF2C726EEEEC912D* _currCircleDataExt; // 0x310
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* _circleInputTextCacheDic; // 0x318
		::System::Int32 _waitForRequestingHistory; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnSwitchPlatformInfo(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONSWITCHPLATFORMINFO_OFFSET))(this, args);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ShowChat(::Class_1_BE6BF7909AD9D940* friendInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BE6BF7909AD9D940*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SHOWCHAT_OFFSET))(this, friendInfo);
		}

		::System::Void ShowEmptyContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SHOWEMPTYCONTENT_OFFSET))(this);
		}

		::System::Void SwitchContentPanelShowState(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SWITCHCONTENTPANELSHOWSTATE_OFFSET))(this, isShow);
		}

		::System::Void PlaySwitchChatItemAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_PLAYSWITCHCHATITEMANIM_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnClickChildItem(::Class_1_9EDE5D0623B668B8* item)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9EDE5D0623B668B8*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKCHILDITEM_OFFSET))(this, item);
		}

		::System::Int32 GetTemplateIndexFromData(::System::Int32 dataIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_GETTEMPLATEINDEXFROMDATA_OFFSET))(this, dataIndex);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateChatMessage(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CREATECHATMESSAGE_OFFSET))(this, arg);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateChatSpecial(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CREATECHATSPECIAL_OFFSET))(this, arg);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateChatShareTeam(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CREATECHATSHARETEAM_OFFSET))(this, arg);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateChatLoading(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CREATECHATLOADING_OFFSET))(this, arg);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateScrollToBottomBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATESCROLLTOBOTTOMBTN_OFFSET))(this);
		}

		::System::Void OnClickScrollToBottomBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKSCROLLTOBOTTOMBTN_OFFSET))(this);
		}

		::System::Void OnSelectInputField()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONSELECTINPUTFIELD_OFFSET))(this);
		}

		::System::Void OnDeselectInputField()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONDESELECTINPUTFIELD_OFFSET))(this);
		}

		::System::Char OnTextValidateInput(::System::String* text, ::System::Int32 charIndex, ::System::Char addedChar)
		{
			return ((::System::Char(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONTEXTVALIDATEINPUT_OFFSET))(this, text, charIndex, addedChar);
		}

		::System::Void OnInputChanged(::System::String* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONINPUTCHANGED_OFFSET))(this, input);
		}

		::System::Void UpdateMaxInputHintShowState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATEMAXINPUTHINTSHOWSTATE_OFFSET))(this);
		}

		::System::Void InitFriendInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_INITFRIENDINFO_OFFSET))(this);
		}

		::System::Void UpdateChatWindowInfo_Friend(::System::Boolean isSelectingSameChatItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATECHATWINDOWINFO_FRIEND_OFFSET))(this, isSelectingSameChatItem);
		}

		::System::Void SwitchFriendPlatformName(::System::Boolean isShowingPlatformInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SWITCHFRIENDPLATFORMNAME_OFFSET))(this, isShowingPlatformInfo);
		}

		::System::Void UpdateCurrentChatMessageAndShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATECURRENTCHATMESSAGEANDSHOW_OFFSET))(this);
		}

		::System::Void UpdateCircleHistoryMessages(::System::Collections::Generic::IReadOnlyList_1<::Class_1_B1CC8F53861C28C2*>* messageList, ::System::Int32 readLen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_B1CC8F53861C28C2*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATECIRCLEHISTORYMESSAGES_OFFSET))(this, messageList, readLen);
		}

		::System::Void LoopAdd(::System::Collections::Generic::IReadOnlyList_1<::Class_1_B1CC8F53861C28C2*>* messageList, ::System::Int32 start, ::System::Int32 end)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_B1CC8F53861C28C2*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_LOOPADD_OFFSET))(this, messageList, start, end);
		}

		::System::Int32 ChopNowMessages(::System::Int32 newLen, ::System::Int32& curEndIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CHOPNOWMESSAGES_OFFSET))(this, newLen, curEndIndex);
		}

		::System::Void OnSwitchTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONSWITCHTAB_OFFSET))(this);
		}

		::System::Void RestoreLastInputText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_RESTORELASTINPUTTEXT_OFFSET))(this);
		}

		::Class_1_9EDE5D0623B668B8* BuildChatMsgItem(::Class_1_B1CC8F53861C28C2* curMsgData, ::System::Int64 lastMsgTime)
		{
			return ((::Class_1_9EDE5D0623B668B8*(*)(::PVOID, ::Class_1_B1CC8F53861C28C2*, ::System::Int64))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_BUILDCHATMSGITEM_OFFSET))(this, curMsgData, lastMsgTime);
		}

		::System::Void SwitchWindowUI(::System::Boolean isShow, ::System::Boolean onlySwitchContentRootDisplay, ::System::Boolean isSelectingSameChatItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SWITCHWINDOWUI_OFFSET))(this, isShow, onlySwitchContentRootDisplay, isSelectingSameChatItem);
		}

		::System::String* RecoverLastInputText(::Enum_3_5F152DBF108B0858 currChatType)
		{
			return ((::System::String*(*)(::PVOID, ::Enum_3_5F152DBF108B0858))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_RECOVERLASTINPUTTEXT_OFFSET))(this, currChatType);
		}

		::System::Void ShowMessage(::System::Collections::Generic::IReadOnlyList_1<::Class_1_B1CC8F53861C28C2*>* msgList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_B1CC8F53861C28C2*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SHOWMESSAGE_OFFSET))(this, msgList);
		}

		::System::Void ClearAllMsgItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CLEARALLMSGITEMS_OFFSET))(this);
		}

		::System::Void CheckInsertDetector()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CHECKINSERTDETECTOR_OFFSET))(this);
		}

		::System::Boolean IsTimeInSameDay(::System::DateTime lastDateTime, ::System::DateTime currDateTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ISTIMEINSAMEDAY_OFFSET))(this, lastDateTime, currDateTime);
		}

		::System::Void OnClickSendBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKSENDBTN_OFFSET))(this);
		}

		::System::Void OnClickSendFriendMsg()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKSENDFRIENDMSG_OFFSET))(this);
		}

		::System::Void CheckSendMoveValid(::System::Action_1<::System::Boolean>* onCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CHECKSENDMOVEVALID_OFFSET))(this, onCallback);
		}

		::System::Void CheckFriendAllowComm(::System::Action_1<::System::Boolean>* onCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CHECKFRIENDALLOWCOMM_OFFSET))(this, onCallback);
		}

		::System::Boolean IsSendTextValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ISSENDTEXTVALID_OFFSET))(this);
		}

		::System::Void OnClickEmojiBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKEMOJIBTN_OFFSET))(this);
		}

		::System::Void OnSelectEmoji(::System::Int32 emojiKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONSELECTEMOJI_OFFSET))(this, emojiKey);
		}

		::System::Void OnClickSendFriendEmoji(::System::Int32 emojiKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKSENDFRIENDEMOJI_OFFSET))(this, emojiKey);
		}

		::System::Boolean get_IsShowingEmptyCircleContent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_GET_ISSHOWINGEMPTYCIRCLECONTENT_OFFSET))(this);
		}

		::System::Void set_IsShowingEmptyCircleContent(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SET_ISSHOWINGEMPTYCIRCLECONTENT_OFFSET))(this, value);
		}

		::System::Void SetPlatformBtnShowState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SETPLATFORMBTNSHOWSTATE_OFFSET))(this);
		}

		::System::Void InitPlatformSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_INITPLATFORMSETTING_OFFSET))(this);
		}

		::System::Void ShowChat_1(::Class_2_DF2C726EEEEC912D* circleDataExt, ::System::Action* onReady)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_DF2C726EEEEC912D*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SHOWCHAT_1_OFFSET))(this, circleDataExt, onReady);
		}

		::System::Void InitEmptyCircleContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_INITEMPTYCIRCLECONTENT_OFFSET))(this);
		}

		::System::Void ShowEmptyCircleContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SHOWEMPTYCIRCLECONTENT_OFFSET))(this);
		}

		::System::Void InitCircleInfo(::System::Action* onReady)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_INITCIRCLEINFO_OFFSET))(this, onReady);
		}

		::System::Void UpdateChatWindowInfo_Circle(::System::Boolean isSelectingSameChatItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATECHATWINDOWINFO_CIRCLE_OFFSET))(this, isSelectingSameChatItem);
		}

		::System::Void OnClickSendCircleMsg()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKSENDCIRCLEMSG_OFFSET))(this);
		}

		::System::Void OnClickSendCircleEmoji(::System::Int32 emojiKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKSENDCIRCLEEMOJI_OFFSET))(this, emojiKey);
		}

		::System::Void CheckCircleAllowComm(::System::Action_1<::System::Boolean>* onCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CHECKCIRCLEALLOWCOMM_OFFSET))(this, onCallback);
		}

		::System::Void SwitchCircleShowTitleState(::System::Boolean willShowTitle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SWITCHCIRCLESHOWTITLESTATE_OFFSET))(this, willShowTitle);
		}

		::System::Void ShowCircleMessage(::System::Collections::Generic::IReadOnlyList_1<::Class_1_B1CC8F53861C28C2*>* msgList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_B1CC8F53861C28C2*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SHOWCIRCLEMESSAGE_OFFSET))(this, msgList);
		}

		::System::Void OnUpdateCircleHistoryMessage(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONUPDATECIRCLEHISTORYMESSAGE_OFFSET))(this, args);
		}

		::System::Void UpdateCircleNewMessages(::System::UInt32 circleUId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATECIRCLENEWMESSAGES_OFFSET))(this, circleUId);
		}

		::System::Void UpdateCircle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATECIRCLE_OFFSET))(this);
		}

		::System::Boolean CanProcess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CANPROCESS_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_RESET_OFFSET))(this);
		}

		::System::Void RefreshCircleHistoryMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_REFRESHCIRCLEHISTORYMESSAGES_OFFSET))(this);
		}

		::System::Void RefreshCircleNewMessages(::System::UInt32 circleUId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_REFRESHCIRCLENEWMESSAGES_OFFSET))(this, circleUId);
		}

		::System::Void InitScrollToBottom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_INITSCROLLTOBOTTOM_OFFSET))(this);
		}

		::System::Void StayNowPosition(::System::Int32 startIdx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_STAYNOWPOSITION_OFFSET))(this, startIdx);
		}

		::System::Void ForceScrollToBottom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_FORCESCROLLTOBOTTOM_OFFSET))(this);
		}

		::System::Void RefreshAllCircleMessages(::System::Collections::Generic::IReadOnlyList_1<::Class_1_B1CC8F53861C28C2*>* msgList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_B1CC8F53861C28C2*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_REFRESHALLCIRCLEMESSAGES_OFFSET))(this, msgList);
		}

		::System::Void OnScroll(::MonoUITableScrollV2_MoveContext moveContext, ::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_MoveContext, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONSCROLL_OFFSET))(this, moveContext, v);
		}

		::System::Void OnScrollEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONSCROLLEND_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* ShowEffect()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SHOWEFFECT_OFFSET))(this);
		}

		::System::Void FinishScroll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_FINISHSCROLL_OFFSET))(this);
		}

		::System::Void PlayVoice(::Class_1_9EDE5D0623B668B8* item)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9EDE5D0623B668B8*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_PLAYVOICE_OFFSET))(this, item);
		}

		::System::Void StopVoice()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_STOPVOICE_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONUIINIT_B__3_0_OFFSET))(this, args);
		}

		::System::Void _OnUIInit_b__3_1(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONUIINIT_B__3_1_OFFSET))(this, args);
		}

		::System::Void _OnClickSendFriendMsg_b__46_0(::System::Boolean isAllow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONCLICKSENDFRIENDMSG_B__46_0_OFFSET))(this, isAllow);
		}

		::System::Void _OnClickSendFriendMsg_g__SendMsg_46_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONCLICKSENDFRIENDMSG_G__SENDMSG_46_1_OFFSET))(this);
		}

		::System::Void _OnClickSendFriendMsg_b__46_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONCLICKSENDFRIENDMSG_B__46_3_OFFSET))(this);
		}

		::System::Void _InitEmptyCircleContent_b__77_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__INITEMPTYCIRCLECONTENT_B__77_0_OFFSET))(this);
		}

		::System::Void _OnClickSendCircleMsg_b__81_0(::System::Boolean isAllow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONCLICKSENDCIRCLEMSG_B__81_0_OFFSET))(this, isAllow);
		}

		::System::Void _OnClickSendCircleMsg_g__SendMsg_81_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONCLICKSENDCIRCLEMSG_G__SENDMSG_81_1_OFFSET))(this);
		}

		::System::Void _OnClickSendCircleMsg_b__81_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONCLICKSENDCIRCLEMSG_B__81_3_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
