#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_6124F7AF16B30AB1;
class Class_3_A5AF8EA2F7094EFB;
namespace MoleMole { class MonoEffect; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_B2E67033AD0DA4DA_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x861C5D0)
#define CLASS_3_B2E67033AD0DA4DA_METHOD_3_39764272A7CF6D73_OFFSET UNITYSDK_OFFSET(0x861DBA0)
#define CLASS_3_B2E67033AD0DA4DA_METHOD_3_47269B68659B81CF_OFFSET UNITYSDK_OFFSET(0x861D720)
#define CLASS_3_B2E67033AD0DA4DA_METHOD_3_48BC5F64F40CAC0F_OFFSET UNITYSDK_OFFSET(0x861CBF0)
#define CLASS_3_B2E67033AD0DA4DA_METHOD_3_6A8BC08449E36907_OFFSET UNITYSDK_OFFSET(0x861D450)
#define CLASS_3_B2E67033AD0DA4DA_METHOD_3_8F697642FBF3BDA7_OFFSET UNITYSDK_OFFSET(0x861E730)
#define CLASS_3_B2E67033AD0DA4DA_METHOD_3_AA0DFD8C22D30009_OFFSET UNITYSDK_OFFSET(0x861C970)
#define CLASS_3_B2E67033AD0DA4DA_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x861C900)
#define CLASS_3_B2E67033AD0DA4DA_METHOD_3_EFBE57A1AA4482D7_OFFSET UNITYSDK_OFFSET(0x861DCE0)
#define CLASS_3_B2E67033AD0DA4DA__CTOR_OFFSET UNITYSDK_OFFSET(0x861C8E0)

inline static constexpr unsigned int Class_3_B2E67033AD0DA4DA_TypeDefinitionIndex = 51908;

class Class_3_B2E67033AD0DA4DA : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B2E67033AD0DA4DA__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_B2E67033AD0DA4DA_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_B2E67033AD0DA4DA_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_AA0DFD8C22D30009(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B2E67033AD0DA4DA_METHOD_3_AA0DFD8C22D30009_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_6A8BC08449E36907(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B2E67033AD0DA4DA_METHOD_3_6A8BC08449E36907_OFFSET))(a1, a2);
	}

	::System::Void Method_3_48BC5F64F40CAC0F(::Class_3_A5AF8EA2F7094EFB* a1, ::Class_3_6124F7AF16B30AB1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A5AF8EA2F7094EFB*, ::Class_3_6124F7AF16B30AB1*))((::PBYTE)hIl2Cpp + CLASS_3_B2E67033AD0DA4DA_METHOD_3_48BC5F64F40CAC0F_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_47269B68659B81CF(::Class_3_6124F7AF16B30AB1* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_6124F7AF16B30AB1*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_B2E67033AD0DA4DA_METHOD_3_47269B68659B81CF_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_39764272A7CF6D73(::Class_3_A5AF8EA2F7094EFB* a1, ::Class_3_6124F7AF16B30AB1* a2)
	{
		return ((::System::Void(*)(::Class_3_A5AF8EA2F7094EFB*, ::Class_3_6124F7AF16B30AB1*))((::PBYTE)hIl2Cpp + CLASS_3_B2E67033AD0DA4DA_METHOD_3_39764272A7CF6D73_OFFSET))(a1, a2);
	}

	::System::Void Method_3_8F697642FBF3BDA7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_B2E67033AD0DA4DA_METHOD_3_8F697642FBF3BDA7_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_EFBE57A1AA4482D7(::MoleMole::MonoEffect* a1, ::Class_3_A5AF8EA2F7094EFB* a2)
	{
		return ((::System::Void(*)(::MoleMole::MonoEffect*, ::Class_3_A5AF8EA2F7094EFB*))((::PBYTE)hIl2Cpp + CLASS_3_B2E67033AD0DA4DA_METHOD_3_EFBE57A1AA4482D7_OFFSET))(a1, a2);
	}
};
