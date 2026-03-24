#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_FD161B8AFE00CB2F;

#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xAF7F2D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIModificationShop3DModelController_Context_TypeDefinitionIndex = 68827;

	class UIModificationShop3DModelController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_FD161B8AFE00CB2F* storeData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
