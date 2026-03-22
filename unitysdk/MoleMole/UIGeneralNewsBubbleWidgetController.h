#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_B217E80D53CC97F0.h"
#include "unitysdk/MoleMole/BubbleType.h"
#include "unitysdk/MoleMole/UIGeneralNewsBubbleWidgetController_SlotLockType.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_505B5FA4B3E563E4;
class Class_2_60638234271CCDB8_24;
class NewsBubbleParam;
namespace MoleMole { class UIBubbleTips; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole { class UIGeneralNewsBubbleWidgetController_NewsBubbleState; }
namespace MoleMole::Config { class UIBubbleMoveConfig; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ADDBUBBLETIP_OFFSET UNITYSDK_OFFSET(0xD577E60)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ADDSLOTLOCK_OFFSET UNITYSDK_OFFSET(0xD57E940)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ADDSTATE_OFFSET UNITYSDK_OFFSET(0xD575D70)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_CHANGESTATE_OFFSET UNITYSDK_OFFSET(0xD575E70)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_CHECKANDDOMOVE_OFFSET UNITYSDK_OFFSET(0xD57A3B0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_CHECKCANFADE_OFFSET UNITYSDK_OFFSET(0xD579850)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_CHECKCANMOVE_OFFSET UNITYSDK_OFFSET(0xD579460)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_CHECKWAITBUBBLE_OFFSET UNITYSDK_OFFSET(0xD57D740)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_CLOSEALLBUBBLES_OFFSET UNITYSDK_OFFSET(0xD57AEF0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_CREATEROW_OFFSET UNITYSDK_OFFSET(0xD57D890)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_DELAYSHOWCONTAINSGROUP_OFFSET UNITYSDK_OFFSET(0xD57E240)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_DOMOVE_OFFSET UNITYSDK_OFFSET(0xD5795D0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_DOPLAYSTARTANIM_OFFSET UNITYSDK_OFFSET(0xD579DE0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_FINISHBUBBLEGROUP_OFFSET UNITYSDK_OFFSET(0xD57B860)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GETCURRENTSHOWMAP_OFFSET UNITYSDK_OFFSET(0xD579300)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GETFADEINTIPS_OFFSET UNITYSDK_OFFSET(0xD57C1E0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GETGROUP_OFFSET UNITYSDK_OFFSET(0xD57D100)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GETSHOWINGTIP_OFFSET UNITYSDK_OFFSET(0xD57A5C0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GETTIPBYID_OFFSET UNITYSDK_OFFSET(0xD57BFF0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GETWIDGETBYGROUPID_OFFSET UNITYSDK_OFFSET(0xD57CF50)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GET_GETCURRENTSHOWLIST_OFFSET UNITYSDK_OFFSET(0xD57EAD0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GET_MAXSHOWCOUNT_OFFSET UNITYSDK_OFFSET(0xD576440)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GET_WIDGETSTATE_OFFSET UNITYSDK_OFFSET(0xD575BB0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xD575BA0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_HANDLESOUNDGROUP_OFFSET UNITYSDK_OFFSET(0xD57E380)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_HASANYTIPEXCLUDECTRL_OFFSET UNITYSDK_OFFSET(0xD57A7A0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_HASTIPID_OFFSET UNITYSDK_OFFSET(0xD57AA10)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_HASWAITTIPUI_OFFSET UNITYSDK_OFFSET(0xD577240)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_INITSTATEMAP_OFFSET UNITYSDK_OFFSET(0xD575BE0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_INTERRUPTTIPID_OFFSET UNITYSDK_OFFSET(0xD577050)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_INTERRUPT_OFFSET UNITYSDK_OFFSET(0xD57C3E0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ISININTERVAL_OFFSET UNITYSDK_OFFSET(0xD57DBC0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONCLOSEFAIRYTIP_OFFSET UNITYSDK_OFFSET(0xD576F70)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD576450)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONHIDEMIDDLETIP_OFFSET UNITYSDK_OFFSET(0xD576750)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0xD576CC0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONLOADINGFINISH_OFFSET UNITYSDK_OFFSET(0xD5767C0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONMIDDLETIPSSHOW_OFFSET UNITYSDK_OFFSET(0xD5766E0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONNOTIFYFADEINFINISH_OFFSET UNITYSDK_OFFSET(0xD5793E0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONNOTIFYFADEOUTFINISH_OFFSET UNITYSDK_OFFSET(0xD57A0C0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONNOTIFYMOVEFINISH_OFFSET UNITYSDK_OFFSET(0xD5797D0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONPAUSENEWSBUBBLE_OFFSET UNITYSDK_OFFSET(0xD576E90)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONRESUMENEWSBUBBLE_OFFSET UNITYSDK_OFFSET(0xD576F00)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONSLOTCOUNTCHANGED_OFFSET UNITYSDK_OFFSET(0xD57EA60)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD5764F0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD575FD0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD576AC0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_PAUSEBUBBLEGROUP_OFFSET UNITYSDK_OFFSET(0xD57CA20)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_REALADDBUBBLETIP_OFFSET UNITYSDK_OFFSET(0xD578FB0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_REGISTERNEWBUBBLE_OFFSET UNITYSDK_OFFSET(0xD57D190)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_REMOVESLOTLOCK_OFFSET UNITYSDK_OFFSET(0xD57E9D0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_RESETALLOVERRIDECANVAS_OFFSET UNITYSDK_OFFSET(0xD57BB10)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_RESUMEBUBBLEGROUP_OFFSET UNITYSDK_OFFSET(0xD57C550)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_SORTBUBBLEROW_OFFSET UNITYSDK_OFFSET(0xD579E60)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_SORTBUBBLES_OFFSET UNITYSDK_OFFSET(0xD579C50)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_TESTSORTBUBBLE_OFFSET UNITYSDK_OFFSET(0xD579BE0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_TRIGGERFADE_OFFSET UNITYSDK_OFFSET(0xD579960)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_TRYADDBUBBLETIP_OFFSET UNITYSDK_OFFSET(0xD57DD00)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_TRYGETLRUNEWSBUBBLEROW_OFFSET UNITYSDK_OFFSET(0xD57DF40)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_TRYHANDLEWAITTIPS_OFFSET UNITYSDK_OFFSET(0xD576830)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_TRYSETTIPEXTRADATA_OFFSET UNITYSDK_OFFSET(0xD57BD60)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_UNREGNEWSBUBBLE_OFFSET UNITYSDK_OFFSET(0xD57CD90)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0xD578270)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xD577690)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_WAITSHOWLIST_OFFSET UNITYSDK_OFFSET(0xD579370)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD57EB30)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER__ONUIOPEN_B__20_0_OFFSET UNITYSDK_OFFSET(0xD57EFC0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER__ONUIOPEN_B__20_1_OFFSET UNITYSDK_OFFSET(0xD57F3D0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER__ONUIOPEN_B__20_2_OFFSET UNITYSDK_OFFSET(0xD57F5A0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER__ONUIOPEN_B__20_3_OFFSET UNITYSDK_OFFSET(0xD57F710)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD57F740)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0xD57F7B0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD57F810)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD57F820)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD57F830)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleWidgetController_TypeDefinitionIndex = 75072;

	class UIGeneralNewsBubbleWidgetController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Int32 MAX_SHOW = 0x3; // 0x0
		::MoleMole::Config::UIBubbleMoveConfig* moveConfig; // 0x2F8
		::System::Boolean IsInNewbie; // 0x300
		::MoleMole::UIGeneralNewsBubbleWidgetController_NewsBubbleState* CurrentState; // 0x308
		::System::Collections::Generic::Dictionary_2<::Enum_3_B217E80D53CC97F0, ::MoleMole::UIGeneralNewsBubbleWidgetController_NewsBubbleState*>* StateMap; // 0x310
		::NewsBubbleParam* bubbleParam; // 0x318
		::System::Collections::Generic::List_1<::MoleMole::UIBubbleTips*>* _waitTips; // 0x320
		::Class_2_60638234271CCDB8_24* _view; // 0x328
		::System::Collections::Generic::List_1<::System::Int32>* _tmpRemoveType; // 0x330
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*>* _currentShow; // 0x338
		::System::Boolean needWait; // 0x340
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* _tipAddTime; // 0x348
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* _groupUpdateTime; // 0x350
		::System::Collections::Generic::List_1<::MoleMole::UIBubbleTips*>* _delayShow; // 0x358
		::System::Collections::Generic::List_1<::MoleMole::UIBubbleTips*>* _waitShow; // 0x360
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::UIBubbleTips*>*>* _delayShowGroup; // 0x368
		::System::Collections::Generic::Stack_1<::MoleMole::UIGeneralNewsBubbleRowWidgetController*>* _preloadList; // 0x370
		::System::Int32 pinedSlotCount; // 0x378
		::MoleMole::UIGeneralNewsBubbleWidgetController_SlotLockType pinedSlot; // 0x37C
		::System::Collections::Generic::List_1<::MoleMole::UIBubbleTips*>* waitSoundTips; // 0x380
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralNewsBubbleRowWidgetController*>* _tmpShowList; // 0x388

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_B217E80D53CC97F0 get_WidgetState()
		{
			return ((::Enum_3_B217E80D53CC97F0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GET_WIDGETSTATE_OFFSET))(this);
		}

		::System::Void InitStateMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_INITSTATEMAP_OFFSET))(this);
		}

		::System::Void AddState(::MoleMole::UIGeneralNewsBubbleWidgetController_NewsBubbleState* state)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleWidgetController_NewsBubbleState*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ADDSTATE_OFFSET))(this, state);
		}

		::System::Void ChangeState(::Enum_3_B217E80D53CC97F0 state)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_B217E80D53CC97F0))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_CHANGESTATE_OFFSET))(this, state);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnMiddleTipsShow(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONMIDDLETIPSSHOW_OFFSET))(this, args);
		}

		::System::Void OnHideMiddleTip(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONHIDEMIDDLETIP_OFFSET))(this, args);
		}

		::System::Void OnLoadingFinish(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONLOADINGFINISH_OFFSET))(this, args);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnPauseNewsBubble(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONPAUSENEWSBUBBLE_OFFSET))(this, args);
		}

