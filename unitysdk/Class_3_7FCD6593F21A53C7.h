#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"

class Class_3_F97B015544BE936B;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_7FCD6593F21A53C7_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x9E021C0)
#define CLASS_3_7FCD6593F21A53C7_METHOD_3_435E5BDF78C2CCAC_OFFSET UNITYSDK_OFFSET(0x9E02600)
#define CLASS_3_7FCD6593F21A53C7_METHOD_3_502DCE3B7F263632_1_OFFSET UNITYSDK_OFFSET(0x9E031B0)
#define CLASS_3_7FCD6593F21A53C7_METHOD_3_502DCE3B7F263632_OFFSET UNITYSDK_OFFSET(0x9E02BB0)
#define CLASS_3_7FCD6593F21A53C7_METHOD_3_8A40C6A24FAB0085_OFFSET UNITYSDK_OFFSET(0x9E02A60)
#define CLASS_3_7FCD6593F21A53C7_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x9E02590)
#define CLASS_3_7FCD6593F21A53C7_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9E02530)
#define CLASS_3_7FCD6593F21A53C7_METHOD_3_D39E40B3DB45D601_OFFSET UNITYSDK_OFFSET(0x9E027B0)
#define CLASS_3_7FCD6593F21A53C7_UPDATE_OFFSET UNITYSDK_OFFSET(0x9E02390)
#define CLASS_3_7FCD6593F21A53C7__CTOR_OFFSET UNITYSDK_OFFSET(0x9E02510)

inline static constexpr unsigned int Class_3_7FCD6593F21A53C7_TypeDefinitionIndex = 60235;

class Class_3_7FCD6593F21A53C7 : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7FCD6593F21A53C7__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_7FCD6593F21A53C7_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7FCD6593F21A53C7_UPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7FCD6593F21A53C7_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_7FCD6593F21A53C7_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_435E5BDF78C2CCAC(::Class_3_F97B015544BE936B* a1)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_7FCD6593F21A53C7_METHOD_3_435E5BDF78C2CCAC_OFFSET))(a1);
	}

	static ::System::Void Method_3_502DCE3B7F263632(::System::Single a1, ::Class_3_F97B015544BE936B* a2)
	{
		return ((::System::Void(*)(::System::Single, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_7FCD6593F21A53C7_METHOD_3_502DCE3B7F263632_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_D39E40B3DB45D601(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_7FCD6593F21A53C7_METHOD_3_D39E40B3DB45D601_OFFSET))(a1);
	}

	static ::System::Void Method_3_502DCE3B7F263632_1(::System::Single a1, ::Class_3_F97B015544BE936B* a2)
	{
		return ((::System::Void(*)(::System::Single, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_7FCD6593F21A53C7_METHOD_3_502DCE3B7F263632_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8A40C6A24FAB0085(::System::Single a1, ::Class_3_F97B015544BE936B* a2)
	{
		return ((::System::Void(*)(::System::Single, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_7FCD6593F21A53C7_METHOD_3_8A40C6A24FAB0085_OFFSET))(a1, a2);
	}
};
