#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_263;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHANDBOOKTACTICSBOTTOMWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7F65010)
#define MOLEMOLE_UIHANDBOOKTACTICSBOTTOMWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7F65050)
#define MOLEMOLE_UIHANDBOOKTACTICSBOTTOMWIDGETCONTROLLER___C__REFRESHVIEW_B__9_0_OFFSET UNITYSDK_OFFSET(0x7F65060)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookTacticsBottomWidgetController___c_TypeDefinitionIndex = 55763;

	class UIHandBookTacticsBottomWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_2_208CC9941471731A_263*>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_263*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookTacticsBottomWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x373A0);
		}
		static ::MoleMole::UIHandBookTacticsBottomWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookTacticsBottomWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookTacticsBottomWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x373A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSBOTTOMWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSBOTTOMWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__9_0(::Class_2_208CC9941471731A_263* a, ::Class_2_208CC9941471731A_263* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_263*, ::Class_2_208CC9941471731A_263*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSBOTTOMWIDGETCONTROLLER___C__REFRESHVIEW_B__9_0_OFFSET))(this, a, b);
		}
	};
}
