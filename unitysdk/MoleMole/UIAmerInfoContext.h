#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_187;

#define MOLEMOLE_UIAMERINFOCONTEXT_GET_GOODSDATA_OFFSET UNITYSDK_OFFSET(0xC8E5E90)
#define MOLEMOLE_UIAMERINFOCONTEXT_SET_GOODSDATA_OFFSET UNITYSDK_OFFSET(0xC8E5EA0)
#define MOLEMOLE_UIAMERINFOCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC8E5EB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAmerInfoContext_TypeDefinitionIndex = 40791;

	class UIAmerInfoContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_187* _GoodsData_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERINFOCONTEXT__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_187* get_GoodsData()
		{
			return ((::Class_0_16E4307DCC419505_187*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERINFOCONTEXT_GET_GOODSDATA_OFFSET))(this);
		}

		::System::Void set_GoodsData(::Class_0_16E4307DCC419505_187* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_187*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERINFOCONTEXT_SET_GOODSDATA_OFFSET))(this, value);
		}
	};
}
