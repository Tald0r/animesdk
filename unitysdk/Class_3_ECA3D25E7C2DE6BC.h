#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5560EE9F1F33A604.h"

class Class_4_921BBA4FF7CA4B63;
class Class_5_F638703ACD0FA08E;
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_ECA3D25E7C2DE6BC_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x699EAD0)
#define CLASS_3_ECA3D25E7C2DE6BC_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x699EED0)
#define CLASS_3_ECA3D25E7C2DE6BC_METHOD_3_830F4DBD4FF1750A_OFFSET UNITYSDK_OFFSET(0x699EF40)
#define CLASS_3_ECA3D25E7C2DE6BC_METHOD_3_8F12E09D1588F47D_OFFSET UNITYSDK_OFFSET(0x699ECA0)
#define CLASS_3_ECA3D25E7C2DE6BC_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x699F4A0)
#define CLASS_3_ECA3D25E7C2DE6BC__CTOR_OFFSET UNITYSDK_OFFSET(0x699EE80)

inline static constexpr unsigned int Class_3_ECA3D25E7C2DE6BC_TypeDefinitionIndex = 67702;

class Class_3_ECA3D25E7C2DE6BC : public ::Class_2_5560EE9F1F33A604
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ECA3D25E7C2DE6BC__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_ECA3D25E7C2DE6BC_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_8F12E09D1588F47D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_ECA3D25E7C2DE6BC_METHOD_3_8F12E09D1588F47D_OFFSET))(this, a1);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_ECA3D25E7C2DE6BC_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_830F4DBD4FF1750A(::Class_4_921BBA4FF7CA4B63* a1, ::Class_5_F638703ACD0FA08E* a2)
	{
		return ((::System::Void(*)(::Class_4_921BBA4FF7CA4B63*, ::Class_5_F638703ACD0FA08E*))((::PBYTE)hIl2Cpp + CLASS_3_ECA3D25E7C2DE6BC_METHOD_3_830F4DBD4FF1750A_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_ECA3D25E7C2DE6BC_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}
};
