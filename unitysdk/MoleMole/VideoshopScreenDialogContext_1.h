#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

template <typename T> class Class_0_16E4307DCC41950C_13;
template <typename T> class Class_2_7AE1A22930C1CD01;

namespace MoleMole
{
	inline static constexpr unsigned int VideoshopScreenDialogContext_1_TypeDefinitionIndex = 69568;

	template <typename TItemClass>
	class VideoshopScreenDialogContext_1 : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC41950C_13<TItemClass>* groupData; // 0x0
		::Class_2_7AE1A22930C1CD01<TItemClass>* sorter; // 0x0
	};
}
