#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_5FBF9D5FD9B3F459;
class Class_2_79F6D62CE30E3F8E_19;
class Class_2_A8F5ABF31E066ED4;
class Class_2_EC5A7AD641CF932C;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralNewsBubbleWidgetController; }
namespace MoleMole { class UIQuestionsAnswerCardItemRowWidgetController; }
namespace MoleMole { class UIQuestionsAnswerChatPlayContext; }
namespace MoleMole { class UIQuestionsAnswerChatPlayWidgetController; }
namespace MoleMole { class UIQuestionsAnswerPageController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections { class IList; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ACTIVEBUFF_CONVERTTEXT_OFFSET UNITYSDK_OFFSET(0xBE85380)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ACTIVEBUFF_CORRECTOPTION_OFFSET UNITYSDK_OFFSET(0xBE85AF0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ACTIVEBUFF_EXADDHP_OFFSET UNITYSDK_OFFSET(0xBE867D0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ACTIVEBUFF_EXSCORE_OFFSET UNITYSDK_OFFSET(0xBE863A0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_BEFORESTAGENPC_OFFSET UNITYSDK_OFFSET(0xBE82C70)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CANACTIVEBUFF_CONVERTTEXT_OFFSET UNITYSDK_OFFSET(0xBE84EC0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CANACTIVEBUFF_CORRECTOPTION_OFFSET UNITYSDK_OFFSET(0xBE85180)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CANACTIVEBUFF_EXADDHP_OFFSET UNITYSDK_OFFSET(0xBE85300)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CANACTIVEBUFF_EXSCORE_OFFSET UNITYSDK_OFFSET(0xBE85280)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CANACTIVEBUFF_OFFSET UNITYSDK_OFFSET(0xBE84470)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CANCEL_OFFSET UNITYSDK_OFFSET(0xBE82700)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CHECKCHATFINISH_OFFSET UNITYSDK_OFFSET(0xBE82F00)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CREATEUIQUESTIONSANSWERCARDITEMROWWIDGETCONTROLLER_OFFSET UNITYSDK_OFFSET(0xBE80AF0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CREATEUIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_OFFSET UNITYSDK_OFFSET(0xBE80BD0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ENABLECHEETBUTTON_OFFSET UNITYSDK_OFFSET(0xBE80D00)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_FADEOUTEMOJI_OFFSET UNITYSDK_OFFSET(0xBE882B0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GETBUFFTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xBE80DC0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GETBUFFVIEW_OFFSET UNITYSDK_OFFSET(0xBE80E30)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GETENDBLACKTEXT_OFFSET UNITYSDK_OFFSET(0xBE82B10)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GETFAILBLACKTEXT_OFFSET UNITYSDK_OFFSET(0xBE82A80)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GETHPCOLOR_OFFSET UNITYSDK_OFFSET(0xBE83180)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GETSTARTBLACKTEXT_OFFSET UNITYSDK_OFFSET(0xBE80F70)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GET_ENDING_OFFSET UNITYSDK_OFFSET(0xBE810B0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GET_PARENTCONTROLLER_OFFSET UNITYSDK_OFFSET(0xBE81010)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GET_PLAYING_OFFSET UNITYSDK_OFFSET(0xBE81090)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_HIDEEMOJI_OFFSET UNITYSDK_OFFSET(0xBE88230)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_HIDEFAIRY_OFFSET UNITYSDK_OFFSET(0xBE81CC0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_INITBUFFSTATE_OFFSET UNITYSDK_OFFSET(0xBE83600)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ISBLACKSCREEN_OFFSET UNITYSDK_OFFSET(0xBE883C0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_LOADSCOREIMAGE_OFFSET UNITYSDK_OFFSET(0xBE841A0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_NARRATORPREDICATE_OFFSET UNITYSDK_OFFSET(0xBE88980)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_OBBACKCALLBACK_OFFSET UNITYSDK_OFFSET(0xBE86D70)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONCHATFINISH_OFFSET UNITYSDK_OFFSET(0xBE82F70)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONCHEATSHEETCALLBACK_OFFSET UNITYSDK_OFFSET(0xBE87010)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONCLICKNARRATORCALLBACK_OFFSET UNITYSDK_OFFSET(0xBE86D00)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBE818E0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0xBE81980)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONRESTARTCALLBACK_OFFSET UNITYSDK_OFFSET(0xBE86EC0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xBE81830)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xBE81D30)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBE81F70)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBE810D0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBE81780)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_PREPARESTARTGAME_OFFSET UNITYSDK_OFFSET(0xBE82990)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_REFRESHBUFFLEFTCOUNT_OFFSET UNITYSDK_OFFSET(0xBE84A00)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_REFRESHBUFFSTATE_OFFSET UNITYSDK_OFFSET(0xBE84B50)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_RESETBUFFLEFTCOUNT_OFFSET UNITYSDK_OFFSET(0xBE84D00)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_RESETBUFFSTATE_OFFSET UNITYSDK_OFFSET(0xBE84DC0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SETCURRENTSCORE_OFFSET UNITYSDK_OFFSET(0xBE83D70)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SETHP_OFFSET UNITYSDK_OFFSET(0xBE832B0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SETMAXHP_OFFSET UNITYSDK_OFFSET(0xBE82FF0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SETMAXSCORE_OFFSET UNITYSDK_OFFSET(0xBE840C0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SETPLAYBLACKSCREEN_OFFSET UNITYSDK_OFFSET(0xBE884F0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SETSCORETEXT_OFFSET UNITYSDK_OFFSET(0xBE83E50)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SET_ENDING_OFFSET UNITYSDK_OFFSET(0xBE810C0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SET_PLAYING_OFFSET UNITYSDK_OFFSET(0xBE810A0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SHOWEMOJI_OFFSET UNITYSDK_OFFSET(0xBE87C80)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SHOWERRORFAIRY_OFFSET UNITYSDK_OFFSET(0xBE877D0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SHOWFAIRY_OFFSET UNITYSDK_OFFSET(0xBE86C00)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_STARTGAME_OFFSET UNITYSDK_OFFSET(0xBE82BB0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_STARTSCOREDOTWEEN_OFFSET UNITYSDK_OFFSET(0xBE871B0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_TRYACTIVEBUFF_OFFSET UNITYSDK_OFFSET(0xBE84650)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_TRYNEXTNPC_OFFSET UNITYSDK_OFFSET(0xBE82D30)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_TRYTRIGGERBUFF_OFFSET UNITYSDK_OFFSET(0xBE84260)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_UPDATEEMOJIPOS_OFFSET UNITYSDK_OFFSET(0xBE82410)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xBE82070)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_WAITBLACKSCREENCLICK_OFFSET UNITYSDK_OFFSET(0xBE88800)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_WAITBLACKSCREENFADEOUT_OFFSET UNITYSDK_OFFSET(0xBE888C0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_WAITCHAT_OFFSET UNITYSDK_OFFSET(0xBE82E30)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_WAITCLICKCONTINUEBTN_OFFSET UNITYSDK_OFFSET(0xBE87BC0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_WAITPLAYBLACKSCREENTEXT_OFFSET UNITYSDK_OFFSET(0xBE88740)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_WAITPLAYBLACKSCREEN_OFFSET UNITYSDK_OFFSET(0xBE88430)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBE80830)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__OBBACKCALLBACK_B__87_0_OFFSET UNITYSDK_OFFSET(0xBE88BA0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__OBBACKCALLBACK_B__87_1_OFFSET UNITYSDK_OFFSET(0xBE88DE0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__ONRESTARTCALLBACK_B__88_0_OFFSET UNITYSDK_OFFSET(0xBE88F10)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__ONRESTARTCALLBACK_B__88_1_OFFSET UNITYSDK_OFFSET(0xBE89150)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__SETCURRENTSCORE_B__67_0_OFFSET UNITYSDK_OFFSET(0xBE889F0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__SETMAXSCORE_B__68_0_OFFSET UNITYSDK_OFFSET(0xBE88B20)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBE892A0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0xBE89310)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xBE89370)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xBE893E0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBE893F0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBE89470)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBE894D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerWidgetController_TypeDefinitionIndex = 70192;

	class UIQuestionsAnswerWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::String* EMOJI_HAPPY; // 0x0
		// static const ::System::String* EMOJI_ANGRY; // 0x0
		::Class_2_79F6D62CE30E3F8E_19* _view; // 0x2A0
		::MoleMole::UIQuestionsAnswerChatPlayWidgetController* _chatPlayWidget; // 0x2A8
		::System::Boolean _chating; // 0x2B0
		::System::Int32 _selectIndex; // 0x2B4
		::Class_2_EC5A7AD641CF932C* _model; // 0x2B8
		::Class_2_5FBF9D5FD9B3F459* _gameModel; // 0x2C0
		::System::Threading::CancellationTokenSource* _cancellationToken; // 0x2C8
		::System::Collections::Generic::List_1<::MoleMole::UIQuestionsAnswerCardItemRowWidgetController*>* _skillWidgets; // 0x2D0
		::MoleMole::UIGeneralNewsBubbleWidgetController* _fairyWidget; // 0x2D8
		::System::Int32 _currentStageId; // 0x2E0
		::System::Int32 CurrentHp; // 0x2E4
		::System::Boolean _playing; // 0x2E8
		::System::Boolean _ending; // 0x2E9
		::DG::Tweening::Tween* _tween; // 0x2F0
		::Il2CppArray<::System::String*>* NumImagePath; // 0x2F8
		::System::Single _timer; // 0x300
		::System::Single _totalTime; // 0x304
		::System::Int32 _currentScore; // 0x308
		::System::Boolean _waitAnswering; // 0x30C
		::System::Single _exRage; // 0x310
		::System::Int32 _exAddHp; // 0x314
		::System::Int32 _exReduceHp; // 0x318
		::System::Boolean _blackscreen; // 0x31C
		::Il2CppArray<::System::Boolean>* _buffState; // 0x320
		::System::Collections::Generic::List_1<::System::Int32>* _buffIdList; // 0x328
		::Il2CppArray<::System::Int32>* _buffCount; // 0x330
		::UnityEngine::Vector3 _defaultEmojiPos; // 0x338
		::System::String* _soundLastState; // 0x348
		::System::UInt32 _currentVoicePendingId; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIQuestionsAnswerPageController* get_parentController()
		{
			return ((::MoleMole::UIQuestionsAnswerPageController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GET_PARENTCONTROLLER_OFFSET))(this);
		}

		::System::Boolean get_Playing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GET_PLAYING_OFFSET))(this);
		}

		::System::Void set_Playing(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SET_PLAYING_OFFSET))(this, value);
		}

		::System::Boolean get_Ending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GET_ENDING_OFFSET))(this);
		}

		::System::Void set_Ending(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SET_ENDING_OFFSET))(this, value);
		}

		::MoleMole::UIQuestionsAnswerChatPlayWidgetController* CreateUIQuestionsAnswerChatPlayWidgetController()
		{
			return ((::MoleMole::UIQuestionsAnswerChatPlayWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CREATEUIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_OFFSET))(this);
		}

		::MoleMole::UIQuestionsAnswerCardItemRowWidgetController* CreateUIQuestionsAnswerCardItemRowWidgetController()
		{
			return ((::MoleMole::UIQuestionsAnswerCardItemRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CREATEUIQUESTIONSANSWERCARDITEMROWWIDGETCONTROLLER_OFFSET))(this);
		}

		::System::Boolean EnableCheetButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ENABLECHEETBUTTON_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void Cancel(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CANCEL_OFFSET))(this, callback);
		}

		::Cysharp::Threading::Tasks::UniTask PrepareStartGame(::System::Int32 stageId)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_PREPARESTARTGAME_OFFSET))(this, stageId);
		}

		::System::String* GetStartBlackText(::System::Int32 stageType)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GETSTARTBLACKTEXT_OFFSET))(this, stageType);
		}

