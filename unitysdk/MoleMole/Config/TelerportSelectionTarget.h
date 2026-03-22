#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigAbilityTarget.h"
#include "unitysdk/MoleMole/Config/TeleportSelectionType.h"
#include "unitysdk/MoleMole/Config/TelerportSelectionTarget_Enum_3_ADC527EEFF9D3E75.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_TELERPORTSELECTIONTARGET_METHOD_2_023427FCE8E9C83B_OFFSET UNITYSDK_OFFSET(0xCCACAD0)
#define MOLEMOLE_CONFIG_TELERPORTSELECTIONTARGET_METHOD_2_0DF2500188396E1E_OFFSET UNITYSDK_OFFSET(0xCCAC6A0)
#define MOLEMOLE_CONFIG_TELERPORTSELECTIONTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xCCACAC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int TelerportSelectionTarget_TypeDefinitionIndex = 55614;

	class TelerportSelectionTarget : public ::MoleMole::Config::ConfigAbilityTarget
	{
	public:
		::MoleMole::Config::TeleportSelectionType TeleportType; // 0x40
		::MoleMole::Config::TelerportSelectionTarget_Enum_3_ADC527EEFF9D3E75 HandleType; // 0x44
		::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>* _resolvedTargets; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TELERPORTSELECTIONTARGET__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>* Method_2_0DF2500188396E1E(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a5)
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TELERPORTSELECTIONTARGET_METHOD_2_0DF2500188396E1E_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::MoleMole::Battle::Entity* Method_2_023427FCE8E9C83B(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a5)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TELERPORTSELECTIONTARGET_METHOD_2_023427FCE8E9C83B_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
