#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

template <typename T> class Class_0_16E4307DCC41950C_15;
template <typename T> class Class_2_2BD3078077E999CE;

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEquipRecommendPopContext_1_TypeDefinitionIndex = 59004;

	template <typename TItemClass>
	class UIRoleEquipRecommendPopContext_1 : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 avatarId; // 0x0
		::System::Int32 slotIndex; // 0x0
		::Class_0_16E4307DCC41950C_15<TItemClass>* suitGroupData; // 0x0
		::Class_0_16E4307DCC41950C_15<TItemClass>* basePropertyGroupData; // 0x0
		::Class_0_16E4307DCC41950C_15<TItemClass>* randPropertyGroupData; // 0x0
		::Class_2_2BD3078077E999CE<TItemClass>* sorter; // 0x0
	};
}
