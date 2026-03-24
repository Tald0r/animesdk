#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_1A7749BA27D4177A;
class Class_3_F35B080B137ECC46;
namespace MoleMole { class LaserSegments; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_7417BEBA6735CBDB_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x8BE8700)
#define CLASS_3_7417BEBA6735CBDB_METHOD_3_25EC451C0EA68F53_OFFSET UNITYSDK_OFFSET(0x8BE8A50)
#define CLASS_3_7417BEBA6735CBDB_METHOD_3_3A54BF1F585E6AF5_OFFSET UNITYSDK_OFFSET(0x8BE9C80)
#define CLASS_3_7417BEBA6735CBDB_METHOD_3_4461E13154E07E23_OFFSET UNITYSDK_OFFSET(0x8BE8E30)
#define CLASS_3_7417BEBA6735CBDB_METHOD_3_446B58EE3A834035_OFFSET UNITYSDK_OFFSET(0x8BE98D0)
#define CLASS_3_7417BEBA6735CBDB_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x8BE9C10)
#define CLASS_3_7417BEBA6735CBDB_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8BE9140)
#define CLASS_3_7417BEBA6735CBDB_METHOD_3_CCE5670A6089D465_OFFSET UNITYSDK_OFFSET(0x8BE91A0)
#define CLASS_3_7417BEBA6735CBDB_UPDATE_OFFSET UNITYSDK_OFFSET(0x8BE8970)
#define CLASS_3_7417BEBA6735CBDB__CTOR_OFFSET UNITYSDK_OFFSET(0x8BE8DB0)

inline static constexpr unsigned int Class_3_7417BEBA6735CBDB_TypeDefinitionIndex = 54756;

class Class_3_7417BEBA6735CBDB : public ::Class_2_F33340E023067DAF
{
public:
	::System::Action_2<::Class_3_1A7749BA27D4177A*, ::Class_3_F35B080B137ECC46*>* Field_3_2; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7417BEBA6735CBDB__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_7417BEBA6735CBDB_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7417BEBA6735CBDB_UPDATE_OFFSET))(this);
	}

	::System::Void Method_3_4461E13154E07E23(::System::Collections::Generic::List_1<::MoleMole::LaserSegments*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::LaserSegments*>*))((::PBYTE)hIl2Cpp + CLASS_3_7417BEBA6735CBDB_METHOD_3_4461E13154E07E23_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7417BEBA6735CBDB_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CCE5670A6089D465(::System::Collections::Generic::List_1<::MoleMole::LaserSegments*>* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::LaserSegments*>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_7417BEBA6735CBDB_METHOD_3_CCE5670A6089D465_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_446B58EE3A834035(::Class_3_1A7749BA27D4177A* a1, ::Class_3_F35B080B137ECC46* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1A7749BA27D4177A*, ::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_3_7417BEBA6735CBDB_METHOD_3_446B58EE3A834035_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_7417BEBA6735CBDB_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_3A54BF1F585E6AF5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_7417BEBA6735CBDB_METHOD_3_3A54BF1F585E6AF5_OFFSET))(this, a1);
	}

	::System::Void Method_3_25EC451C0EA68F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7417BEBA6735CBDB_METHOD_3_25EC451C0EA68F53_OFFSET))(this);
	}
};
