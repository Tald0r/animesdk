#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_DCB43F73A1CE4CEA.h"

class Class_3_07B78E3CD989F5D5;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define CLASS_3_59E514F2B1444ED6_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x9B6E4E0)
#define CLASS_3_59E514F2B1444ED6_METHOD_3_140849980E441EB4_OFFSET UNITYSDK_OFFSET(0x9B6FBC0)
#define CLASS_3_59E514F2B1444ED6_METHOD_3_5402F924A8CCFA8C_OFFSET UNITYSDK_OFFSET(0x9B6F610)
#define CLASS_3_59E514F2B1444ED6_METHOD_3_7458CF52D3A1D39D_OFFSET UNITYSDK_OFFSET(0x9B70450)
#define CLASS_3_59E514F2B1444ED6_METHOD_3_85CD1E9A45BC2ACA_OFFSET UNITYSDK_OFFSET(0x9B70140)
#define CLASS_3_59E514F2B1444ED6_METHOD_3_898160BDD118047E_OFFSET UNITYSDK_OFFSET(0x9B6E9F0)
#define CLASS_3_59E514F2B1444ED6_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x9B6EFF0)
#define CLASS_3_59E514F2B1444ED6_METHOD_3_C4513CEAA699B038_OFFSET UNITYSDK_OFFSET(0x9B6F060)
#define CLASS_3_59E514F2B1444ED6_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9B6E990)
#define CLASS_3_59E514F2B1444ED6_METHOD_3_EE0CFF7F6F24BA6C_OFFSET UNITYSDK_OFFSET(0x9B6ED20)
#define CLASS_3_59E514F2B1444ED6_METHOD_3_FF3FA3030AB21E73_OFFSET UNITYSDK_OFFSET(0x9B6FEC0)
#define CLASS_3_59E514F2B1444ED6_UPDATE_OFFSET UNITYSDK_OFFSET(0x9B6E7F0)
#define CLASS_3_59E514F2B1444ED6__CTOR_OFFSET UNITYSDK_OFFSET(0x9B6E970)

inline static constexpr unsigned int Class_3_59E514F2B1444ED6_TypeDefinitionIndex = 76968;

class Class_3_59E514F2B1444ED6 : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_59E514F2B1444ED6__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_59E514F2B1444ED6_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_59E514F2B1444ED6_UPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_59E514F2B1444ED6_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_898160BDD118047E(::MoleMole::EntityHandle a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_59E514F2B1444ED6_METHOD_3_898160BDD118047E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_EE0CFF7F6F24BA6C(::Class_3_07B78E3CD989F5D5* a1)
	{
		return ((::System::Void(*)(::Class_3_07B78E3CD989F5D5*))((::PBYTE)hIl2Cpp + CLASS_3_59E514F2B1444ED6_METHOD_3_EE0CFF7F6F24BA6C_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_59E514F2B1444ED6_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_C4513CEAA699B038(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_59E514F2B1444ED6_METHOD_3_C4513CEAA699B038_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_5402F924A8CCFA8C(::MoleMole::EntityHandle a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_59E514F2B1444ED6_METHOD_3_5402F924A8CCFA8C_OFFSET))(a1, a2);
	}

	static ::Struct_2_DCB43F73A1CE4CEA Method_3_140849980E441EB4(::MoleMole::EntityHandle a1, ::System::String* a2)
	{
		return ((::Struct_2_DCB43F73A1CE4CEA(*)(::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_59E514F2B1444ED6_METHOD_3_140849980E441EB4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FF3FA3030AB21E73(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_59E514F2B1444ED6_METHOD_3_FF3FA3030AB21E73_OFFSET))(a1);
	}

	static ::System::Void Method_3_85CD1E9A45BC2ACA(::MoleMole::EntityHandle a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_59E514F2B1444ED6_METHOD_3_85CD1E9A45BC2ACA_OFFSET))(a1, a2);
	}

	::System::Void Method_3_7458CF52D3A1D39D(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_59E514F2B1444ED6_METHOD_3_7458CF52D3A1D39D_OFFSET))(this, a1);
	}
};
