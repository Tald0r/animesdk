#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9BED5C0)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9BED600)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__SHOWGOWORLDLEVELBTN_B__110_0_OFFSET UNITYSDK_OFFSET(0x9BED610)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__SHOWGOWORLDLEVELBTN_B__110_1_OFFSET UNITYSDK_OFFSET(0x9BED810)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTipsPopWindowController___c_TypeDefinitionIndex = 74353;

	class UIGeneralTipsPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Boolean>** StaticGet___9__110_1()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralTipsPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2E460);
		}
		static ::MoleMole::UIGeneralTipsPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIGeneralTipsPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralTipsPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2E468);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__110_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralTipsPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2E470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowGoWorldLevelBtn_b__110_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__SHOWGOWORLDLEVELBTN_B__110_0_OFFSET))(this);
		}

		::System::Void _ShowGoWorldLevelBtn_b__110_1(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__SHOWGOWORLDLEVELBTN_B__110_1_OFFSET))(this, success);
		}
	};
}
