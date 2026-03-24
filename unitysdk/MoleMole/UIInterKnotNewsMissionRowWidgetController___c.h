#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9EBD1A0)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9EBD1E0)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER___C__ONITEMSELECT_B__15_0_OFFSET UNITYSDK_OFFSET(0x9EBD1F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotNewsMissionRowWidgetController___c_TypeDefinitionIndex = 63184;

	class UIInterKnotNewsMissionRowWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIInterKnotNewsMissionRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIInterKnotNewsMissionRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotNewsMissionRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3D700);
		}
		static ::System::Action** StaticGet___9__15_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotNewsMissionRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3D708);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnItemSelect_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER___C__ONITEMSELECT_B__15_0_OFFSET))(this);
		}
	};
}
