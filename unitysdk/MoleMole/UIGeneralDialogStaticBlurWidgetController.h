#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_D091CC614BEA65CF;
class Class_2_43A70340906C2748;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RenderTexture; }

#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_ENDFULLSCREENUIFADEINACTION_OFFSET UNITYSDK_OFFSET(0xCAC6DF0)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_ENDFULLSCREENUIFADEOUTACTION_OFFSET UNITYSDK_OFFSET(0xCAC7230)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCAC61D0)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_ONUICAPTURE_OFFSET UNITYSDK_OFFSET(0xCAC5EA0)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCAC6270)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xCAC5C10)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_STARTFULLSCREENUIFADEINACTION_OFFSET UNITYSDK_OFFSET(0xCAC7150)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_STARTFULLSCREENUIFADEOUTACTION_OFFSET UNITYSDK_OFFSET(0xCAC71C0)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_STARTUIBLURFADEIN_OFFSET UNITYSDK_OFFSET(0xCAC6BD0)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_STARTUIBLURFADEOUT_OFFSET UNITYSDK_OFFSET(0xCAC6FB0)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xCAC5E30)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_UICAPTUREFINISHED_OFFSET UNITYSDK_OFFSET(0xCAC6850)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_UPDATEIMAGEALPHA_OFFSET UNITYSDK_OFFSET(0xCAC67A0)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xCAC65E0)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xCAC72E0)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCAC72A0)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCAC7330)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCAC73A0)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xCAC7420)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralDialogStaticBlurWidgetController_TypeDefinitionIndex = 56000;

	class UIGeneralDialogStaticBlurWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::String** StaticGet__property()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralDialogStaticBlurWidgetController_TypeDefinitionIndex)->GetStaticField(0x2FED0);
		}
		static ::System::UInt32* StaticGet_UICaptureIndex()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(UIGeneralDialogStaticBlurWidgetController_TypeDefinitionIndex)->GetStaticField(0xB780);
		}
		static ::System::Boolean* StaticGet_DisableFadeIn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIGeneralDialogStaticBlurWidgetController_TypeDefinitionIndex)->GetStaticField(0xB784);
		}
		::Class_2_43A70340906C2748* _view; // 0x2A0
		::System::Boolean _disableFadeIn; // 0x2A8
		::System::Boolean _haveSetPlayMix; // 0x2A9
		::System::Int32 downSample; // 0x2AC
		::System::Single blurRadius; // 0x2B0
		::UnityEngine::RenderTexture* rt; // 0x2B8
		::System::Int32 propertyID; // 0x2C0
		::Class_1_D091CC614BEA65CF* _task; // 0x2C8
		::System::Single _blurValue; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_START_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateImageAlpha(::System::Single blurValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_UPDATEIMAGEALPHA_OFFSET))(this, blurValue);
		}

		::System::Void OnUICapture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_ONUICAPTURE_OFFSET))(this);
		}

		::System::Void UICaptureFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_UICAPTUREFINISHED_OFFSET))(this);
		}

		::System::Void StartUIBlurFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_STARTUIBLURFADEIN_OFFSET))(this);
		}

		::System::Void StartUIBlurFadeOut(::System::Int32 instancedID, ::System::Action_1<::System::Int32>* endAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_STARTUIBLURFADEOUT_OFFSET))(this, instancedID, endAction);
		}

		::System::Void StartFullScreenUIFadeInAction(::System::Int32 holdUIInstancedId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_STARTFULLSCREENUIFADEINACTION_OFFSET))(this, holdUIInstancedId);
		}

		::System::Void EndFullScreenUIFadeInAction(::System::Int32 holdUIInstancedId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_ENDFULLSCREENUIFADEINACTION_OFFSET))(this, holdUIInstancedId);
		}

		::System::Void StartFullScreenUIFadeOutAction(::System::Int32 holdUIInstancedId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_STARTFULLSCREENUIFADEOUTACTION_OFFSET))(this, holdUIInstancedId);
		}

		::System::Void EndFullScreenUIFadeOutAction(::System::Int32 holdUIInstancedId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_ENDFULLSCREENUIFADEOUTACTION_OFFSET))(this, holdUIInstancedId);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
