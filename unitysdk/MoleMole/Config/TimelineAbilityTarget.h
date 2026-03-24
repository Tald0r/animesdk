#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigAbilityTarget.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_TIMELINEABILITYTARGET_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xC247D70)
#define MOLEMOLE_CONFIG_TIMELINEABILITYTARGET_METHOD_2_EA91F3C4015F35FB_OFFSET UNITYSDK_OFFSET(0xC247670)
#define MOLEMOLE_CONFIG_TIMELINEABILITYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xC247DF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int TimelineAbilityTarget_TypeDefinitionIndex = 47017;

	class TimelineAbilityTarget : public ::MoleMole::Config::ConfigAbilityTarget
	{
	public:
		::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>* resultList; // 0x40
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* selectList; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TIMELINEABILITYTARGET__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>* Method_2_EA91F3C4015F35FB(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a5)
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TIMELINEABILITYTARGET_METHOD_2_EA91F3C4015F35FB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean Method_2_1808E1CF7A125519()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TIMELINEABILITYTARGET_METHOD_2_1808E1CF7A125519_OFFSET))(this);
		}
	};
}
