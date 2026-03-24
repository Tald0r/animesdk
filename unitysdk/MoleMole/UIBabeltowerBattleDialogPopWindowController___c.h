#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52BC70FDA339CCD0;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIBABELTOWERBATTLEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB744FB0)
#define MOLEMOLE_UIBABELTOWERBATTLEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB744FF0)
#define MOLEMOLE_UIBABELTOWERBATTLEDIALOGPOPWINDOWCONTROLLER___C__INITBABELSKILLDESC_B__21_0_OFFSET UNITYSDK_OFFSET(0xB745000)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerBattleDialogPopWindowController___c_TypeDefinitionIndex = 80132;

	class UIBabeltowerBattleDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_52BC70FDA339CCD0*, ::System::Int32>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::Class_1_52BC70FDA339CCD0*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerBattleDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2E2C0);
		}
		static ::MoleMole::UIBabeltowerBattleDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIBabeltowerBattleDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerBattleDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2E2C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERBATTLEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERBATTLEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitBabelSkillDesc_b__21_0(::Class_1_52BC70FDA339CCD0* group)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_52BC70FDA339CCD0*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERBATTLEDIALOGPOPWINDOWCONTROLLER___C__INITBABELSKILLDESC_B__21_0_OFFSET))(this, group);
		}
	};
}
