#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneChangeColliderSize_ColliderType.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_3068493346D129A9;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_9455F94C89259DF5_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x6F16310)
#define CLASS_3_9455F94C89259DF5_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x6F16750)
#define CLASS_3_9455F94C89259DF5_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x6F165D0)
#define CLASS_3_9455F94C89259DF5_METHOD_3_373A7669D8511BEE_OFFSET UNITYSDK_OFFSET(0x6F16950)
#define CLASS_3_9455F94C89259DF5_METHOD_3_5924CD94D69CD853_OFFSET UNITYSDK_OFFSET(0x6F18160)
#define CLASS_3_9455F94C89259DF5_METHOD_3_64C0A085F3D53F3D_OFFSET UNITYSDK_OFFSET(0x6F18600)
#define CLASS_3_9455F94C89259DF5_METHOD_3_9D6D482D0D66151C_1_OFFSET UNITYSDK_OFFSET(0x6F185A0)
#define CLASS_3_9455F94C89259DF5_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0x6F18540)
#define CLASS_3_9455F94C89259DF5_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x6F18F30)
#define CLASS_3_9455F94C89259DF5_METHOD_3_BE84C6F9C650F18D_OFFSET UNITYSDK_OFFSET(0x6F179F0)
#define CLASS_3_9455F94C89259DF5_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x6F18ED0)
#define CLASS_3_9455F94C89259DF5_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6F168F0)
#define CLASS_3_9455F94C89259DF5__CTOR_OFFSET UNITYSDK_OFFSET(0x6F168D0)

inline static constexpr unsigned int Class_3_9455F94C89259DF5_TypeDefinitionIndex = 47884;

class Class_3_9455F94C89259DF5 : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9455F94C89259DF5__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_9455F94C89259DF5_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9455F94C89259DF5_LATEUPDATE_OFFSET))(this);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9455F94C89259DF5_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9455F94C89259DF5_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_373A7669D8511BEE(::Class_3_3068493346D129A9* a1)
	{
		return ((::System::Void(*)(::Class_3_3068493346D129A9*))((::PBYTE)hIl2Cpp + CLASS_3_9455F94C89259DF5_METHOD_3_373A7669D8511BEE_OFFSET))(a1);
	}

	static ::System::Void Method_3_BE84C6F9C650F18D(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_9455F94C89259DF5_METHOD_3_BE84C6F9C650F18D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_9455F94C89259DF5_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}

	static ::System::Void Method_3_9D6D482D0D66151C_1(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_9455F94C89259DF5_METHOD_3_9D6D482D0D66151C_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_5924CD94D69CD853(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_9455F94C89259DF5_METHOD_3_5924CD94D69CD853_OFFSET))(a1);
	}

	static ::System::Void Method_3_64C0A085F3D53F3D(::Class_3_3068493346D129A9* a1, ::System::Int32 a2, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType, ::System::Collections::Generic::List_1<::System::String*>*>* a3)
	{
		return ((::System::Void(*)(::Class_3_3068493346D129A9*, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType, ::System::Collections::Generic::List_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + CLASS_3_9455F94C89259DF5_METHOD_3_64C0A085F3D53F3D_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9455F94C89259DF5_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_9455F94C89259DF5_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}
};
