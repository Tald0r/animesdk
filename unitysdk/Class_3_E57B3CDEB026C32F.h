#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_B62C942A2774BBB8;
class Class_3_B88093644CDFA8DF;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_E57B3CDEB026C32F_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xAA8B330)
#define CLASS_3_E57B3CDEB026C32F_METHOD_3_5CE2C16D5BA788F2_OFFSET UNITYSDK_OFFSET(0xAA8BAC0)
#define CLASS_3_E57B3CDEB026C32F_METHOD_3_68579F3D64535C9F_OFFSET UNITYSDK_OFFSET(0xAA8C950)
#define CLASS_3_E57B3CDEB026C32F_METHOD_3_879EA0F6ACFF510E_OFFSET UNITYSDK_OFFSET(0xAA8C600)
#define CLASS_3_E57B3CDEB026C32F_METHOD_3_9D6D482D0D66151C_1_OFFSET UNITYSDK_OFFSET(0xAA8B950)
#define CLASS_3_E57B3CDEB026C32F_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0xAA8B850)
#define CLASS_3_E57B3CDEB026C32F_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xAA8B9B0)
#define CLASS_3_E57B3CDEB026C32F_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAA8B7F0)
#define CLASS_3_E57B3CDEB026C32F_METHOD_3_E6E83B0F635316D3_1_OFFSET UNITYSDK_OFFSET(0xAA8BA20)
#define CLASS_3_E57B3CDEB026C32F_METHOD_3_E6E83B0F635316D3_OFFSET UNITYSDK_OFFSET(0xAA8B8B0)
#define CLASS_3_E57B3CDEB026C32F_METHOD_3_F267777F2B36B40D_OFFSET UNITYSDK_OFFSET(0xAA8BBA0)
#define CLASS_3_E57B3CDEB026C32F_UPDATE_OFFSET UNITYSDK_OFFSET(0xAA8B650)
#define CLASS_3_E57B3CDEB026C32F__CTOR_OFFSET UNITYSDK_OFFSET(0xAA8B7D0)

inline static constexpr unsigned int Class_3_E57B3CDEB026C32F_TypeDefinitionIndex = 52699;

class Class_3_E57B3CDEB026C32F : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E57B3CDEB026C32F__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_E57B3CDEB026C32F_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E57B3CDEB026C32F_UPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E57B3CDEB026C32F_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E57B3CDEB026C32F_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}

	static ::System::Void Method_3_E6E83B0F635316D3(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E57B3CDEB026C32F_METHOD_3_E6E83B0F635316D3_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_E57B3CDEB026C32F_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_E6E83B0F635316D3_1(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E57B3CDEB026C32F_METHOD_3_E6E83B0F635316D3_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_5CE2C16D5BA788F2(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E57B3CDEB026C32F_METHOD_3_5CE2C16D5BA788F2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_879EA0F6ACFF510E(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::Class_2_B62C942A2774BBB8* a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32, ::Class_2_B62C942A2774BBB8*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E57B3CDEB026C32F_METHOD_3_879EA0F6ACFF510E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_9D6D482D0D66151C_1(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E57B3CDEB026C32F_METHOD_3_9D6D482D0D66151C_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_68579F3D64535C9F(::System::Single a1, ::Class_3_B88093644CDFA8DF* a2)
	{
		return ((::System::Void(*)(::System::Single, ::Class_3_B88093644CDFA8DF*))((::PBYTE)hIl2Cpp + CLASS_3_E57B3CDEB026C32F_METHOD_3_68579F3D64535C9F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F267777F2B36B40D(::Class_2_B62C942A2774BBB8* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_B62C942A2774BBB8*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E57B3CDEB026C32F_METHOD_3_F267777F2B36B40D_OFFSET))(a1, a2);
	}
};
