#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_9F091E965E210217_30;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIBANGBOODREAMSHOPPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBB011E0)
#define MOLEMOLE_UIBANGBOODREAMSHOPPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBB01220)
#define MOLEMOLE_UIBANGBOODREAMSHOPPAGECONTROLLER___C__GETSORTEDGOODS_B__33_0_OFFSET UNITYSDK_OFFSET(0xBB01230)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooDreamShopPageController___c_TypeDefinitionIndex = 57622;

	class UIBangbooDreamShopPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBangbooDreamShopPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIBangbooDreamShopPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooDreamShopPageController___c_TypeDefinitionIndex)->GetStaticField(0x3D6C0);
		}
		static ::System::Comparison_1<::Class_3_9F091E965E210217_30*>** StaticGet___9__33_0()
		{
			return (::System::Comparison_1<::Class_3_9F091E965E210217_30*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooDreamShopPageController___c_TypeDefinitionIndex)->GetStaticField(0x3D6C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMSHOPPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMSHOPPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedGoods_b__33_0(::Class_3_9F091E965E210217_30* goodsX, ::Class_3_9F091E965E210217_30* goodsY)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_3_9F091E965E210217_30*, ::Class_3_9F091E965E210217_30*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMSHOPPAGECONTROLLER___C__GETSORTEDGOODS_B__33_0_OFFSET))(this, goodsX, goodsY);
		}
	};
}
