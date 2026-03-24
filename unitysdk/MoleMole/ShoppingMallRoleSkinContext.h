#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_133;

#define MOLEMOLE_SHOPPINGMALLROLESKINCONTEXT_GET_GOODS_OFFSET UNITYSDK_OFFSET(0xA480250)
#define MOLEMOLE_SHOPPINGMALLROLESKINCONTEXT_SET_GOODS_OFFSET UNITYSDK_OFFSET(0xA480260)
#define MOLEMOLE_SHOPPINGMALLROLESKINCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA480270)

namespace MoleMole
{
	inline static constexpr unsigned int ShoppingMallRoleSkinContext_TypeDefinitionIndex = 42924;

	class ShoppingMallRoleSkinContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_133* _Goods_k__BackingField; // 0x28

		::System::Void _ctor(::Class_0_16E4307DCC419505_133* goods)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_133*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLROLESKINCONTEXT__CTOR_OFFSET))(this, goods);
		}

		::Class_0_16E4307DCC419505_133* get_Goods()
		{
			return ((::Class_0_16E4307DCC419505_133*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLROLESKINCONTEXT_GET_GOODS_OFFSET))(this);
		}

		::System::Void set_Goods(::Class_0_16E4307DCC419505_133* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_133*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLROLESKINCONTEXT_SET_GOODS_OFFSET))(this, value);
		}
	};
}
