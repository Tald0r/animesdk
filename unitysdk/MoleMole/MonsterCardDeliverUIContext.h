#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_B2C060183F4E5398;
namespace MoleMole { class PopMonsterCardDeliverShow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONSTERCARDDELIVERUICONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x993FB90)

namespace MoleMole
{
	inline static constexpr unsigned int MonsterCardDeliverUIContext_TypeDefinitionIndex = 51738;

	class MonsterCardDeliverUIContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::PopMonsterCardDeliverShow* showObj; // 0x28
		::System::Collections::Generic::List_1<::Class_1_B2C060183F4E5398*>* CardList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERCARDDELIVERUICONTEXT__CTOR_OFFSET))(this);
		}
	};
}
