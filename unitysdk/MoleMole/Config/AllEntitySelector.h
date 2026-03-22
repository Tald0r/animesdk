#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigTargetSelector.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ALLENTITYSELECTOR_METHOD_2_D21063487E31AA56_OFFSET UNITYSDK_OFFSET(0x629F8B0)
#define MOLEMOLE_CONFIG_ALLENTITYSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x629F9E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AllEntitySelector_TypeDefinitionIndex = 48791;

	class AllEntitySelector : public ::MoleMole::Config::ConfigTargetSelector
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ALLENTITYSELECTOR__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Method_2_D21063487E31AA56(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ALLENTITYSELECTOR_METHOD_2_D21063487E31AA56_OFFSET))(this, a1);
		}
	};
}
