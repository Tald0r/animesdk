#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7ECB9691B142D586;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC881650)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC881690)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__GAMESTART_B__16_0_OFFSET UNITYSDK_OFFSET(0xC8816A0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__GAMESTART_G__GOTOLOGINGAME_16_1_OFFSET UNITYSDK_OFFSET(0xC881740)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__PLAYKOREAAGELIMIT_B__18_0_OFFSET UNITYSDK_OFFSET(0xC881770)

namespace MoleMole
{
	inline static constexpr unsigned int UILaunchPageController___c_TypeDefinitionIndex = 71988;

	class UILaunchPageController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7ECB9691B142D586*>** StaticGet___9__18_0()
		{
			return (::System::Action_1<::Class_1_7ECB9691B142D586*>**)Il2CppClass::FromTypeDefinitionIndex(UILaunchPageController___c_TypeDefinitionIndex)->GetStaticField(0x43680);
		}
		static ::MoleMole::UILaunchPageController___c** StaticGet___9()
		{
			return (::MoleMole::UILaunchPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UILaunchPageController___c_TypeDefinitionIndex)->GetStaticField(0x43688);
		}
		static ::System::Action** StaticGet___9__16_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UILaunchPageController___c_TypeDefinitionIndex)->GetStaticField(0x43690);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _GameStart_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__GAMESTART_B__16_0_OFFSET))(this);
		}

		::System::Void _GameStart_g__GoToLoginGame_16_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__GAMESTART_G__GOTOLOGINGAME_16_1_OFFSET))(this);
		}

		::System::Void _PlayKoreaAgeLimit_b__18_0(::Class_1_7ECB9691B142D586* playerHelper)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7ECB9691B142D586*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__PLAYKOREAAGELIMIT_B__18_0_OFFSET))(this, playerHelper);
		}
	};
}
