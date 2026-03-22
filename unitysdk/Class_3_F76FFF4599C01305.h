#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_E05ACEDA03596B2A;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace UnityEngine { class Transform; }

#define CLASS_3_F76FFF4599C01305_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x7855360)
#define CLASS_3_F76FFF4599C01305_METHOD_3_566C2E8654887332_OFFSET UNITYSDK_OFFSET(0x78555D0)
#define CLASS_3_F76FFF4599C01305_METHOD_3_67386DC1A43C1CE7_OFFSET UNITYSDK_OFFSET(0x7855820)
#define CLASS_3_F76FFF4599C01305_METHOD_3_A758940C80B8CD3B_OFFSET UNITYSDK_OFFSET(0x7855A40)
#define CLASS_3_F76FFF4599C01305_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x78559D0)
#define CLASS_3_F76FFF4599C01305_METHOD_3_FD513D19C6DCE3F1_OFFSET UNITYSDK_OFFSET(0x7855640)
#define CLASS_3_F76FFF4599C01305__CTOR_OFFSET UNITYSDK_OFFSET(0x78555B0)

inline static constexpr unsigned int Class_3_F76FFF4599C01305_TypeDefinitionIndex = 51823;

class Class_3_F76FFF4599C01305 : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F76FFF4599C01305__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F76FFF4599C01305_CREATEFILTERS_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_566C2E8654887332(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F76FFF4599C01305_METHOD_3_566C2E8654887332_OFFSET))(a1, a2);
	}

	::System::Void Method_3_FD513D19C6DCE3F1(::MoleMole::Battle::Entity* a1, ::Class_3_E05ACEDA03596B2A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_E05ACEDA03596B2A*))((::PBYTE)hIl2Cpp + CLASS_3_F76FFF4599C01305_METHOD_3_FD513D19C6DCE3F1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_67386DC1A43C1CE7(::Class_3_E05ACEDA03596B2A* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E05ACEDA03596B2A*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_F76FFF4599C01305_METHOD_3_67386DC1A43C1CE7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F76FFF4599C01305_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_A758940C80B8CD3B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F76FFF4599C01305_METHOD_3_A758940C80B8CD3B_OFFSET))(this, a1);
	}
};
