#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_33B50469231C7D95.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_500;
class Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::MiniGame::BangbooPartyGame { class MonoBangbooPartyAIPathPoint; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7A13F49B9930F473_METHOD_2_01B234D029194B7D_OFFSET UNITYSDK_OFFSET(0xA9BECC0)
#define CLASS_2_7A13F49B9930F473_METHOD_2_0783768FD5DECDCA_OFFSET UNITYSDK_OFFSET(0xA9BF550)
#define CLASS_2_7A13F49B9930F473_METHOD_2_0A6357CF183B0175_OFFSET UNITYSDK_OFFSET(0xA9BD080)
#define CLASS_2_7A13F49B9930F473_METHOD_2_1051B8012D35C699_OFFSET UNITYSDK_OFFSET(0xA9BEA80)
#define CLASS_2_7A13F49B9930F473_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xA9C0090)
#define CLASS_2_7A13F49B9930F473_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xA9BFF20)
#define CLASS_2_7A13F49B9930F473_METHOD_2_323A963656E34238_OFFSET UNITYSDK_OFFSET(0xA9BD630)
#define CLASS_2_7A13F49B9930F473_METHOD_2_459ACB4B4FA4869E_OFFSET UNITYSDK_OFFSET(0xA9BEFB0)
#define CLASS_2_7A13F49B9930F473_METHOD_2_4FDBEEC5224183A8_OFFSET UNITYSDK_OFFSET(0xA9BD6C0)
#define CLASS_2_7A13F49B9930F473_METHOD_2_5E7D8158D9382030_OFFSET UNITYSDK_OFFSET(0xA9BFBA0)
#define CLASS_2_7A13F49B9930F473_METHOD_2_696A0431D8187A24_OFFSET UNITYSDK_OFFSET(0xA9BD310)
#define CLASS_2_7A13F49B9930F473_METHOD_2_99C13D148EE6E6F1_OFFSET UNITYSDK_OFFSET(0xA9BFE40)
#define CLASS_2_7A13F49B9930F473_METHOD_2_AA6AC38756233BD0_1_OFFSET UNITYSDK_OFFSET(0xA9C0100)
#define CLASS_2_7A13F49B9930F473_METHOD_2_AA6AC38756233BD0_2_OFFSET UNITYSDK_OFFSET(0xA9C0230)
#define CLASS_2_7A13F49B9930F473_METHOD_2_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0xA9C0020)
#define CLASS_2_7A13F49B9930F473_METHOD_2_AE3C558B8DF8A134_OFFSET UNITYSDK_OFFSET(0xA9BEDD0)
#define CLASS_2_7A13F49B9930F473_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA9C01D0)
#define CLASS_2_7A13F49B9930F473_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA9C0170)
#define CLASS_2_7A13F49B9930F473_METHOD_2_F16162DCA65E9A3F_OFFSET UNITYSDK_OFFSET(0xA9BD820)
#define CLASS_2_7A13F49B9930F473_METHOD_2_FF63E816B4D956CD_OFFSET UNITYSDK_OFFSET(0xA9BD0F0)
#define CLASS_2_7A13F49B9930F473__CCTOR_OFFSET UNITYSDK_OFFSET(0xA9BFFE0)
#define CLASS_2_7A13F49B9930F473__CTOR_OFFSET UNITYSDK_OFFSET(0xA9BCFB0)

inline static constexpr unsigned int Class_2_7A13F49B9930F473_TypeDefinitionIndex = 58000;

class Class_2_7A13F49B9930F473 : public ::Class_1_33B50469231C7D95
{
public:
	static ::System::Single* StaticGet_Field_2_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7A13F49B9930F473_TypeDefinitionIndex)->GetStaticField(0x11730);
	}
	static ::System::Single* StaticGet_Field_2_4()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7A13F49B9930F473_TypeDefinitionIndex)->GetStaticField(0x11734);
	}
	::Class_0_16E4307DCC419505_500* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*>* Field_2_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C*>* Field_2_1; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_500* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_500*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473__CCTOR_OFFSET))();
	}

	::System::Void Method_2_0A6357CF183B0175()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_0A6357CF183B0175_OFFSET))(this);
	}

	::System::Void Method_2_696A0431D8187A24(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_696A0431D8187A24_OFFSET))(this, a1);
	}

	::System::Void Method_2_323A963656E34238(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_323A963656E34238_OFFSET))(this, a1);
	}

	::System::Void Method_2_4FDBEEC5224183A8(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_4FDBEEC5224183A8_OFFSET))(this, a1);
	}

	::System::Void Method_2_F16162DCA65E9A3F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_F16162DCA65E9A3F_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_01B234D029194B7D(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_01B234D029194B7D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1051B8012D35C699(::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint* a1, ::System::Collections::Generic::List_1<::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*, ::System::Collections::Generic::List_1<::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*>*&))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_1051B8012D35C699_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA6AC38756233BD0_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_AA6AC38756233BD0_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_459ACB4B4FA4869E(::Class_3_F35B080B137ECC46* a1, ::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F35B080B137ECC46*, ::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_459ACB4B4FA4869E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5E7D8158D9382030(::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_5E7D8158D9382030_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_AE3C558B8DF8A134(::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_AE3C558B8DF8A134_OFFSET))(this, a1);
	}

	::System::Void Method_2_0783768FD5DECDCA(::Class_3_F35B080B137ECC46* a1, ::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F35B080B137ECC46*, ::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_0783768FD5DECDCA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_99C13D148EE6E6F1(::Class_3_F35B080B137ECC46* a1, ::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F35B080B137ECC46*, ::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_99C13D148EE6E6F1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AA6AC38756233BD0_2(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_AA6AC38756233BD0_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_FF63E816B4D956CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_FF63E816B4D956CD_OFFSET))(this);
	}
};
