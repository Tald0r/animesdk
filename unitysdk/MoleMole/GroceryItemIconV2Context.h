#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_187;
class Class_0_16E4307DCC419505_294;

#define MOLEMOLE_GROCERYITEMICONV2CONTEXT_GET_GOODSDATA_OFFSET UNITYSDK_OFFSET(0xC2D3B70)
#define MOLEMOLE_GROCERYITEMICONV2CONTEXT_SET_GOODSDATA_OFFSET UNITYSDK_OFFSET(0xC2D3B80)
#define MOLEMOLE_GROCERYITEMICONV2CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC2D3B90)

namespace MoleMole
{
	inline static constexpr unsigned int GroceryItemIconV2Context_TypeDefinitionIndex = 49590;

	class GroceryItemIconV2Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_294* IconStyleV2; // 0x28
		::Class_0_16E4307DCC419505_187* _GoodsData_k__BackingField; // 0x30

		::System::Void _ctor(::Class_0_16E4307DCC419505_294* iconStyleV2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_294*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROCERYITEMICONV2CONTEXT__CTOR_OFFSET))(this, iconStyleV2);
		}

		::Class_0_16E4307DCC419505_187* get_GoodsData()
		{
			return ((::Class_0_16E4307DCC419505_187*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROCERYITEMICONV2CONTEXT_GET_GOODSDATA_OFFSET))(this);
		}

		::System::Void set_GoodsData(::Class_0_16E4307DCC419505_187* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_187*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROCERYITEMICONV2CONTEXT_SET_GOODSDATA_OFFSET))(this, value);
		}
	};
}
