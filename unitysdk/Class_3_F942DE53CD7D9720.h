#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/UnityEngine/AI/NavMeshHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_D2084E0C2DD39509;
class Class_3_F35B080B137ECC46;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_F942DE53CD7D9720_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x67996C0)
#define CLASS_3_F942DE53CD7D9720_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x67999F0)
#define CLASS_3_F942DE53CD7D9720_METHOD_3_32713BC8BECD08B1_OFFSET UNITYSDK_OFFSET(0x679D070)
#define CLASS_3_F942DE53CD7D9720_METHOD_3_4BDCD8817E21E5A1_OFFSET UNITYSDK_OFFSET(0x679A1A0)
#define CLASS_3_F942DE53CD7D9720_METHOD_3_66307A8FB98D95F6_OFFSET UNITYSDK_OFFSET(0x679C080)
#define CLASS_3_F942DE53CD7D9720_METHOD_3_6C9411267151B63B_OFFSET UNITYSDK_OFFSET(0x679A630)
#define CLASS_3_F942DE53CD7D9720_METHOD_3_6DF3232391235408_OFFSET UNITYSDK_OFFSET(0x679B920)
#define CLASS_3_F942DE53CD7D9720_METHOD_3_7A3627EA32CC751C_OFFSET UNITYSDK_OFFSET(0x679C480)
#define CLASS_3_F942DE53CD7D9720_METHOD_3_8F7455FDA1D67CEA_OFFSET UNITYSDK_OFFSET(0x679CE20)
#define CLASS_3_F942DE53CD7D9720_METHOD_3_94B4F6E872AF1B21_OFFSET UNITYSDK_OFFSET(0x679C570)
#define CLASS_3_F942DE53CD7D9720_METHOD_3_9F5B7D57846D8196_OFFSET UNITYSDK_OFFSET(0x679A900)
#define CLASS_3_F942DE53CD7D9720_METHOD_3_A11144519902A27F_OFFSET UNITYSDK_OFFSET(0x679D9A0)
#define CLASS_3_F942DE53CD7D9720_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x679CDB0)
#define CLASS_3_F942DE53CD7D9720_METHOD_3_BD489D0450E9005D_OFFSET UNITYSDK_OFFSET(0x679D520)
#define CLASS_3_F942DE53CD7D9720_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6799BD0)
#define CLASS_3_F942DE53CD7D9720_METHOD_3_CB4EBC49D3125938_OFFSET UNITYSDK_OFFSET(0x679A4C0)
#define CLASS_3_F942DE53CD7D9720_METHOD_3_D2094F2ADCBD9A7D_OFFSET UNITYSDK_OFFSET(0x679B5F0)
#define CLASS_3_F942DE53CD7D9720_METHOD_3_D30AD3157A1A0E32_OFFSET UNITYSDK_OFFSET(0x6799C30)
#define CLASS_3_F942DE53CD7D9720_METHOD_3_FABBC3FD0B634B18_OFFSET UNITYSDK_OFFSET(0x679D6E0)
#define CLASS_3_F942DE53CD7D9720__CCTOR_OFFSET UNITYSDK_OFFSET(0x6799B90)
#define CLASS_3_F942DE53CD7D9720__CTOR_OFFSET UNITYSDK_OFFSET(0x6799B70)

inline static constexpr unsigned int Class_3_F942DE53CD7D9720_TypeDefinitionIndex = 61402;

