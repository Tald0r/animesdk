#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC8B0420)
#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC8B0460)
#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__FULLSCREENBTNBOTTOMCALLBACK_B__77_0_OFFSET UNITYSDK_OFFSET(0xC8B0690)
#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__HIDEBOTTOMTIPS_B__43_0_OFFSET UNITYSDK_OFFSET(0xC8B0470)
#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__INITSTICKERSHOWMODULE_B__62_0_OFFSET UNITYSDK_OFFSET(0xC8B0480)
#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__INITSTICKERSHOWMODULE_B__62_1_OFFSET UNITYSDK_OFFSET(0xC8B05A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityCameraControlChildWindowController___c_TypeDefinitionIndex = 37061;

	class UIMainCityCameraControlChildWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::String*>** StaticGet___9__62_1()
		{
			return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityCameraControlChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x436B0);
		}
		static ::System::Action** StaticGet___9__77_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityCameraControlChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x436B8);
		}
		static ::System::Action** StaticGet___9__43_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityCameraControlChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x436C0);
		}
		static ::MoleMole::UIMainCityCameraControlChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIMainCityCameraControlChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityCameraControlChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x436C8);
		}
		static ::System::Func_1<::System::String*>** StaticGet___9__62_0()
		{
			return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityCameraControlChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x436D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _HideBottomTips_b__43_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__HIDEBOTTOMTIPS_B__43_0_OFFSET))(this);
		}

		::System::String* _InitStickerShowModule_b__62_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__INITSTICKERSHOWMODULE_B__62_0_OFFSET))(this);
		}

		::System::String* _InitStickerShowModule_b__62_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__INITSTICKERSHOWMODULE_B__62_1_OFFSET))(this);
		}

		::System::Void _FullScreenBtnBottomCallback_b__77_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__FULLSCREENBTNBOTTOMCALLBACK_B__77_0_OFFSET))(this);
		}
	};
}
