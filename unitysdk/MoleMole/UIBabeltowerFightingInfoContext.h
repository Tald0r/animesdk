#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_F84327483F47ADE0;

#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA24B8A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerFightingInfoContext_TypeDefinitionIndex = 63599;

	class UIBabeltowerFightingInfoContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_F84327483F47ADE0* SelectData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
