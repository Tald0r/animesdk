#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_EDAA6390395047A1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBOSSBATTLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBB04680)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossBattleData_TypeDefinitionIndex = 37443;

	class UIBossBattleData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* bottomDesc; // 0x28
		::System::Collections::Generic::List_1<::Class_1_EDAA6390395047A1*>* periodDataList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSBATTLEDATA__CTOR_OFFSET))(this);
		}
	};
}
