#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"

class Class_3_6A6ED67B92DC299D;
class Class_3_F35B080B137ECC46;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace UnityEngine { class Collider; }

#define CLASS_3_1D7A0AF35B6A5220_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x9E54AE0)
#define CLASS_3_1D7A0AF35B6A5220_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x9E54DB0)
#define CLASS_3_1D7A0AF35B6A5220_METHOD_3_342DEB09D4CDAB08_OFFSET UNITYSDK_OFFSET(0x9E55650)
#define CLASS_3_1D7A0AF35B6A5220_METHOD_3_82AC87C4B49E102A_OFFSET UNITYSDK_OFFSET(0x9E55020)
#define CLASS_3_1D7A0AF35B6A5220_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x9E55D20)
#define CLASS_3_1D7A0AF35B6A5220_METHOD_3_BE2F919ACC591299_OFFSET UNITYSDK_OFFSET(0x9E54FB0)
#define CLASS_3_1D7A0AF35B6A5220_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9E54F50)
#define CLASS_3_1D7A0AF35B6A5220_METHOD_3_DEDB7FAD679369ED_OFFSET UNITYSDK_OFFSET(0x9E553B0)
#define CLASS_3_1D7A0AF35B6A5220__CTOR_OFFSET UNITYSDK_OFFSET(0x9E54F30)

inline static constexpr unsigned int Class_3_1D7A0AF35B6A5220_TypeDefinitionIndex = 38733;

class Class_3_1D7A0AF35B6A5220 : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1D7A0AF35B6A5220__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_1D7A0AF35B6A5220_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1D7A0AF35B6A5220_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1D7A0AF35B6A5220_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_BE2F919ACC591299(::Class_3_6A6ED67B92DC299D* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::Class_3_6A6ED67B92DC299D*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_3_1D7A0AF35B6A5220_METHOD_3_BE2F919ACC591299_OFFSET))(a1, a2);
	}

	::System::Void Method_3_82AC87C4B49E102A(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_1D7A0AF35B6A5220_METHOD_3_82AC87C4B49E102A_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_DEDB7FAD679369ED(::Class_3_F35B080B137ECC46* a1, ::Class_3_6A6ED67B92DC299D* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*, ::Class_3_6A6ED67B92DC299D*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1D7A0AF35B6A5220_METHOD_3_DEDB7FAD679369ED_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_342DEB09D4CDAB08(::Class_3_6A6ED67B92DC299D* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::Class_3_6A6ED67B92DC299D*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_3_1D7A0AF35B6A5220_METHOD_3_342DEB09D4CDAB08_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_1D7A0AF35B6A5220_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}
};
