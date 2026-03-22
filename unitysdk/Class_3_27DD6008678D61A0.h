#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/Enum_3_41227C43B8705FA0.h"
#include "unitysdk/Enum_3_5EA2B17DF83E32C8_2.h"
#include "unitysdk/Enum_3_F40B865AC61AB8D7.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_AE9C1930E611BFAC;
class Class_3_4076EB58F5C5BF5E;
class Class_3_DB131DEB756860DC;
class Class_3_ED0397BE2FFFB6B3;
namespace MoleMole { class MonoConfigurableCollider; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_3_27DD6008678D61A0_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xB080F90)
#define CLASS_3_27DD6008678D61A0_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xB081310)
#define CLASS_3_27DD6008678D61A0_METHOD_3_08DD8EB0678689ED_OFFSET UNITYSDK_OFFSET(0xB082110)
#define CLASS_3_27DD6008678D61A0_METHOD_3_17910C6233B7C066_OFFSET UNITYSDK_OFFSET(0xB085290)
#define CLASS_3_27DD6008678D61A0_METHOD_3_3DE949ACDA12E264_OFFSET UNITYSDK_OFFSET(0xB08A2A0)
#define CLASS_3_27DD6008678D61A0_METHOD_3_4C92EF9757E5BFCF_OFFSET UNITYSDK_OFFSET(0xB085CB0)
#define CLASS_3_27DD6008678D61A0_METHOD_3_60461E279480E202_OFFSET UNITYSDK_OFFSET(0xB08B720)
#define CLASS_3_27DD6008678D61A0_METHOD_3_68A71533AD243EC1_OFFSET UNITYSDK_OFFSET(0xB0861B0)
#define CLASS_3_27DD6008678D61A0_METHOD_3_7CB27BCD7F0EA61B_OFFSET UNITYSDK_OFFSET(0xB084A30)
#define CLASS_3_27DD6008678D61A0_METHOD_3_8CF0D875288EC746_OFFSET UNITYSDK_OFFSET(0xB085AE0)
#define CLASS_3_27DD6008678D61A0_METHOD_3_98C72A0C67D5B298_OFFSET UNITYSDK_OFFSET(0xB084040)
#define CLASS_3_27DD6008678D61A0_METHOD_3_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0xB0817B0)
#define CLASS_3_27DD6008678D61A0_METHOD_3_A83912A7F81D33B2_OFFSET UNITYSDK_OFFSET(0xB083DE0)
#define CLASS_3_27DD6008678D61A0_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xB084ED0)
#define CLASS_3_27DD6008678D61A0_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB085C50)
#define CLASS_3_27DD6008678D61A0_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB085BF0)
#define CLASS_3_27DD6008678D61A0_METHOD_3_CBD1E0212B9CC3A9_OFFSET UNITYSDK_OFFSET(0xB084F40)
#define CLASS_3_27DD6008678D61A0_METHOD_3_D9FF16FA18506AAB_OFFSET UNITYSDK_OFFSET(0xB086080)
#define CLASS_3_27DD6008678D61A0_WAITFORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xB081C20)
#define CLASS_3_27DD6008678D61A0__CCTOR_OFFSET UNITYSDK_OFFSET(0xB0820A0)
#define CLASS_3_27DD6008678D61A0__CTOR_OFFSET UNITYSDK_OFFSET(0xB082080)

inline static constexpr unsigned int Class_3_27DD6008678D61A0_TypeDefinitionIndex = 76151;

class Class_3_27DD6008678D61A0 : public ::Class_2_F33340E023067DAF
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Bounds>** StaticGet_Field_3_3()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Bounds>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_27DD6008678D61A0_TypeDefinitionIndex)->GetStaticField(0x42E80);
	}
	static ::System::Boolean* StaticGet_Field_3_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_27DD6008678D61A0_TypeDefinitionIndex)->GetStaticField(0x10B60);
	}
	::Nap::NapECS::EcsFilter* Field_3_2; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void WaitForFixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_WAITFORFIXEDUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_08DD8EB0678689ED(::Class_3_4076EB58F5C5BF5E* a1, ::Class_3_ED0397BE2FFFB6B3* a2)
	{
		return ((::System::Void(*)(::Class_3_4076EB58F5C5BF5E*, ::Class_3_ED0397BE2FFFB6B3*))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_08DD8EB0678689ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A83912A7F81D33B2(::Class_3_4076EB58F5C5BF5E* a1, ::Class_1_AE9C1930E611BFAC* a2, ::UnityEngine::Collider* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::Enum_3_41227C43B8705FA0 a6, ::UnityEngine::Vector3 a7)
	{
		return ((::System::Void(*)(::Class_3_4076EB58F5C5BF5E*, ::Class_1_AE9C1930E611BFAC*, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Enum_3_41227C43B8705FA0, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_A83912A7F81D33B2_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Boolean Method_3_98C72A0C67D5B298(::UnityEngine::Bounds& a1, ::Enum_3_5EA2B17DF83E32C8_2 a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds&, ::Enum_3_5EA2B17DF83E32C8_2))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_98C72A0C67D5B298_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_3_7CB27BCD7F0EA61B(::Enum_3_F40B865AC61AB8D7 a1, ::UnityEngine::Collider* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::UnityEngine::Vector3(*)(::Enum_3_F40B865AC61AB8D7, ::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_7CB27BCD7F0EA61B_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_CBD1E0212B9CC3A9(::Class_3_4076EB58F5C5BF5E* a1, ::Class_3_DB131DEB756860DC* a2)
	{
		return ((::System::Void(*)(::Class_3_4076EB58F5C5BF5E*, ::Class_3_DB131DEB756860DC*))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_CBD1E0212B9CC3A9_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_3_17910C6233B7C066(::MoleMole::MonoConfigurableCollider* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::System::Int32 a5, ::Il2CppArray<::UnityEngine::RaycastHit>* a6)
	{
		return ((::System::Int32(*)(::MoleMole::MonoConfigurableCollider*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Int32, ::Il2CppArray<::UnityEngine::RaycastHit>*))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_17910C6233B7C066_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_8CF0D875288EC746(::Class_3_4076EB58F5C5BF5E* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_3_4076EB58F5C5BF5E*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_8CF0D875288EC746_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_3_4C92EF9757E5BFCF(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_4C92EF9757E5BFCF_OFFSET))(a1, a2);
	}

	static ::System::Single Method_3_D9FF16FA18506AAB(::Class_3_4076EB58F5C5BF5E* a1)
	{
		return ((::System::Single(*)(::Class_3_4076EB58F5C5BF5E*))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_D9FF16FA18506AAB_OFFSET))(a1);
	}

	static ::System::Void Method_3_68A71533AD243EC1(::Class_3_4076EB58F5C5BF5E* a1, ::Class_3_DB131DEB756860DC* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_4076EB58F5C5BF5E*, ::Class_3_DB131DEB756860DC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_68A71533AD243EC1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_3DE949ACDA12E264(::Class_3_4076EB58F5C5BF5E* a1, ::Class_3_DB131DEB756860DC* a2)
	{
		return ((::System::Void(*)(::Class_3_4076EB58F5C5BF5E*, ::Class_3_DB131DEB756860DC*))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_3DE949ACDA12E264_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_60461E279480E202(::Class_3_4076EB58F5C5BF5E* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_4076EB58F5C5BF5E*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_60461E279480E202_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_9B2E710EB9D49BA6_OFFSET))();
	}
};
