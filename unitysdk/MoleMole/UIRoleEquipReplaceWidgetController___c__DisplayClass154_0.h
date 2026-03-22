#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRoleEquipReplaceWidgetController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS154_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAE53EB0)
#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS154_0__ONSORTERMARKDELETECLICK_B__0_OFFSET UNITYSDK_OFFSET(0xAE53EC0)
#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS154_0__ONSORTERMARKDELETECLICK_B__1_OFFSET UNITYSDK_OFFSET(0xAE53F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEquipReplaceWidgetController___c__DisplayClass154_0_TypeDefinitionIndex = 70976;

	class UIRoleEquipReplaceWidgetController___c__DisplayClass154_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRoleEquipReplaceWidgetController* __4__this; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* equipIDs; // 0x18
		::System::Action* __9__1; // 0x20
		::System::Int32 OptType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS154_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnSorterMarkDeleteClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS154_0__ONSORTERMARKDELETECLICK_B__0_OFFSET))(this);
		}

		::System::Void _OnSorterMarkDeleteClick_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS154_0__ONSORTERMARKDELETECLICK_B__1_OFFSET))(this);
		}
	};
}
