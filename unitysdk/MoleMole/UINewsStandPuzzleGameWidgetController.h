#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_208CC9941471731A_609;
class Class_2_28BDF4B69EE93815;
class Class_3_77C2E8C726729ABF;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UINewsStandPuzzleGameContext; }
namespace MoleMole { class UINewsStandPuzzlePieceWidgetController; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_CHECKCOMPLETE_OFFSET UNITYSDK_OFFSET(0xA8441E0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_CHECKNEWBIE_OFFSET UNITYSDK_OFFSET(0xA8489F0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_GENFINISHREQ_OFFSET UNITYSDK_OFFSET(0xA846090)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_GET_CHAPTERS_OFFSET UNITYSDK_OFFSET(0xA8423F0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_GET_CURRENTCHAPTER_OFFSET UNITYSDK_OFFSET(0xA842330)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_GET_ISCURCHAPTERCOMPLETE_OFFSET UNITYSDK_OFFSET(0xA846830)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_GET_PRESSEDCOLOR_OFFSET UNITYSDK_OFFSET(0xA842400)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_INITCHAPTERVIEW_OFFSET UNITYSDK_OFFSET(0xA848770)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_INITCURCHAPTERPIECES_OFFSET UNITYSDK_OFFSET(0xA846FB0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_INITDATA_OFFSET UNITYSDK_OFFSET(0xA842A00)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xA844CC0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONCONSOLEMOVING_OFFSET UNITYSDK_OFFSET(0xA844870)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA843090)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONDRAG_OFFSET UNITYSDK_OFFSET(0xA845150)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xA845710)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0xA843390)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xA843790)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xA843940)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONPREPAREHIDE_OFFSET UNITYSDK_OFFSET(0xA843130)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xA842880)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA8436B0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA8424C0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA8427D0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_REFRESHROWONWIN_OFFSET UNITYSDK_OFFSET(0xA849000)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_REFRESHTAB_OFFSET UNITYSDK_OFFSET(0xA8487F0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_RESETCHAPTERCACHE_OFFSET UNITYSDK_OFFSET(0xA8469D0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_SELECTWIDGET_OFFSET UNITYSDK_OFFSET(0xA843C80)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_SENDFINISHONCLOSE_OFFSET UNITYSDK_OFFSET(0xA845C50)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_SENDFINISH_OFFSET UNITYSDK_OFFSET(0xA845EF0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_STOPSELECTFORCONSOLE_OFFSET UNITYSDK_OFFSET(0xA843840)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_SWAPPIECES_OFFSET UNITYSDK_OFFSET(0xA844910)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_TOGGLECHAPTER_OFFSET UNITYSDK_OFFSET(0xA848C80)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_TOGGLEPREVIEW_OFFSET UNITYSDK_OFFSET(0xA843440)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA8490F0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER__ONUIINIT_B__24_0_OFFSET UNITYSDK_OFFSET(0xA849120)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER__ONUIINIT_B__24_1_OFFSET UNITYSDK_OFFSET(0xA849130)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER__ONUIINIT_B__24_2_OFFSET UNITYSDK_OFFSET(0xA849140)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER__ONUIINIT_B__24_3_OFFSET UNITYSDK_OFFSET(0xA849150)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER__ONUIINIT_B__24_4_OFFSET UNITYSDK_OFFSET(0xA849220)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA849470)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0xA8494E0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xA849540)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xA849570)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONPREPAREHIDE_OFFSET UNITYSDK_OFFSET(0xA8495D0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xA849630)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA8496A0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA849720)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA849780)

namespace MoleMole
{
	inline static constexpr unsigned int UINewsStandPuzzleGameWidgetController_TypeDefinitionIndex = 70480;

	class UINewsStandPuzzleGameWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::String* PIC_NUM; // 0x0
		// static const ::System::String* FINISH_ANIM; // 0x0
		::Class_2_28BDF4B69EE93815* _view; // 0x2A0
		::MoleMole::UINewsStandPuzzleGameContext* _context; // 0x2A8
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_609*>* chapters; // 0x2B0
		::System::Int32 currentChapterIdx; // 0x2B8
		::System::Int32 currentSize; // 0x2BC
		::System::Collections::Generic::List_1<::MoleMole::UINewsStandPuzzlePieceWidgetController*>* pieceWidgets; // 0x2C0
		::System::Int32 curSelectedPiece; // 0x2C8
		::Il2CppArray<::System::Int64>* startTime; // 0x2D0
		::Il2CppArray<::System::Int64>* duration; // 0x2D8
		::Il2CppArray<::System::Int32>* moveCount; // 0x2E0
		::Il2CppArray<::System::Int32>* previewCount; // 0x2E8
		::System::Boolean isPreviewing; // 0x2F0
		::MoleMole::UINewsStandPuzzlePieceWidgetController* dragPiece; // 0x2F8
		::MoleMole::UINewsStandPuzzlePieceWidgetController* hoverPiece; // 0x300
		::Foundation::Coroutine::CoroutineHandle _dragCoroutine; // 0x308
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* curShuffles; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_CurrentChapter()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_GET_CURRENTCHAPTER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_609*>* get_Chapters()
		{
			return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_609*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_GET_CHAPTERS_OFFSET))(this);
		}

		::UnityEngine::Color get_PressedColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_GET_PRESSEDCOLOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnPrepareHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONPREPAREHIDE_OFFSET))(this);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Boolean StopSelectForConsole()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_STOPSELECTFORCONSOLE_OFFSET))(this);
		}

		::System::Void SelectWidget(::System::Int32 r, ::System::Int32 c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_SELECTWIDGET_OFFSET))(this, r, c);
		}

		::System::Void OnBeginDrag(::MoleMole::UINewsStandPuzzlePieceWidgetController* cur, ::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 worldPoint)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UINewsStandPuzzlePieceWidgetController*, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONBEGINDRAG_OFFSET))(this, cur, eventData, worldPoint);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 delta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONDRAG_OFFSET))(this, eventData, delta);
		}

		::System::Void OnEndDrag(::MoleMole::UINewsStandPuzzlePieceWidgetController* start, ::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 worldPoint)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UINewsStandPuzzlePieceWidgetController*, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONENDDRAG_OFFSET))(this, start, eventData, worldPoint);
		}

		::System::Void SendFinishOnClose(::System::Action* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_SENDFINISHONCLOSE_OFFSET))(this, cb);
		}

		::System::Void SendFinish(::System::Action* cb, ::System::Action* errorCb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_SENDFINISH_OFFSET))(this, cb, errorCb);
		}

		::System::Boolean get_IsCurChapterComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_GET_ISCURCHAPTERCOMPLETE_OFFSET))(this);
		}

		::System::Void InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_INITDATA_OFFSET))(this);
		}

		::System::Void ResetChapterCache(::System::Int32 chapterId, ::System::Boolean isResetBtn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_RESETCHAPTERCACHE_OFFSET))(this, chapterId, isResetBtn);
		}

		::System::Void InitCurChapterPieces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_INITCURCHAPTERPIECES_OFFSET))(this);
		}

		::System::Void InitChapterView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_INITCHAPTERVIEW_OFFSET))(this);
		}

		::System::Void CheckNewbie()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_CHECKNEWBIE_OFFSET))(this);
		}

		::System::Void RefreshTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_REFRESHTAB_OFFSET))(this);
		}

		::System::Void ToggleChapter(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_TOGGLECHAPTER_OFFSET))(this, idx);
		}

		::System::Void SwapPieces(::System::Int32 r1, ::System::Int32 c1, ::System::Int32 r2, ::System::Int32 c2, ::System::Boolean needAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_SWAPPIECES_OFFSET))(this, r1, c1, r2, c2, needAnim);
		}

		::System::Void CheckComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_CHECKCOMPLETE_OFFSET))(this);
		}

		::System::Void RefreshRowOnWin(::System::Int32 row)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_REFRESHROWONWIN_OFFSET))(this, row);
		}

		::System::Void TogglePreview(::System::Boolean isPreview)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_TOGGLEPREVIEW_OFFSET))(this, isPreview);
		}

		::Class_3_77C2E8C726729ABF* GenFinishReq()
		{
			return ((::Class_3_77C2E8C726729ABF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_GENFINISHREQ_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* OnConsoleMoving()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONCONSOLEMOVING_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__24_0(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER__ONUIINIT_B__24_0_OFFSET))(this, idx);
		}

		::System::Void _OnUIInit_b__24_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER__ONUIINIT_B__24_1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__24_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER__ONUIINIT_B__24_2_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__24_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER__ONUIINIT_B__24_3_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__24_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER__ONUIINIT_B__24_4_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnPrepareHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONPREPAREHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
