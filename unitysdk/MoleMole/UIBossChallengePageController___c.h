#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA5207B0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA5207F0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__ONMAINCITYBTNCLICK_B__38_0_OFFSET UNITYSDK_OFFSET(0xA520800)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengePageController___c_TypeDefinitionIndex = 77349;

	class UIBossChallengePageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBossChallengePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIBossChallengePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBossChallengePageController___c_TypeDefinitionIndex)->GetStaticField(0x2CF60);
		}
		static ::System::Action** StaticGet___9__38_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBossChallengePageController___c_TypeDefinitionIndex)->GetStaticField(0x2CF68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnMainCityBtnClick_b__38_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__ONMAINCITYBTNCLICK_B__38_0_OFFSET))(this);
		}
	};
}
