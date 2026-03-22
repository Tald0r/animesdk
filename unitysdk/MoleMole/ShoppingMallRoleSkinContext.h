#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_187;

#define MOLEMOLE_SHOPPINGMALLROLESKINCONTEXT_GET_GOODS_OFFSET UNITYSDK_OFFSET(0x67CCD60)
#define MOLEMOLE_SHOPPINGMALLROLESKINCONTEXT_SET_GOODS_OFFSET UNITYSDK_OFFSET(0x67CCD70)
#define MOLEMOLE_SHOPPINGMALLROLESKINCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x67CCD80)

namespace MoleMole
{
	inline static constexpr unsigned int ShoppingMallRoleSkinContext_TypeDefinitionIndex = 63085;

	class ShoppingMallRoleSkinContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_187* _Goods_k__BackingField; // 0x28

		::System::Void _ctor(::Class_0_16E4307DCC419505_187* goods)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_187*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLROLESKINCONTEXT__CTOR_OFFSET))(this, goods);
		}

		::Class_0_16E4307DCC419505_187* get_Goods()
		{
			return ((::Class_0_16E4307DCC419505_187*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLROLESKINCONTEXT_GET_GOODS_OFFSET))(this);
		}

		::System::Void set_Goods(::Class_0_16E4307DCC419505_187* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_187*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLROLESKINCONTEXT_SET_GOODS_OFFSET))(this, value);
		}
	};
}
