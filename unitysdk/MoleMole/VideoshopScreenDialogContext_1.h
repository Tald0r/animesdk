#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

template <typename T> class Class_0_16E4307DCC41950C_15;
template <typename T> class Class_2_2BD3078077E999CE;

namespace MoleMole
{
	inline static constexpr unsigned int VideoshopScreenDialogContext_1_TypeDefinitionIndex = 60181;

	template <typename TItemClass>
	class VideoshopScreenDialogContext_1 : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC41950C_15<TItemClass>* groupData; // 0x0
		::Class_2_2BD3078077E999CE<TItemClass>* sorter; // 0x0
	};
}
