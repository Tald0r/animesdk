#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigLazyLoadItem_1.h"

namespace MoleMole { class ConfigUICommon_Input; }

#define MOLEMOLE_CONFIGUIINPUTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xF18B1B0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIInputItem_TypeDefinitionIndex = 47840;

	class ConfigUIInputItem : public ::MoleMole::ConfigLazyLoadItem_1<::MoleMole::ConfigUICommon_Input*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIINPUTITEM__CTOR_OFFSET))(this);
		}
	};
}
