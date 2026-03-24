#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_9F091E965E210217_5;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8BAB440)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8BAB480)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__GETSORTEDGOODS_B__58_0_OFFSET UNITYSDK_OFFSET(0x8BAB490)

namespace MoleMole
{
	inline static constexpr unsigned int UIAreaShopPageController___c_TypeDefinitionIndex = 66719;

	class UIAreaShopPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIAreaShopPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIAreaShopPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAreaShopPageController___c_TypeDefinitionIndex)->GetStaticField(0x3B660);
		}
		static ::System::Comparison_1<::Class_3_9F091E965E210217_5*>** StaticGet___9__58_0()
		{
			return (::System::Comparison_1<::Class_3_9F091E965E210217_5*>**)Il2CppClass::FromTypeDefinitionIndex(UIAreaShopPageController___c_TypeDefinitionIndex)->GetStaticField(0x3B668);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedGoods_b__58_0(::Class_3_9F091E965E210217_5* goodsX, ::Class_3_9F091E965E210217_5* goodsY)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_3_9F091E965E210217_5*, ::Class_3_9F091E965E210217_5*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__GETSORTEDGOODS_B__58_0_OFFSET))(this, goodsX, goodsY);
		}
	};
}
