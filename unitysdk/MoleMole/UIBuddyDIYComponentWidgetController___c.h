#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C;

#define MOLEMOLE_UIBUDDYDIYCOMPONENTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC296B90)
#define MOLEMOLE_UIBUDDYDIYCOMPONENTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC296BD0)
#define MOLEMOLE_UIBUDDYDIYCOMPONENTWIDGETCONTROLLER___C__UNINSTALLCOMMPONENT_B__31_0_OFFSET UNITYSDK_OFFSET(0xC296BE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBuddyDIYComponentWidgetController___c_TypeDefinitionIndex = 70133;

	class UIBuddyDIYComponentWidgetController___c : public ::System::Object
	{
	public:
		static ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C** StaticGet___9__31_0()
		{
			return (::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(UIBuddyDIYComponentWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38AF0);
		}
		static ::MoleMole::UIBuddyDIYComponentWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIBuddyDIYComponentWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBuddyDIYComponentWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38AF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYDIYCOMPONENTWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYDIYCOMPONENTWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _UnInstallCommponent_b__31_0(::Class_0_16E4307DCC419505_7* call)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYDIYCOMPONENTWIDGETCONTROLLER___C__UNINSTALLCOMMPONENT_B__31_0_OFFSET))(this, call);
		}
	};
}
