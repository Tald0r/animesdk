#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_5;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C;

#define MOLEMOLE_UIBUDDYDIYCOMPONENTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC2C86F0)
#define MOLEMOLE_UIBUDDYDIYCOMPONENTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC2C8730)
#define MOLEMOLE_UIBUDDYDIYCOMPONENTWIDGETCONTROLLER___C__UNINSTALLCOMMPONENT_B__31_0_OFFSET UNITYSDK_OFFSET(0xC2C8740)

namespace MoleMole
{
	inline static constexpr unsigned int UIBuddyDIYComponentWidgetController___c_TypeDefinitionIndex = 71716;

	class UIBuddyDIYComponentWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBuddyDIYComponentWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIBuddyDIYComponentWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBuddyDIYComponentWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3B710);
		}
		static ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C** StaticGet___9__31_0()
		{
			return (::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(UIBuddyDIYComponentWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3B718);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYDIYCOMPONENTWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYDIYCOMPONENTWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _UnInstallCommponent_b__31_0(::Class_0_16E4307DCC419505_5* call)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYDIYCOMPONENTWIDGETCONTROLLER___C__UNINSTALLCOMMPONENT_B__31_0_OFFSET))(this, call);
		}
	};
}
