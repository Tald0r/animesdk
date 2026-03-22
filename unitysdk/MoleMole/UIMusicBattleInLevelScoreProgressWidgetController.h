#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_69CBB7FF0BE6A673_26;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_ACTIVATEFEVER_OFFSET UNITYSDK_OFFSET(0x9E8BDF0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_INITSCOREWIDGET_OFFSET UNITYSDK_OFFSET(0x9E8B2E0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9E8B6B0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9E8B750)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x9E8B220)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_UPDATEFEVERDISPLAY_OFFSET UNITYSDK_OFFSET(0x9E8BBB0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_UPDATEFEVERPROGRESS_OFFSET UNITYSDK_OFFSET(0x9E8BD40)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_UPDATEFILLPROGRESSINTERNAL_OFFSET UNITYSDK_OFFSET(0x9E8B8C0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_UPDATEFILLPROGRESS_OFFSET UNITYSDK_OFFSET(0x9E8BC20)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9E8BF90)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9E8BFC0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9E8C030)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x9E8C0B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicBattleInLevelScoreProgressWidgetController_TypeDefinitionIndex = 56567;

	class UIMusicBattleInLevelScoreProgressWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_69CBB7FF0BE6A673_26* _view; // 0x2A0
		::UnityEngine::Vector2 _base; // 0x2A8
		::System::Single _length; // 0x2B0
		::Foundation::Coroutine::CoroutineHandle _waitFeverOver; // 0x2B4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitScoreWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_INITSCOREWIDGET_OFFSET))(this);
		}

		::System::Void UpdateFillProgressInternal(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_UPDATEFILLPROGRESSINTERNAL_OFFSET))(this, progress);
		}

		::System::Void UpdateFeverDisplay(::System::Boolean isFever)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_UPDATEFEVERDISPLAY_OFFSET))(this, isFever);
		}

		::System::Void UpdateFillProgress(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_UPDATEFILLPROGRESS_OFFSET))(this, progress);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* UpdateFeverProgress(::System::Single feverTime)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_UPDATEFEVERPROGRESS_OFFSET))(this, feverTime);
		}

		::System::Void ActivateFever(::System::Single feverTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_ACTIVATEFEVER_OFFSET))(this, feverTime);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
