#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_133;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SHOPPINGMALLRECHARGECONTEXT_GET_GOODS_OFFSET UNITYSDK_OFFSET(0xA65B0F0)
#define MOLEMOLE_SHOPPINGMALLRECHARGECONTEXT_SET_GOODS_OFFSET UNITYSDK_OFFSET(0xA65B100)
#define MOLEMOLE_SHOPPINGMALLRECHARGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA65B110)

namespace MoleMole
{
	inline static constexpr unsigned int ShoppingMallRechargeContext_TypeDefinitionIndex = 71494;

	class ShoppingMallRechargeContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_133*>* _Goods_k__BackingField; // 0x28

		::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_133*>* goods)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_133*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLRECHARGECONTEXT__CTOR_OFFSET))(this, goods);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_133*>* get_Goods()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_133*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLRECHARGECONTEXT_GET_GOODS_OFFSET))(this);
		}

		::System::Void set_Goods(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_133*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_133*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLRECHARGECONTEXT_SET_GOODS_OFFSET))(this, value);
		}
	};
}
