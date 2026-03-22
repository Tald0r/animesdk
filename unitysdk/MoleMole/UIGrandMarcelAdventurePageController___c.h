#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_871A5AD984DA0F15_1;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBFBAA10)
#define MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__CHECKTEMPUNLOCK_B__81_1_OFFSET UNITYSDK_OFFSET(0xBFBAB30)
#define MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBFBAA50)
#define MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__REFRESHVIEW_B__48_0_OFFSET UNITYSDK_OFFSET(0xBFBAA60)
#define MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__TRYJOINMARCELADVENTURE_B__96_0_OFFSET UNITYSDK_OFFSET(0xBFBAB90)
#define MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__TRYJOINMARCELADVENTURE_B__96_1_OFFSET UNITYSDK_OFFSET(0xBFBABA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGrandMarcelAdventurePageController___c_TypeDefinitionIndex = 44765;

	class UIGrandMarcelAdventurePageController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_3_871A5AD984DA0F15_1*>** StaticGet___9__96_0()
		{
			return (::System::Action_1<::Class_3_871A5AD984DA0F15_1*>**)Il2CppClass::FromTypeDefinitionIndex(UIGrandMarcelAdventurePageController___c_TypeDefinitionIndex)->GetStaticField(0x2D0F0);
		}
		static ::System::Action** StaticGet___9__81_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIGrandMarcelAdventurePageController___c_TypeDefinitionIndex)->GetStaticField(0x2D0F8);
		}
		static ::MoleMole::UIGrandMarcelAdventurePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIGrandMarcelAdventurePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGrandMarcelAdventurePageController___c_TypeDefinitionIndex)->GetStaticField(0x2D100);
		}
		static ::System::Action** StaticGet___9__48_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIGrandMarcelAdventurePageController___c_TypeDefinitionIndex)->GetStaticField(0x2D108);
		}
		static ::System::Action_1<::System::Int32>** StaticGet___9__96_1()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIGrandMarcelAdventurePageController___c_TypeDefinitionIndex)->GetStaticField(0x2D110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__48_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__REFRESHVIEW_B__48_0_OFFSET))(this);
		}

		::System::Void _CheckTempUnlock_b__81_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__CHECKTEMPUNLOCK_B__81_1_OFFSET))(this);
		}

		::System::Void _TryJoinMarcelAdventure_b__96_0(::Class_3_871A5AD984DA0F15_1* roomInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_871A5AD984DA0F15_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__TRYJOINMARCELADVENTURE_B__96_0_OFFSET))(this, roomInfo);
		}

		::System::Void _TryJoinMarcelAdventure_b__96_1(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__TRYJOINMARCELADVENTURE_B__96_1_OFFSET))(this, _);
		}
	};
}
