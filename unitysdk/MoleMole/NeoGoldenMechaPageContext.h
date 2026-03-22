#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_D0B4F27C7E9B3FD6;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_NEOGOLDENMECHAPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB2F1700)

namespace MoleMole
{
	inline static constexpr unsigned int NeoGoldenMechaPageContext_TypeDefinitionIndex = 57218;

	class NeoGoldenMechaPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_D0B4F27C7E9B3FD6*>* AllLevelGroups; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEOGOLDENMECHAPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
