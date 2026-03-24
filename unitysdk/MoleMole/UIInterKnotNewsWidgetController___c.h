#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8F0F8F0)
#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8F0F930)
#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___C__UPDATEGETBUTTON_B__14_2_OFFSET UNITYSDK_OFFSET(0x8F0F940)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotNewsWidgetController___c_TypeDefinitionIndex = 66822;

	class UIInterKnotNewsWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIInterKnotNewsWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIInterKnotNewsWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotNewsWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x374A0);
		}
		static ::System::Action** StaticGet___9__14_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotNewsWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x374A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateGetButton_b__14_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___C__UPDATEGETBUTTON_B__14_2_OFFSET))(this);
		}
	};
}