		::System::Void OnResumeNewsBubble(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONRESUMENEWSBUBBLE_OFFSET))(this, args);
		}

		::System::Void OnCloseFairyTip(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONCLOSEFAIRYTIP_OFFSET))(this, args);
		}

		::System::Boolean HasWaitTipUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_HASWAITTIPUI_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*>* GetCurrentShowMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GETCURRENTSHOWMAP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIBubbleTips*>* WaitShowList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIBubbleTips*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_WAITSHOWLIST_OFFSET))(this);
		}

		::System::Void TryHandleWaitTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_TRYHANDLEWAITTIPS_OFFSET))(this);
		}

		::System::Void OnNotifyFadeInFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONNOTIFYFADEINFINISH_OFFSET))(this);
		}

		::System::Void OnNotifyMoveFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONNOTIFYMOVEFINISH_OFFSET))(this);
		}

		::System::Void TestSortBubble()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_TESTSORTBUBBLE_OFFSET))(this);
		}

		::System::Void TriggerFade()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_TRIGGERFADE_OFFSET))(this);
		}

		::System::Int32 SortBubbleRow(::MoleMole::UIGeneralNewsBubbleRowWidgetController* a, ::MoleMole::UIGeneralNewsBubbleRowWidgetController* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_SORTBUBBLEROW_OFFSET))(this, a, b);
		}

		::System::Void OnNotifyFadeOutFinish(::MoleMole::UIGeneralNewsBubbleRowWidgetController* bubbleCtrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONNOTIFYFADEOUTFINISH_OFFSET))(this, bubbleCtrl);
		}

		::System::Void UpdatePosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_UPDATEPOSITION_OFFSET))(this);
		}

		::MoleMole::UIBubbleTips* GetShowingTip(::System::Int32 tipid)
		{
			return ((::MoleMole::UIBubbleTips*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GETSHOWINGTIP_OFFSET))(this, tipid);
		}

		::System::Boolean HasAnyTipExcludeCtrl(::MoleMole::UIGeneralNewsBubbleRowWidgetController* excludeCtrl)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_HASANYTIPEXCLUDECTRL_OFFSET))(this, excludeCtrl);
		}

		::System::Boolean HasTipID(::System::Int32 tipid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_HASTIPID_OFFSET))(this, tipid);
		}

		::System::Void CloseAllBubbles(::System::Boolean containTimeUp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_CLOSEALLBUBBLES_OFFSET))(this, containTimeUp);
		}

		::System::Void ResetAllOverrideCanvas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_RESETALLOVERRIDECANVAS_OFFSET))(this);
		}

		::System::Boolean TrySetTipExtraData(::System::Int32 targetTipID, ::Class_1_505B5FA4B3E563E4* extra)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_505B5FA4B3E563E4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_TRYSETTIPEXTRADATA_OFFSET))(this, targetTipID, extra);
		}

		::MoleMole::UIGeneralNewsBubbleRowWidgetController* GetTipByID(::System::Int32 tipid)
		{
			return ((::MoleMole::UIGeneralNewsBubbleRowWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GETTIPBYID_OFFSET))(this, tipid);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIGeneralNewsBubbleRowWidgetController*>* GetFadeInTips()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIGeneralNewsBubbleRowWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GETFADEINTIPS_OFFSET))(this);
		}

		::System::Void InterruptTipID(::System::Int32 tipid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_INTERRUPTTIPID_OFFSET))(this, tipid);
		}

		::System::Void Interrupt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_INTERRUPT_OFFSET))(this);
		}

		::System::Void ResumeBubbleGroup(::MoleMole::UIGeneralNewsBubbleRowWidgetController* ctrl, ::System::Boolean useSort)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_RESUMEBUBBLEGROUP_OFFSET))(this, ctrl, useSort);
		}

		::System::Void PauseBubbleGroup(::MoleMole::UIGeneralNewsBubbleRowWidgetController* ctrl, ::System::Boolean useSort)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_PAUSEBUBBLEGROUP_OFFSET))(this, ctrl, useSort);
		}

		::System::Void FinishBubbleGroup(::MoleMole::UIGeneralNewsBubbleRowWidgetController* ctrl, ::System::Boolean force, ::System::Boolean forceFadeReal)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_FINISHBUBBLEGROUP_OFFSET))(this, ctrl, force, forceFadeReal);
		}

		::System::Void UnRegNewsBubble(::MoleMole::UIGeneralNewsBubbleRowWidgetController* bubbleCtrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_UNREGNEWSBUBBLE_OFFSET))(this, bubbleCtrl);
		}

		::MoleMole::UIGeneralNewsBubbleRowWidgetController* GetWidgetByGroupID(::MoleMole::BubbleType type, ::System::Int32 groupId)
		{
			return ((::MoleMole::UIGeneralNewsBubbleRowWidgetController*(*)(::PVOID, ::MoleMole::BubbleType, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GETWIDGETBYGROUPID_OFFSET))(this, type, groupId);
		}

		::System::Void RegisterNewBubble(::MoleMole::UIGeneralNewsBubbleRowWidgetController* bubbleCtrl, ::MoleMole::BubbleType type, ::System::Int32 groupId, ::System::Nullable_1<::System::Int32> overrideGroup)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*, ::MoleMole::BubbleType, ::System::Int32, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_REGISTERNEWBUBBLE_OFFSET))(this, bubbleCtrl, type, groupId, overrideGroup);
		}

		::System::Void CheckWaitBubble()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_CHECKWAITBUBBLE_OFFSET))(this);
		}

		::System::Int32 GetGroup(::MoleMole::BubbleType type, ::System::Int32 group, ::System::Nullable_1<::System::Int32> overrideGroup)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::BubbleType, ::System::Int32, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GETGROUP_OFFSET))(this, type, group, overrideGroup);
		}

		::System::Void DoPlayStartAnim(::MoleMole::UIGeneralNewsBubbleRowWidgetController* bubbleCtrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_DOPLAYSTARTANIM_OFFSET))(this, bubbleCtrl);
		}

		::System::Boolean CheckCanMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_CHECKCANMOVE_OFFSET))(this);
		}

		::System::Boolean CheckCanFade()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_CHECKCANFADE_OFFSET))(this);
		}

		::System::Boolean CheckAndDoMove(::System::Collections::Generic::List_1<::MoleMole::UIGeneralNewsBubbleRowWidgetController*>* list)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIGeneralNewsBubbleRowWidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_CHECKANDDOMOVE_OFFSET))(this, list);
		}

		::System::Void SortBubbles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_SORTBUBBLES_OFFSET))(this);
		}

		::System::Boolean DoMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_DOMOVE_OFFSET))(this);
		}

		::MoleMole::UIGeneralNewsBubbleRowWidgetController* CreateRow(::System::Int32 group)
		{
			return ((::MoleMole::UIGeneralNewsBubbleRowWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_CREATEROW_OFFSET))(this, group);
		}

		::System::Boolean IsInInterval(::System::Int32 tipid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ISININTERVAL_OFFSET))(this, tipid);
		}

		::System::Void TryAddBubbleTip(::MoleMole::UIBubbleTips* tip)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBubbleTips*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_TRYADDBUBBLETIP_OFFSET))(this, tip);
		}

		::System::Void AddBubbleTip(::MoleMole::UIBubbleTips* tip)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBubbleTips*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ADDBUBBLETIP_OFFSET))(this, tip);
		}

		::System::Boolean DelayShowContainsGroup(::System::Int32 groupID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_DELAYSHOWCONTAINSGROUP_OFFSET))(this, groupID);
		}

		::System::Boolean HandleSoundGroup(::MoleMole::UIBubbleTips* tip)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIBubbleTips*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_HANDLESOUNDGROUP_OFFSET))(this, tip);
		}

		::System::Void RealAddBubbleTip(::MoleMole::UIBubbleTips* tip, ::System::Boolean checkSound)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBubbleTips*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_REALADDBUBBLETIP_OFFSET))(this, tip, checkSound);
		}

		::MoleMole::UIGeneralNewsBubbleRowWidgetController* TryGetLRUNewsBubbleRow()
		{
			return ((::MoleMole::UIGeneralNewsBubbleRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_TRYGETLRUNEWSBUBBLEROW_OFFSET))(this);
		}

		::System::Void AddSlotLock(::MoleMole::UIGeneralNewsBubbleWidgetController_SlotLockType type)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleWidgetController_SlotLockType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ADDSLOTLOCK_OFFSET))(this, type);
		}

		::System::Void RemoveSlotLock(::MoleMole::UIGeneralNewsBubbleWidgetController_SlotLockType type)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleWidgetController_SlotLockType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_REMOVESLOTLOCK_OFFSET))(this, type);
		}

		::System::Void OnSlotCountChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONSLOTCOUNTCHANGED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIGeneralNewsBubbleRowWidgetController*>* get_GetCurrentShowList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIGeneralNewsBubbleRowWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GET_GETCURRENTSHOWLIST_OFFSET))(this);
		}

		::System::Int32 get_maxShowCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GET_MAXSHOWCOUNT_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__20_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER__ONUIOPEN_B__20_0_OFFSET))(this, args);
		}

		::System::Void _OnUIOpen_b__20_1(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER__ONUIOPEN_B__20_1_OFFSET))(this, args);
		}

		::System::Void _OnUIOpen_b__20_2(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER__ONUIOPEN_B__20_2_OFFSET))(this, args);
		}

		::System::Void _OnUIOpen_b__20_3(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER__ONUIOPEN_B__20_3_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
