#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/Class_3_B1250269F1E3BC27_Struct_2_66EE559EF62DCFBC.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_B1250269F1E3BC27;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define CLASS_3_2EA7C56C62D75B11_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x72314C0)
#define CLASS_3_2EA7C56C62D75B11_METHOD_3_100A02C6282EBADF_OFFSET UNITYSDK_OFFSET(0x7232710)
#define CLASS_3_2EA7C56C62D75B11_METHOD_3_52A3FEDD63707B13_OFFSET UNITYSDK_OFFSET(0x72337C0)
#define CLASS_3_2EA7C56C62D75B11_METHOD_3_658B76B8CF96D59E_OFFSET UNITYSDK_OFFSET(0x72321F0)
#define CLASS_3_2EA7C56C62D75B11_METHOD_3_94A25BF02976417C_OFFSET UNITYSDK_OFFSET(0x72342C0)
#define CLASS_3_2EA7C56C62D75B11_METHOD_3_9AD84C136DF0D471_OFFSET UNITYSDK_OFFSET(0x7233A70)
#define CLASS_3_2EA7C56C62D75B11_METHOD_3_A11144519902A27F_OFFSET UNITYSDK_OFFSET(0x7231BB0)
#define CLASS_3_2EA7C56C62D75B11_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x7232180)
#define CLASS_3_2EA7C56C62D75B11_METHOD_3_BC710BFD9E4F5D17_OFFSET UNITYSDK_OFFSET(0x7233880)
#define CLASS_3_2EA7C56C62D75B11_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7231C20)
#define CLASS_3_2EA7C56C62D75B11_METHOD_3_D03DF637496AD8AD_OFFSET UNITYSDK_OFFSET(0x7231C80)
#define CLASS_3_2EA7C56C62D75B11_UPDATE_OFFSET UNITYSDK_OFFSET(0x7231A10)
#define CLASS_3_2EA7C56C62D75B11__CTOR_OFFSET UNITYSDK_OFFSET(0x7231B90)

inline static constexpr unsigned int Class_3_2EA7C56C62D75B11_TypeDefinitionIndex = 67560;

class Class_3_2EA7C56C62D75B11 : public ::Class_2_F33340E023067DAF
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_UPDATE_OFFSET))(this);
	}

	::System::Void Method_3_A11144519902A27F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_METHOD_3_A11144519902A27F_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Int32 Method_3_D03DF637496AD8AD(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::Class_3_B1250269F1E3BC27_Struct_2_66EE559EF62DCFBC a3, ::Class_3_B1250269F1E3BC27* a4)
	{
		return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Class_3_B1250269F1E3BC27_Struct_2_66EE559EF62DCFBC, ::Class_3_B1250269F1E3BC27*))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_METHOD_3_D03DF637496AD8AD_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_658B76B8CF96D59E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_METHOD_3_658B76B8CF96D59E_OFFSET))(a1);
	}

	static ::System::Single Method_3_52A3FEDD63707B13(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_METHOD_3_52A3FEDD63707B13_OFFSET))(a1);
	}

	static ::System::Void Method_3_BC710BFD9E4F5D17(::Class_3_B1250269F1E3BC27* a1)
	{
		return ((::System::Void(*)(::Class_3_B1250269F1E3BC27*))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_METHOD_3_BC710BFD9E4F5D17_OFFSET))(a1);
	}

	::System::Void Method_3_94A25BF02976417C(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_METHOD_3_94A25BF02976417C_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_100A02C6282EBADF(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_METHOD_3_100A02C6282EBADF_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_9AD84C136DF0D471(::Class_3_B1250269F1E3BC27* a1)
	{
		return ((::System::Boolean(*)(::Class_3_B1250269F1E3BC27*))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_METHOD_3_9AD84C136DF0D471_OFFSET))(a1);
	}
};
