#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52645FD19F442171.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_EC25B6E84130E2CA;
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_A02C194C3046BF3E_METHOD_3_08A500CCFA7B1882_OFFSET UNITYSDK_OFFSET(0xBB90020)
#define CLASS_3_A02C194C3046BF3E_METHOD_3_47D42B95159AE8D1_OFFSET UNITYSDK_OFFSET(0xBB8FE50)
#define CLASS_3_A02C194C3046BF3E_METHOD_3_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0xBB8FFB0)
#define CLASS_3_A02C194C3046BF3E_METHOD_3_96F6E9EA89A38FD1_OFFSET UNITYSDK_OFFSET(0xBB8FEF0)
#define CLASS_3_A02C194C3046BF3E_METHOD_3_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0xBB90030)
#define CLASS_3_A02C194C3046BF3E_METHOD_3_AFD826ECAC8700A3_OFFSET UNITYSDK_OFFSET(0xBB8F8C0)
#define CLASS_3_A02C194C3046BF3E_METHOD_3_F16B72C518238A81_OFFSET UNITYSDK_OFFSET(0xBB900A0)
#define CLASS_3_A02C194C3046BF3E__CTOR_OFFSET UNITYSDK_OFFSET(0xBB8FFA0)

inline static constexpr unsigned int Class_3_A02C194C3046BF3E_TypeDefinitionIndex = 65308;

class Class_3_A02C194C3046BF3E : public ::Class_2_52645FD19F442171
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A02C194C3046BF3E__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_AFD826ECAC8700A3(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A02C194C3046BF3E_METHOD_3_AFD826ECAC8700A3_OFFSET))(this, a1);
	}

	::System::Void Method_3_47D42B95159AE8D1(::Class_3_EC25B6E84130E2CA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EC25B6E84130E2CA*))((::PBYTE)hIl2Cpp + CLASS_3_A02C194C3046BF3E_METHOD_3_47D42B95159AE8D1_OFFSET))(this, a1);
	}

	::System::Void Method_3_96F6E9EA89A38FD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A02C194C3046BF3E_METHOD_3_96F6E9EA89A38FD1_OFFSET))(this);
	}

	::System::Void Method_3_6B6AE2B3E1C3264F(::Class_3_EC25B6E84130E2CA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EC25B6E84130E2CA*))((::PBYTE)hIl2Cpp + CLASS_3_A02C194C3046BF3E_METHOD_3_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}

	::System::Void Method_3_08A500CCFA7B1882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A02C194C3046BF3E_METHOD_3_08A500CCFA7B1882_OFFSET))(this);
	}

	::System::Void Method_3_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A02C194C3046BF3E_METHOD_3_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_3_F16B72C518238A81(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4, ::UnityEngine::Vector3 a5, ::System::Single a6)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A02C194C3046BF3E_METHOD_3_F16B72C518238A81_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
