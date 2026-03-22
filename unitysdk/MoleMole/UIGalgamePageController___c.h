#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA293FB0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__CHECKMAINCITYBGM_B__12_0_OFFSET UNITYSDK_OFFSET(0xA294000)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA293FF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c_TypeDefinitionIndex = 54678;

	class UIGalgamePageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIGalgamePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIGalgamePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGalgamePageController___c_TypeDefinitionIndex)->GetStaticField(0x34960);
		}
		static ::System::Action** StaticGet___9__12_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIGalgamePageController___c_TypeDefinitionIndex)->GetStaticField(0x34968);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _CheckMaincityBGM_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__CHECKMAINCITYBGM_B__12_0_OFFSET))(this);
		}
	};
}
