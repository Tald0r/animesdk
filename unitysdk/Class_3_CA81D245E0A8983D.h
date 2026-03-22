#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/Class_3_82C28B72EAFB6A77_Enum_3_57926CA561125BF5.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_82C28B72EAFB6A77;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace UnityEngine { class Animator; }

#define CLASS_3_CA81D245E0A8983D_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x75A4080)
#define CLASS_3_CA81D245E0A8983D_METHOD_3_33E38367D69D2421_OFFSET UNITYSDK_OFFSET(0x75A5800)
#define CLASS_3_CA81D245E0A8983D_METHOD_3_41DD97DE60786346_OFFSET UNITYSDK_OFFSET(0x75A4610)
#define CLASS_3_CA81D245E0A8983D_METHOD_3_6CBC5480EF53D522_OFFSET UNITYSDK_OFFSET(0x75A5130)
#define CLASS_3_CA81D245E0A8983D_METHOD_3_8705C780A391D9CF_OFFSET UNITYSDK_OFFSET(0x75A49B0)
#define CLASS_3_CA81D245E0A8983D_METHOD_3_8E68591C55AB4AEF_OFFSET UNITYSDK_OFFSET(0x75A5450)
#define CLASS_3_CA81D245E0A8983D_METHOD_3_90174B2E9468FC00_OFFSET UNITYSDK_OFFSET(0x75A5360)
#define CLASS_3_CA81D245E0A8983D_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x75A5730)
#define CLASS_3_CA81D245E0A8983D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x75A57A0)
#define CLASS_3_CA81D245E0A8983D_METHOD_3_E800CA804B13CF7E_OFFSET UNITYSDK_OFFSET(0x75A5150)
#define CLASS_3_CA81D245E0A8983D_METHOD_3_FEF1ED0A798B7642_OFFSET UNITYSDK_OFFSET(0x75A56C0)
#define CLASS_3_CA81D245E0A8983D_UPDATE_OFFSET UNITYSDK_OFFSET(0x75A4470)
#define CLASS_3_CA81D245E0A8983D__CTOR_OFFSET UNITYSDK_OFFSET(0x75A45F0)

inline static constexpr unsigned int Class_3_CA81D245E0A8983D_TypeDefinitionIndex = 70852;

class Class_3_CA81D245E0A8983D : public ::Class_2_F33340E023067DAF
{
public:
	// static const ::System::Single Field_3_1; // 0x0
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA81D245E0A8983D__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_CA81D245E0A8983D_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA81D245E0A8983D_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_41DD97DE60786346(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_CA81D245E0A8983D_METHOD_3_41DD97DE60786346_OFFSET))(a1);
	}

	static ::System::Void Method_3_8705C780A391D9CF(::Class_3_82C28B72EAFB6A77* a1, ::MoleMole::Battle::Entity* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_3_82C28B72EAFB6A77*, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_CA81D245E0A8983D_METHOD_3_8705C780A391D9CF_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_FEF1ED0A798B7642(::Class_3_82C28B72EAFB6A77* a1, ::UnityEngine::Animator* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_82C28B72EAFB6A77*, ::UnityEngine::Animator*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CA81D245E0A8983D_METHOD_3_FEF1ED0A798B7642_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_6CBC5480EF53D522(::Class_3_82C28B72EAFB6A77* a1, ::Class_3_82C28B72EAFB6A77_Enum_3_57926CA561125BF5 a2)
	{
		return ((::System::Void(*)(::Class_3_82C28B72EAFB6A77*, ::Class_3_82C28B72EAFB6A77_Enum_3_57926CA561125BF5))((::PBYTE)hIl2Cpp + CLASS_3_CA81D245E0A8983D_METHOD_3_6CBC5480EF53D522_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_3_E800CA804B13CF7E()
	{
		return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + CLASS_3_CA81D245E0A8983D_METHOD_3_E800CA804B13CF7E_OFFSET))();
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_CA81D245E0A8983D_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_8E68591C55AB4AEF(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CA81D245E0A8983D_METHOD_3_8E68591C55AB4AEF_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA81D245E0A8983D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Boolean Method_3_90174B2E9468FC00(::Class_3_82C28B72EAFB6A77* a1)
	{
		return ((::System::Boolean(*)(::Class_3_82C28B72EAFB6A77*))((::PBYTE)hIl2Cpp + CLASS_3_CA81D245E0A8983D_METHOD_3_90174B2E9468FC00_OFFSET))(a1);
	}

	static ::System::Void Method_3_33E38367D69D2421(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_CA81D245E0A8983D_METHOD_3_33E38367D69D2421_OFFSET))(a1);
	}
};
