#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_360F008FD42AEBAC;
class Class_2_5A4B16E4725097CC;
class Class_2_5FBF9D5FD9B3F459;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIQuestionsAnswerPageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_GET_PARENTCONTROLLER_OFFSET UNITYSDK_OFFSET(0xC83E0A0)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC83E530)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0xC83F580)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONSELECTSTAGE_OFFSET UNITYSDK_OFFSET(0xC83F6F0)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONSETCREATEFUNC_OFFSET UNITYSDK_OFFSET(0xC83E3A0)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xC83E790)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC83E5D0)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC83E120)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC83E480)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_STAGECOMPARISON_OFFSET UNITYSDK_OFFSET(0xC83F9A0)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_TRYOVERRIDESELECTONFOCUS_OFFSET UNITYSDK_OFFSET(0xC83F1D0)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC83FA50)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC83FB00)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0xC83FB70)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xC83FBD0)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC83FC40)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC83FCC0)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC83FD20)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_TRYOVERRIDESELECTONFOCUS_OFFSET UNITYSDK_OFFSET(0xC83FD90)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsListWidgetController_TypeDefinitionIndex = 59217;

	class UIQuestionsListWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_5A4B16E4725097CC* _view; // 0x2A0
		::System::Collections::Generic::List_1<::Class_2_360F008FD42AEBAC*>* _stageList; // 0x2A8
		::Class_2_5FBF9D5FD9B3F459* _model; // 0x2B0
		::MoleMole::UIActivityCompWeekRewardBtnWidgetController* activityRewardBtn; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIQuestionsAnswerPageController* get_parentController()
		{
			return ((::MoleMole::UIQuestionsAnswerPageController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_GET_PARENTCONTROLLER_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnSetCreateFunc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONSETCREATEFUNC_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Boolean TryOverrideSelectOnFocus(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32& selectIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_TRYOVERRIDESELECTONFOCUS_OFFSET))(this, gamepadModule, selectIndex);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnSelectStage(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONSELECTSTAGE_OFFSET))(this, index);
		}

		::System::Int32 StageComparison(::Class_2_360F008FD42AEBAC* x, ::Class_2_360F008FD42AEBAC* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_360F008FD42AEBAC*, ::Class_2_360F008FD42AEBAC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_STAGECOMPARISON_OFFSET))(this, x, y);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Boolean __base_TryOverrideSelectOnFocus(::MoleMole::MonoGamepadModule* P0, ::System::Int32& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_TRYOVERRIDESELECTONFOCUS_OFFSET))(this, P0, P1);
		}
	};
}
