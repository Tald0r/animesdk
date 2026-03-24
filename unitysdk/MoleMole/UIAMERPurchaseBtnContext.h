#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_133;

#define MOLEMOLE_UIAMERPURCHASEBTNCONTEXT_GET_GOODSDATA_OFFSET UNITYSDK_OFFSET(0xA4A28E0)
#define MOLEMOLE_UIAMERPURCHASEBTNCONTEXT_SET_GOODSDATA_OFFSET UNITYSDK_OFFSET(0xA4A28F0)
#define MOLEMOLE_UIAMERPURCHASEBTNCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA4A2900)

namespace MoleMole
{
	inline static constexpr unsigned int UIAMERPurchaseBtnContext_TypeDefinitionIndex = 58594;

	class UIAMERPurchaseBtnContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_133* _GoodsData_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERPURCHASEBTNCONTEXT__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_133* get_GoodsData()
		{
			return ((::Class_0_16E4307DCC419505_133*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERPURCHASEBTNCONTEXT_GET_GOODSDATA_OFFSET))(this);
		}

		::System::Void set_GoodsData(::Class_0_16E4307DCC419505_133* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_133*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERPURCHASEBTNCONTEXT_SET_GOODSDATA_OFFSET))(this, value);
		}
	};
}
