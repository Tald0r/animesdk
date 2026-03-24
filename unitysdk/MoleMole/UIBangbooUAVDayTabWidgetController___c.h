#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_484;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBFD0D20)
#define MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBFD0D60)
#define MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER___C__REFRESHENTRY_B__2_0_OFFSET UNITYSDK_OFFSET(0xBFD0D70)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooUAVDayTabWidgetController___c_TypeDefinitionIndex = 56310;

	class UIBangbooUAVDayTabWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBangbooUAVDayTabWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIBangbooUAVDayTabWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooUAVDayTabWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34340);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_484*, ::System::Int32>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_484*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooUAVDayTabWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34348);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshEntry_b__2_0(::Class_2_208CC9941471731A_484* a)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_484*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER___C__REFRESHENTRY_B__2_0_OFFSET))(this, a);
		}
	};
}
