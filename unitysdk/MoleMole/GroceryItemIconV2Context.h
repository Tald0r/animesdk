#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_133;
class Class_0_16E4307DCC419505_383;

#define MOLEMOLE_GROCERYITEMICONV2CONTEXT_GET_GOODSDATA_OFFSET UNITYSDK_OFFSET(0xB8AF790)
#define MOLEMOLE_GROCERYITEMICONV2CONTEXT_SET_GOODSDATA_OFFSET UNITYSDK_OFFSET(0xB8AF7A0)
#define MOLEMOLE_GROCERYITEMICONV2CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB8AF7B0)

namespace MoleMole
{
	inline static constexpr unsigned int GroceryItemIconV2Context_TypeDefinitionIndex = 70395;

	class GroceryItemIconV2Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_133* _GoodsData_k__BackingField; // 0x28
		::Class_0_16E4307DCC419505_383* IconStyleV2; // 0x30

		::System::Void _ctor(::Class_0_16E4307DCC419505_383* iconStyleV2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_383*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROCERYITEMICONV2CONTEXT__CTOR_OFFSET))(this, iconStyleV2);
		}

		::Class_0_16E4307DCC419505_133* get_GoodsData()
		{
			return ((::Class_0_16E4307DCC419505_133*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROCERYITEMICONV2CONTEXT_GET_GOODSDATA_OFFSET))(this);
		}

		::System::Void set_GoodsData(::Class_0_16E4307DCC419505_133* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_133*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROCERYITEMICONV2CONTEXT_SET_GOODSDATA_OFFSET))(this, value);
		}
	};
}
