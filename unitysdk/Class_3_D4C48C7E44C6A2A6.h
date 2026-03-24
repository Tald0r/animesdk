#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"

class Class_3_577338F062DABB28;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_D4C48C7E44C6A2A6_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xDBF80C0)
#define CLASS_3_D4C48C7E44C6A2A6_METHOD_3_22BF706A189D417F_OFFSET UNITYSDK_OFFSET(0xDBF85E0)
#define CLASS_3_D4C48C7E44C6A2A6_METHOD_3_5AB20B48B8E64C8B_OFFSET UNITYSDK_OFFSET(0xDBF88B0)
#define CLASS_3_D4C48C7E44C6A2A6_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xDBF8570)
#define CLASS_3_D4C48C7E44C6A2A6_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDBF8850)
#define CLASS_3_D4C48C7E44C6A2A6_METHOD_3_E10DB4083CB3460C_OFFSET UNITYSDK_OFFSET(0xDBF8D00)
#define CLASS_3_D4C48C7E44C6A2A6_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xDBF83D0)
#define CLASS_3_D4C48C7E44C6A2A6__CTOR_OFFSET UNITYSDK_OFFSET(0xDBF8550)

inline static constexpr unsigned int Class_3_D4C48C7E44C6A2A6_TypeDefinitionIndex = 43901;

class Class_3_D4C48C7E44C6A2A6 : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D4C48C7E44C6A2A6__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_D4C48C7E44C6A2A6_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void PostLateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D4C48C7E44C6A2A6_POSTLATEUPDATE_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_D4C48C7E44C6A2A6_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_22BF706A189D417F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_D4C48C7E44C6A2A6_METHOD_3_22BF706A189D417F_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D4C48C7E44C6A2A6_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_5AB20B48B8E64C8B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_D4C48C7E44C6A2A6_METHOD_3_5AB20B48B8E64C8B_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_E10DB4083CB3460C(::Class_3_577338F062DABB28* a1)
	{
		return ((::System::Void(*)(::Class_3_577338F062DABB28*))((::PBYTE)hIl2Cpp + CLASS_3_D4C48C7E44C6A2A6_METHOD_3_E10DB4083CB3460C_OFFSET))(a1);
	}
};
