#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Plugins/Options/FloatOptions.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_31D08DC027B35B8F;
class Class_2_4902A2CD45674E62_1;
namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER_DELAYRECOVERHP_OFFSET UNITYSDK_OFFSET(0xAC04D60)
#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER_GET_MODEL_OFFSET UNITYSDK_OFFSET(0xAC04C90)
#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xAC04C10)
#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAC056C0)
#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAC05760)
#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAC04C20)
#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAC04FC0)
#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xAC05810)
#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAC057F0)
#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER__ONUIOPEN_B__15_0_OFFSET UNITYSDK_OFFSET(0xAC05890)
#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAC058C0)
#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAC05930)
#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAC05940)
#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAC05950)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooPracticeResultPopWindowController_TypeDefinitionIndex = 53747;

	class UIMechBooPracticeResultPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Int32* StaticGet_RampColorFShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMechBooPracticeResultPopWindowController_TypeDefinitionIndex)->GetStaticField(0x11710);
		}
		static ::System::Int32* StaticGet_RampColorEShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMechBooPracticeResultPopWindowController_TypeDefinitionIndex)->GetStaticField(0x11714);
		}
		static ::System::Int32* StaticGet_RecoverPercentShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMechBooPracticeResultPopWindowController_TypeDefinitionIndex)->GetStaticField(0x11718);
		}
		static ::System::Int32* StaticGet_UseHPScaleOffsetShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMechBooPracticeResultPopWindowController_TypeDefinitionIndex)->GetStaticField(0x1171C);
		}
		::Class_2_4902A2CD45674E62_1* _view; // 0x2F8
		::Class_2_31D08DC027B35B8F* _model; // 0x300
		::System::String* HpPercentage; // 0x308
		::System::Single _recoverLerpRatio; // 0x310
		::DG::Tweening::Core::TweenerCore_3<::System::Single, ::System::Single, ::DG::Tweening::Plugins::Options::FloatOptions>* _tweenerCore; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::Class_2_31D08DC027B35B8F* get_Model()
		{
			return ((::Class_2_31D08DC027B35B8F*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER_GET_MODEL_OFFSET))(this);
		}

		::System::Void DelayRecoverHP(::System::Int32 oldHP, ::System::Int32 newHP, ::System::Int32 maxHP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER_DELAYRECOVERHP_OFFSET))(this, oldHP, newHP, maxHP);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER__ONUIOPEN_B__15_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
