#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigLazyLoadItem_1.h"

namespace MoleMole { class ConfigUICommon_HollowCard; }

#define MOLEMOLE_CONFIGUIHOLLOWCARDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xCCB1A10)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIHollowCardItem_TypeDefinitionIndex = 70597;

	class ConfigUIHollowCardItem : public ::MoleMole::ConfigLazyLoadItem_1<::MoleMole::ConfigUICommon_HollowCard*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIHOLLOWCARDITEM__CTOR_OFFSET))(this);
		}
	};
}
