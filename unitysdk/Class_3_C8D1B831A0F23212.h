#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_5653692493FD7DBE;
class Class_1_B7E341C5F1A6F199;
class Class_2_44D59DDDD1D4E4A6;
class Class_3_6124F7AF16B30AB1;
class Class_3_808E50509DBAA0C7;
class Class_3_A5AF8EA2F7094EFB;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_C8D1B831A0F23212_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xBC427D0)
#define CLASS_3_C8D1B831A0F23212_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBC42ED0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_0A89DF7E2426C648_OFFSET UNITYSDK_OFFSET(0xBC45880)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_130F74EAAC211FE9_OFFSET UNITYSDK_OFFSET(0xBC468D0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_1659BCB6D1A9FC34_OFFSET UNITYSDK_OFFSET(0xBC42FA0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_17244FE20EF89B04_OFFSET UNITYSDK_OFFSET(0xBC46060)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_1DC48CE39D546C53_OFFSET UNITYSDK_OFFSET(0xBC45020)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_257EA1D6609AAD66_OFFSET UNITYSDK_OFFSET(0xBC43960)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_2E173CEF054660AF_OFFSET UNITYSDK_OFFSET(0xBC46140)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_34E02A801C61D967_OFFSET UNITYSDK_OFFSET(0xBC437B0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xBC45DF0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_5012BA55A5968268_OFFSET UNITYSDK_OFFSET(0xBC45320)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_5AEE27870320E10A_OFFSET UNITYSDK_OFFSET(0xBC43C20)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_6535A021EBD37542_1_OFFSET UNITYSDK_OFFSET(0xBC45660)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_6535A021EBD37542_OFFSET UNITYSDK_OFFSET(0xBC45CE0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_68DA1CFFC320EAB9_1_OFFSET UNITYSDK_OFFSET(0xBC467F0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_68DA1CFFC320EAB9_OFFSET UNITYSDK_OFFSET(0xBC457B0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_724D2338ACD3E8A3_OFFSET UNITYSDK_OFFSET(0xBC44FB0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_73E3A8004F92B3A6_OFFSET UNITYSDK_OFFSET(0xBC45770)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_919BC32C7F31A55F_OFFSET UNITYSDK_OFFSET(0xBC46670)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_956A027AE3F22A28_OFFSET UNITYSDK_OFFSET(0xBC44550)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_A8518C4D4078676C_OFFSET UNITYSDK_OFFSET(0xBC46E10)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xBC46860)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_BBC2AFCF04301CE6_OFFSET UNITYSDK_OFFSET(0xBC43F00)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_C80D69F7F06B67B9_OFFSET UNITYSDK_OFFSET(0xBC43AB0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xBC45200)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xBC45260)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0xBC452C0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0xBC45820)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_5_OFFSET UNITYSDK_OFFSET(0xBC46610)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_6_OFFSET UNITYSDK_OFFSET(0xBC46E50)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBC451A0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_CA85150CEE3F23EB_OFFSET UNITYSDK_OFFSET(0xBC441A0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_F431E19239A4CC81_OFFSET UNITYSDK_OFFSET(0xBC44A70)
#define CLASS_3_C8D1B831A0F23212_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xBC42280)
#define CLASS_3_C8D1B831A0F23212_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBC433A0)
#define CLASS_3_C8D1B831A0F23212_POSTPARTICLESYSTEMUPDATE_OFFSET UNITYSDK_OFFSET(0xBC42F30)
#define CLASS_3_C8D1B831A0F23212_START_OFFSET UNITYSDK_OFFSET(0xBC420D0)
#define CLASS_3_C8D1B831A0F23212_UPDATE_OFFSET UNITYSDK_OFFSET(0xBC42D50)
#define CLASS_3_C8D1B831A0F23212__CCTOR_OFFSET UNITYSDK_OFFSET(0xBC437A0)
#define CLASS_3_C8D1B831A0F23212__CTOR_OFFSET UNITYSDK_OFFSET(0xBC43780)

inline static constexpr unsigned int Class_3_C8D1B831A0F23212_TypeDefinitionIndex = 68818;

