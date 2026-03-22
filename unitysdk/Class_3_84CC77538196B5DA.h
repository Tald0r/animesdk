#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/Class_3_84CC77538196B5DA_Struct_2_04EE0A3341480476_1.h"
#include "unitysdk/MoleMole/Config/EntityType.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_DC3AD3C88C3F75B6;
class Class_3_734E705B111DCC0C;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace RootMotion::FinalIK { class GrounderIK; }
namespace RootMotion::FinalIK { class Grounding; }
namespace UnityEngine { class Transform; }

#define CLASS_3_84CC77538196B5DA_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xD09EDE0)
#define CLASS_3_84CC77538196B5DA_METHOD_3_05F3233EEA9AB1E4_OFFSET UNITYSDK_OFFSET(0xD09F9A0)
#define CLASS_3_84CC77538196B5DA_METHOD_3_085E2BA37BC1A059_OFFSET UNITYSDK_OFFSET(0xD0A00E0)
#define CLASS_3_84CC77538196B5DA_METHOD_3_09B5B6C6398DBC2F_OFFSET UNITYSDK_OFFSET(0xD0A14E0)
#define CLASS_3_84CC77538196B5DA_METHOD_3_28DA9E63AC152B04_OFFSET UNITYSDK_OFFSET(0xD0A0E40)
#define CLASS_3_84CC77538196B5DA_METHOD_3_41CD735E69603B87_OFFSET UNITYSDK_OFFSET(0xD0A17E0)
#define CLASS_3_84CC77538196B5DA_METHOD_3_48FFF4356E60B1FF_OFFSET UNITYSDK_OFFSET(0xD0A16A0)
#define CLASS_3_84CC77538196B5DA_METHOD_3_49581DC19BD3C45B_OFFSET UNITYSDK_OFFSET(0xD0A1450)
#define CLASS_3_84CC77538196B5DA_METHOD_3_4E65087D2CE42DA6_OFFSET UNITYSDK_OFFSET(0xD0A11B0)
#define CLASS_3_84CC77538196B5DA_METHOD_3_5AACE6E6F4357D33_OFFSET UNITYSDK_OFFSET(0xD09F320)
#define CLASS_3_84CC77538196B5DA_METHOD_3_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0xD0A1770)
#define CLASS_3_84CC77538196B5DA_METHOD_3_956701DD84BE0459_OFFSET UNITYSDK_OFFSET(0xD09FF90)
#define CLASS_3_84CC77538196B5DA_METHOD_3_9E3CA36AC3D56F47_OFFSET UNITYSDK_OFFSET(0xD09FB70)
#define CLASS_3_84CC77538196B5DA_METHOD_3_A11144519902A27F_OFFSET UNITYSDK_OFFSET(0xD0A1630)
#define CLASS_3_84CC77538196B5DA_METHOD_3_A50582173F410ACE_OFFSET UNITYSDK_OFFSET(0xD0A0390)
#define CLASS_3_84CC77538196B5DA_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xD0A1140)
#define CLASS_3_84CC77538196B5DA_METHOD_3_BDAEA205627AF268_OFFSET UNITYSDK_OFFSET(0xD09F200)
#define CLASS_3_84CC77538196B5DA_METHOD_3_C3D363930951B40F_OFFSET UNITYSDK_OFFSET(0xD09FD90)
#define CLASS_3_84CC77538196B5DA_METHOD_3_CBDC0701976E592A_OFFSET UNITYSDK_OFFSET(0xD0A0830)
#define CLASS_3_84CC77538196B5DA_METHOD_3_D9A79DA2823B205C_OFFSET UNITYSDK_OFFSET(0xD0A0D30)
#define CLASS_3_84CC77538196B5DA_METHOD_3_E8F49BF844103AAC_OFFSET UNITYSDK_OFFSET(0xD0A19B0)
#define CLASS_3_84CC77538196B5DA_METHOD_3_ECD6858DF69DA73A_OFFSET UNITYSDK_OFFSET(0xD0A1370)
#define CLASS_3_84CC77538196B5DA__CTOR_OFFSET UNITYSDK_OFFSET(0xD09F1E0)

inline static constexpr unsigned int Class_3_84CC77538196B5DA_TypeDefinitionIndex = 46285;

class Class_3_84CC77538196B5DA : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_CREATEFILTERS_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_BDAEA205627AF268(::Class_2_DC3AD3C88C3F75B6* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_DC3AD3C88C3F75B6*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_BDAEA205627AF268_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5AACE6E6F4357D33(::System::Boolean a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_5AACE6E6F4357D33_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_05F3233EEA9AB1E4(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_05F3233EEA9AB1E4_OFFSET))(a1);
	}

	static ::System::Void Method_3_9E3CA36AC3D56F47(::Class_3_734E705B111DCC0C* a1)
	{
		return ((::System::Void(*)(::Class_3_734E705B111DCC0C*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_9E3CA36AC3D56F47_OFFSET))(a1);
	}

	::System::Void Method_3_C3D363930951B40F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_C3D363930951B40F_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_956701DD84BE0459(::System::Boolean a1, ::MoleMole::Battle::Entity* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_956701DD84BE0459_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_A50582173F410ACE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_A50582173F410ACE_OFFSET))(this, a1);
	}

	::System::Void Method_3_CBDC0701976E592A(::Class_3_734E705B111DCC0C* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_734E705B111DCC0C*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_CBDC0701976E592A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_4E65087D2CE42DA6(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_4E65087D2CE42DA6_OFFSET))(a1);
	}

	static ::System::Void Method_3_ECD6858DF69DA73A(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_ECD6858DF69DA73A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_49581DC19BD3C45B(::Class_3_734E705B111DCC0C* a1)
	{
		return ((::System::Boolean(*)(::Class_3_734E705B111DCC0C*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_49581DC19BD3C45B_OFFSET))(a1);
	}

	static ::System::Void Method_3_09B5B6C6398DBC2F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_09B5B6C6398DBC2F_OFFSET))(a1);
	}

	::System::Void Method_3_A11144519902A27F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_A11144519902A27F_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_48FFF4356E60B1FF(::RootMotion::FinalIK::Grounding* a1, ::System::Single a2, ::System::Single a3, ::Class_3_84CC77538196B5DA_Struct_2_04EE0A3341480476_1& a4)
	{
		return ((::System::Void(*)(::RootMotion::FinalIK::Grounding*, ::System::Single, ::System::Single, ::Class_3_84CC77538196B5DA_Struct_2_04EE0A3341480476_1&))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_48FFF4356E60B1FF_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_6B6AE2B3E1C3264F(::Class_3_734E705B111DCC0C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_734E705B111DCC0C*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}

	static ::RootMotion::FinalIK::GrounderIK* Method_3_28DA9E63AC152B04(::UnityEngine::Transform* a1, ::MoleMole::Config::EntityType a2)
	{
		return ((::RootMotion::FinalIK::GrounderIK*(*)(::UnityEngine::Transform*, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_28DA9E63AC152B04_OFFSET))(a1, a2);
	}

	::System::Void Method_3_41CD735E69603B87(::Class_3_734E705B111DCC0C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_734E705B111DCC0C*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_41CD735E69603B87_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_E8F49BF844103AAC(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_E8F49BF844103AAC_OFFSET))(a1);
	}

	static ::System::Void Method_3_085E2BA37BC1A059(::Class_3_734E705B111DCC0C* a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_734E705B111DCC0C*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_085E2BA37BC1A059_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_D9A79DA2823B205C(::Class_3_734E705B111DCC0C* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_734E705B111DCC0C*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_D9A79DA2823B205C_OFFSET))(this, a1, a2);
	}
};