		::System::String* GetFailBlackText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GETFAILBLACKTEXT_OFFSET))(this);
		}

		::System::String* GetEndBlackText(::System::Int32 stageType)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GETENDBLACKTEXT_OFFSET))(this, stageType);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid StartGame(::System::Int32 stageId, ::System::Boolean restart)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_STARTGAME_OFFSET))(this, stageId, restart);
		}

		::Cysharp::Threading::Tasks::UniTask BeforeStageNpc(::System::Int32 index)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_BEFORESTAGENPC_OFFSET))(this, index);
		}

		::Cysharp::Threading::Tasks::UniTask TryNextNpc(::System::Boolean skipScreen, ::System::Boolean firstNpc)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_TRYNEXTNPC_OFFSET))(this, skipScreen, firstNpc);
		}

		::Cysharp::Threading::Tasks::UniTask WaitChat(::MoleMole::UIQuestionsAnswerChatPlayContext* context)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::MoleMole::UIQuestionsAnswerChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_WAITCHAT_OFFSET))(this, context);
		}

		::System::Boolean CheckChatFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CHECKCHATFINISH_OFFSET))(this);
		}

		::System::Void OnChatFinish(::MoleMole::UIQuestionsAnswerChatPlayContext* obj)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIQuestionsAnswerChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONCHATFINISH_OFFSET))(this, obj);
		}

		::System::Void SetMaxHp(::System::Int32 max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SETMAXHP_OFFSET))(this, max);
		}

		::UnityEngine::Color GetHpColor(::System::Int32 hp)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GETHPCOLOR_OFFSET))(this, hp);
		}

		::System::Void SetHp(::System::Int32 hp, ::System::Boolean upanim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SETHP_OFFSET))(this, hp, upanim);
		}

		::MoleMole::UIQuestionsAnswerCardItemRowWidgetController* GetBuffView(::System::Int32 buffIndex)
		{
			return ((::MoleMole::UIQuestionsAnswerCardItemRowWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GETBUFFVIEW_OFFSET))(this, buffIndex);
		}

		::System::Int32 GetBuffTotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GETBUFFTOTALCOUNT_OFFSET))(this);
		}

		::System::Void InitBuffState(::System::Int32 stageId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_INITBUFFSTATE_OFFSET))(this, stageId);
		}

		::System::Void SetCurrentScore(::System::Int32 score)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SETCURRENTSCORE_OFFSET))(this, score);
		}

		::System::Void SetMaxScore(::System::Int32 score)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SETMAXSCORE_OFFSET))(this, score);
		}

		::System::Void LoadScoreImage(::Class_2_A8F5ABF31E066ED4* image, ::System::Int32 score)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A8F5ABF31E066ED4*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_LOADSCOREIMAGE_OFFSET))(this, image, score);
		}

		::System::Void SetScoreText(::System::Collections::IList* array, ::System::Int32 value, ::System::Action_2<::System::Int32, ::System::Int32>* setFunc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IList*, ::System::Int32, ::System::Action_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SETSCORETEXT_OFFSET))(this, array, value, setFunc);
		}

		::System::Void TryTriggerBuff(::System::Int32 buffIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_TRYTRIGGERBUFF_OFFSET))(this, buffIndex);
		}

		::System::Void RefreshBuffLeftCount(::System::Int32 buffIndex, ::System::Boolean isAdd, ::System::Boolean anim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_REFRESHBUFFLEFTCOUNT_OFFSET))(this, buffIndex, isAdd, anim);
		}

		::System::Void ResetBuffLeftCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_RESETBUFFLEFTCOUNT_OFFSET))(this);
		}

		::System::Void ResetBuffState(::System::Boolean anim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_RESETBUFFSTATE_OFFSET))(this, anim);
		}

		::System::Void RefreshBuffState(::System::Int32 buffIndex, ::System::Boolean active, ::System::Boolean anim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_REFRESHBUFFSTATE_OFFSET))(this, buffIndex, active, anim);
		}

		::System::Boolean CanActiveBuff(::System::Int32 buffIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CANACTIVEBUFF_OFFSET))(this, buffIndex);
		}

		::System::Void TryActiveBuff(::System::Int32 buffIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_TRYACTIVEBUFF_OFFSET))(this, buffIndex);
		}

		::System::Boolean CanActiveBuff_ConvertText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CANACTIVEBUFF_CONVERTTEXT_OFFSET))(this);
		}

		::System::Void ActiveBuff_ConvertText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ACTIVEBUFF_CONVERTTEXT_OFFSET))(this);
		}

		::System::Boolean CanActiveBuff_CorrectOption()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CANACTIVEBUFF_CORRECTOPTION_OFFSET))(this);
		}

		::System::Void ActiveBuff_CorrectOption()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ACTIVEBUFF_CORRECTOPTION_OFFSET))(this);
		}

		::System::Boolean CanActiveBuff_ExScore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CANACTIVEBUFF_EXSCORE_OFFSET))(this);
		}

		::System::Void ActiveBuff_ExScore(::System::Single exRate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ACTIVEBUFF_EXSCORE_OFFSET))(this, exRate);
		}

		::System::Boolean CanActiveBuff_ExAddHp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CANACTIVEBUFF_EXADDHP_OFFSET))(this);
		}

		::System::Void ActiveBuff_ExAddHp(::System::Int32 addHp, ::System::Int32 reduceHp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ACTIVEBUFF_EXADDHP_OFFSET))(this, addHp, reduceHp);
		}

		::System::Void OnClickNarratorCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONCLICKNARRATORCALLBACK_OFFSET))(this);
		}

		::System::Void ObBackCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_OBBACKCALLBACK_OFFSET))(this);
		}

		::System::Void OnRestartCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONRESTARTCALLBACK_OFFSET))(this);
		}

		::System::Void OnCheatSheetCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONCHEATSHEETCALLBACK_OFFSET))(this);
		}

		::System::Void StartScoreDoTween(::System::Int32 oldScore, ::System::Int32 target, ::System::Int32 doubleScoreFirstTarget)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_STARTSCOREDOTWEEN_OFFSET))(this, oldScore, target, doubleScoreFirstTarget);
		}

		::System::Void ShowFairy(::System::Int32 fairyId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SHOWFAIRY_OFFSET))(this, fairyId);
		}

		::System::Void ShowErrorFairy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SHOWERRORFAIRY_OFFSET))(this);
		}

		::System::Void HideFairy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_HIDEFAIRY_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask WaitClickContinueBtn()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_WAITCLICKCONTINUEBTN_OFFSET))(this);
		}

		::System::Void ShowEmoji(::System::Int32 npcTag, ::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SHOWEMOJI_OFFSET))(this, npcTag, path);
		}

		::System::Void FadeOutEmoji()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_FADEOUTEMOJI_OFFSET))(this);
		}

		::System::Void HideEmoji()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_HIDEEMOJI_OFFSET))(this);
		}

		::System::Void UpdateEmojiPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_UPDATEEMOJIPOS_OFFSET))(this);
		}

		::System::Boolean IsBlackScreen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ISBLACKSCREEN_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask WaitPlayBlackScreen()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_WAITPLAYBLACKSCREEN_OFFSET))(this);
		}

		::System::Void SetPlayBlackScreen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SETPLAYBLACKSCREEN_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask WaitPlayBlackScreenText(::System::String* textKey)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_WAITPLAYBLACKSCREENTEXT_OFFSET))(this, textKey);
		}

		::Cysharp::Threading::Tasks::UniTask WaitBlackscreenClick()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_WAITBLACKSCREENCLICK_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask WaitBlackscreenFadeOut()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_WAITBLACKSCREENFADEOUT_OFFSET))(this);
		}

		::System::Boolean NarratorPredicate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_NARRATORPREDICATE_OFFSET))(this);
		}

		::System::Void _SetCurrentScore_b__67_0(::System::Int32 index, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__SETCURRENTSCORE_B__67_0_OFFSET))(this, index, value);
		}

		::System::Void _SetMaxScore_b__68_0(::System::Int32 index, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__SETMAXSCORE_B__68_0_OFFSET))(this, index, value);
		}

		::System::Void _ObBackCallback_b__87_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__OBBACKCALLBACK_B__87_0_OFFSET))(this);
		}

		::System::Void _ObBackCallback_b__87_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__OBBACKCALLBACK_B__87_1_OFFSET))(this);
		}

		::System::Void _OnRestartCallback_b__88_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__ONRESTARTCALLBACK_B__88_0_OFFSET))(this);
		}

		::System::Void _OnRestartCallback_b__88_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__ONRESTARTCALLBACK_B__88_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