class Class_3_C8D1B831A0F23212 : public ::Class_2_F33340E023067DAF
{
public:
	static ::System::Collections::Generic::List_1<::Class_1_5653692493FD7DBE*>** StaticGet_Field_3_2()
	{
		return (::System::Collections::Generic::List_1<::Class_1_5653692493FD7DBE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C8D1B831A0F23212_TypeDefinitionIndex)->GetStaticField(0x356E0);
	}
	static ::Class_3_C8D1B831A0F23212** StaticGet_Field_3_6()
	{
		return (::Class_3_C8D1B831A0F23212**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C8D1B831A0F23212_TypeDefinitionIndex)->GetStaticField(0x356E8);
	}
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_3_3()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C8D1B831A0F23212_TypeDefinitionIndex)->GetStaticField(0x356F0);
	}
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_3_4()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C8D1B831A0F23212_TypeDefinitionIndex)->GetStaticField(0x356F8);
	}
	static ::System::Boolean* StaticGet_Field_3_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_C8D1B831A0F23212_TypeDefinitionIndex)->GetStaticField(0xD180);
	}
	static ::Unity::Jobs::JobHandle* StaticGet_Field_3_0()
	{
		return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_3_C8D1B831A0F23212_TypeDefinitionIndex)->GetStaticField(0xD188);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_3_5; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212__CCTOR_OFFSET))();
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_ONDESTROY_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_LATEUPDATE_OFFSET))(this);
	}

	::System::Void PostParticleSystemUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_POSTPARTICLESYSTEMUPDATE_OFFSET))(this);
	}

	::System::Void PostLateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_POSTLATEUPDATE_OFFSET))(this);
	}

	static ::System::Boolean Method_3_34E02A801C61D967(::Class_3_6124F7AF16B30AB1* a1, ::Class_3_808E50509DBAA0C7* a2)
	{
		return ((::System::Boolean(*)(::Class_3_6124F7AF16B30AB1*, ::Class_3_808E50509DBAA0C7*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_34E02A801C61D967_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_257EA1D6609AAD66(::Class_3_6124F7AF16B30AB1* a1, ::Class_3_A5AF8EA2F7094EFB* a2)
	{
		return ((::System::Void(*)(::Class_3_6124F7AF16B30AB1*, ::Class_3_A5AF8EA2F7094EFB*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_257EA1D6609AAD66_OFFSET))(a1, a2);
	}

	::System::Void Method_3_5AEE27870320E10A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_5AEE27870320E10A_OFFSET))(this);
	}

	static ::System::Boolean Method_3_956A027AE3F22A28(::Class_3_6124F7AF16B30AB1* a1, ::Class_3_808E50509DBAA0C7* a2, ::System::Boolean a3, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>* a4)
	{
		return ((::System::Boolean(*)(::Class_3_6124F7AF16B30AB1*, ::Class_3_808E50509DBAA0C7*, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_956A027AE3F22A28_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_724D2338ACD3E8A3(::Class_3_808E50509DBAA0C7* a1)
	{
		return ((::System::Void(*)(::Class_3_808E50509DBAA0C7*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_724D2338ACD3E8A3_OFFSET))(a1);
	}

	static ::System::Void Method_3_C80D69F7F06B67B9(::Class_3_6124F7AF16B30AB1* a1, ::Class_3_A5AF8EA2F7094EFB* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_6124F7AF16B30AB1*, ::Class_3_A5AF8EA2F7094EFB*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_C80D69F7F06B67B9_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_1659BCB6D1A9FC34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_1659BCB6D1A9FC34_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Boolean Method_3_F431E19239A4CC81(::Class_3_F33F9DC5F4112336* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3, ::Class_3_808E50509DBAA0C7* a4)
	{
		return ((::System::Boolean(*)(::Class_3_F33F9DC5F4112336*, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::Class_3_808E50509DBAA0C7*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_F431E19239A4CC81_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_3_5012BA55A5968268(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_5012BA55A5968268_OFFSET))(this, a1);
	}

	static ::Class_3_C8D1B831A0F23212* Method_3_73E3A8004F92B3A6()
	{
		return ((::Class_3_C8D1B831A0F23212*(*)())((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_73E3A8004F92B3A6_OFFSET))();
	}

	::System::Void Method_3_68DA1CFFC320EAB9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_68DA1CFFC320EAB9_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_4_OFFSET))(this);
	}

	static ::System::Void Method_3_0A89DF7E2426C648(::MoleMole::Battle::Entity* a1, ::Class_2_44D59DDDD1D4E4A6* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_2_44D59DDDD1D4E4A6*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_0A89DF7E2426C648_OFFSET))(a1, a2);
	}

	::System::Void Method_3_1DC48CE39D546C53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_1DC48CE39D546C53_OFFSET))(this);
	}

	::System::Void Method_3_6535A021EBD37542(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_6535A021EBD37542_OFFSET))(this, a1);
	}

	::System::Void Method_3_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_4307B2A4B4A12C1A_OFFSET))(this);
	}

	static ::System::Void Method_3_17244FE20EF89B04(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_17244FE20EF89B04_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_2E173CEF054660AF(::Class_3_6124F7AF16B30AB1* a1, ::Class_3_808E50509DBAA0C7* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>* a5)
	{
		return ((::System::Boolean(*)(::Class_3_6124F7AF16B30AB1*, ::Class_3_808E50509DBAA0C7*, ::System::Boolean, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_2E173CEF054660AF_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_CA373AA1C7054598_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_5_OFFSET))(this);
	}

	static ::System::Void Method_3_919BC32C7F31A55F(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_919BC32C7F31A55F_OFFSET))(a1);
	}

	::System::Void Method_3_68DA1CFFC320EAB9_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_68DA1CFFC320EAB9_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_BBC2AFCF04301CE6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_BBC2AFCF04301CE6_OFFSET))(this, a1);
	}

	::System::Void Method_3_6535A021EBD37542_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_6535A021EBD37542_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA85150CEE3F23EB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_CA85150CEE3F23EB_OFFSET))(this, a1);
	}

	::System::Void Method_3_130F74EAAC211FE9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_130F74EAAC211FE9_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_A8518C4D4078676C(::Class_3_C8D1B831A0F23212* a1)
	{
		return ((::System::Void(*)(::Class_3_C8D1B831A0F23212*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_A8518C4D4078676C_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598_6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_6_OFFSET))(this);
	}
};
