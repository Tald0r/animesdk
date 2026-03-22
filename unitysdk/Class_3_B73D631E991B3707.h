#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/Struct_2_9E75F47F2670B678.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_8F19DA8B255A2CD0;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_B73D631E991B3707_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x64245B0)
#define CLASS_3_B73D631E991B3707_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0x6424DB0)
#define CLASS_3_B73D631E991B3707_METHOD_3_B657C97BCCA720F2_OFFSET UNITYSDK_OFFSET(0x64251E0)
#define CLASS_3_B73D631E991B3707_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x6424D40)
#define CLASS_3_B73D631E991B3707_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6424CE0)
#define CLASS_3_B73D631E991B3707_METHOD_3_D9ACA6584135F726_OFFSET UNITYSDK_OFFSET(0x6425050)
#define CLASS_3_B73D631E991B3707_METHOD_3_EC23DC06D9179AD6_OFFSET UNITYSDK_OFFSET(0x6424E10)
#define CLASS_3_B73D631E991B3707_UPDATE_OFFSET UNITYSDK_OFFSET(0x6424B40)
#define CLASS_3_B73D631E991B3707__CTOR_OFFSET UNITYSDK_OFFSET(0x6424CC0)

inline static constexpr unsigned int Class_3_B73D631E991B3707_TypeDefinitionIndex = 52385;

class Class_3_B73D631E991B3707 : public ::Class_2_F33340E023067DAF
{
public:
	static ::Struct_2_9E75F47F2670B678* StaticGet_Field_3_2()
	{
		return (::Struct_2_9E75F47F2670B678*)Il2CppClass::FromTypeDefinitionIndex(Class_3_B73D631E991B3707_TypeDefinitionIndex)->GetStaticField(0xDFB0);
	}
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B73D631E991B3707__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_B73D631E991B3707_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B73D631E991B3707_UPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B73D631E991B3707_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_B73D631E991B3707_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B73D631E991B3707_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}

	static ::System::Void Method_3_EC23DC06D9179AD6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_B73D631E991B3707_METHOD_3_EC23DC06D9179AD6_OFFSET))(a1);
	}

	::System::Void Method_3_D9ACA6584135F726(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B73D631E991B3707_METHOD_3_D9ACA6584135F726_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_B657C97BCCA720F2(::Class_3_8F19DA8B255A2CD0* a1)
	{
		return ((::System::Void(*)(::Class_3_8F19DA8B255A2CD0*))((::PBYTE)hIl2Cpp + CLASS_3_B73D631E991B3707_METHOD_3_B657C97BCCA720F2_OFFSET))(a1);
	}
};
