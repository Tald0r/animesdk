#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigAbilityTarget.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_MULTITARGETTINGABILITYTARGET_METHOD_2_478C4498636A4056_OFFSET UNITYSDK_OFFSET(0xEC51780)
#define MOLEMOLE_CONFIG_MULTITARGETTINGABILITYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xEC51B90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MultiTargettingAbilityTarget_TypeDefinitionIndex = 38705;

	class MultiTargettingAbilityTarget : public ::MoleMole::Config::ConfigAbilityTarget
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* abilityTargetKeyList; // 0x40
		::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>* entityList; // 0x48
		::System::Collections::Generic::HashSet_1<::System::UInt32>* tempHashSet; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTITARGETTINGABILITYTARGET__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>* Method_2_478C4498636A4056(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a5)
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTITARGETTINGABILITYTARGET_METHOD_2_478C4498636A4056_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