class Class_3_F942DE53CD7D9720 : public ::Class_2_F33340E023067DAF
{
public:
	static ::System::Boolean* StaticGet_Field_3_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_F942DE53CD7D9720_TypeDefinitionIndex)->GetStaticField(0x102E0);
	}
	static ::System::Boolean* StaticGet_Field_3_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_F942DE53CD7D9720_TypeDefinitionIndex)->GetStaticField(0x102E1);
	}
	::Nap::NapECS::EcsFilter* Field_3_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F942DE53CD7D9720__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F942DE53CD7D9720__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F942DE53CD7D9720_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F942DE53CD7D9720_LATEUPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F942DE53CD7D9720_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_D30AD3157A1A0E32(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F942DE53CD7D9720_METHOD_3_D30AD3157A1A0E32_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_4BDCD8817E21E5A1(::Class_3_D2084E0C2DD39509* a1)
	{
		return ((::System::Void(*)(::Class_3_D2084E0C2DD39509*))((::PBYTE)hIl2Cpp + CLASS_3_F942DE53CD7D9720_METHOD_3_4BDCD8817E21E5A1_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_3_CB4EBC49D3125938(::Class_3_D2084E0C2DD39509* a1)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_D2084E0C2DD39509*))((::PBYTE)hIl2Cpp + CLASS_3_F942DE53CD7D9720_METHOD_3_CB4EBC49D3125938_OFFSET))(a1);
	}

	static ::System::Void Method_3_6C9411267151B63B(::Class_3_D2084E0C2DD39509* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_D2084E0C2DD39509*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_F942DE53CD7D9720_METHOD_3_6C9411267151B63B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9F5B7D57846D8196(::Class_3_D2084E0C2DD39509* a1, ::System::Single a2, ::System::Int32 a3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::Class_3_D2084E0C2DD39509*, ::System::Single, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F942DE53CD7D9720_METHOD_3_9F5B7D57846D8196_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_6DF3232391235408(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F942DE53CD7D9720_METHOD_3_6DF3232391235408_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_7A3627EA32CC751C(::Class_3_D2084E0C2DD39509* a1)
	{
		return ((::System::Boolean(*)(::Class_3_D2084E0C2DD39509*))((::PBYTE)hIl2Cpp + CLASS_3_F942DE53CD7D9720_METHOD_3_7A3627EA32CC751C_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_D2094F2ADCBD9A7D(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::AI::NavMeshHit& a4, ::UnityEngine::Vector3& a5, ::System::Int32 a6)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::AI::NavMeshHit&, ::UnityEngine::Vector3&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F942DE53CD7D9720_METHOD_3_D2094F2ADCBD9A7D_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F942DE53CD7D9720_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Single Method_3_66307A8FB98D95F6(::Class_3_D2084E0C2DD39509* a1, ::Class_3_F35B080B137ECC46* a2)
	{
		return ((::System::Single(*)(::Class_3_D2084E0C2DD39509*, ::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_3_F942DE53CD7D9720_METHOD_3_66307A8FB98D95F6_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_8F7455FDA1D67CEA(::Class_3_D2084E0C2DD39509* a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Boolean(*)(::Class_3_D2084E0C2DD39509*, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F942DE53CD7D9720_METHOD_3_8F7455FDA1D67CEA_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_BD489D0450E9005D(::Class_3_D2084E0C2DD39509* a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_D2084E0C2DD39509*, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F942DE53CD7D9720_METHOD_3_BD489D0450E9005D_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_32713BC8BECD08B1(::Class_3_D2084E0C2DD39509* a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3, ::System::Single a4, ::System::Boolean a5, ::System::Int32 a6, ::System::Boolean a7)
	{
		return ((::System::Boolean(*)(::Class_3_D2084E0C2DD39509*, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F942DE53CD7D9720_METHOD_3_32713BC8BECD08B1_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_3_FABBC3FD0B634B18(::Class_3_D2084E0C2DD39509* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_D2084E0C2DD39509*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_F942DE53CD7D9720_METHOD_3_FABBC3FD0B634B18_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_94B4F6E872AF1B21(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::AI::NavMeshHit& a4, ::UnityEngine::Vector3& a5, ::System::Int32 a6)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::AI::NavMeshHit&, ::UnityEngine::Vector3&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F942DE53CD7D9720_METHOD_3_94B4F6E872AF1B21_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_A11144519902A27F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F942DE53CD7D9720_METHOD_3_A11144519902A27F_OFFSET))(this, a1);
	}
};
