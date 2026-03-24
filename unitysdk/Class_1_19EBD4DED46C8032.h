#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_313DB38E01B148C7.h"
#include "unitysdk/Struct_2_6B18E018BF210BDA.h"
#include "unitysdk/Struct_2_76CCAEE20B3AE57C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2181504E881DDEE4;
class Class_1_72108342D7142693_Class_2_B57A8ED4EE569CA0;
class Class_1_76DB84416A8BD8BA;
class Class_1_C0C09ABD309C60F2;
class Class_1_D0A2F53B2806C61B;
class Class_3_5D6E6A4B36F53E3B;
class Class_3_9F176DDE219C0679;
class Class_3_A57C497A7F67FFC9;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_19EBD4DED46C8032_METHOD_1_051EDE6F06C98256_OFFSET UNITYSDK_OFFSET(0x6F3C220)
#define CLASS_1_19EBD4DED46C8032_METHOD_1_0CF8E49FB6B8C01F_OFFSET UNITYSDK_OFFSET(0x6F3B8E0)
#define CLASS_1_19EBD4DED46C8032_METHOD_1_0F82619830162414_OFFSET UNITYSDK_OFFSET(0x6F3B050)
#define CLASS_1_19EBD4DED46C8032_METHOD_1_15B9B8E6B36964C3_OFFSET UNITYSDK_OFFSET(0x6F3EA60)
#define CLASS_1_19EBD4DED46C8032_METHOD_1_2F89324C87D8A332_OFFSET UNITYSDK_OFFSET(0x6F3E0E0)
#define CLASS_1_19EBD4DED46C8032_METHOD_1_329A3B18C35ECAC2_OFFSET UNITYSDK_OFFSET(0x8712560)
#define CLASS_1_19EBD4DED46C8032_METHOD_1_472A819FDF2C1D8D_OFFSET UNITYSDK_OFFSET(0x87135A0)
#define CLASS_1_19EBD4DED46C8032_METHOD_1_524D2DABDB8018E8_OFFSET UNITYSDK_OFFSET(0x870E290)
#define CLASS_1_19EBD4DED46C8032_METHOD_1_5808BF7CBD565C41_OFFSET UNITYSDK_OFFSET(0x6F3B1F0)
#define CLASS_1_19EBD4DED46C8032_METHOD_1_626639430879EE60_OFFSET UNITYSDK_OFFSET(0x6F3B1A0)
#define CLASS_1_19EBD4DED46C8032_METHOD_1_652B37C8DFB8993F_OFFSET UNITYSDK_OFFSET(0x8711590)
#define CLASS_1_19EBD4DED46C8032_METHOD_1_7102DE829D59FC44_OFFSET UNITYSDK_OFFSET(0x8712BC0)
#define CLASS_1_19EBD4DED46C8032_METHOD_1_7863965470E53831_OFFSET UNITYSDK_OFFSET(0x6F3EEF0)
#define CLASS_1_19EBD4DED46C8032_METHOD_1_803F9DD50933FAB9_OFFSET UNITYSDK_OFFSET(0x6F3C9D0)
#define CLASS_1_19EBD4DED46C8032_METHOD_1_80F51F657550EBF0_OFFSET UNITYSDK_OFFSET(0x6F3FD80)
#define CLASS_1_19EBD4DED46C8032_METHOD_1_83B3310BEFEEB8D0_OFFSET UNITYSDK_OFFSET(0x6F3ECD0)
#define CLASS_1_19EBD4DED46C8032_METHOD_1_8A4C6820E5F5715F_OFFSET UNITYSDK_OFFSET(0x6F3DB40)
#define CLASS_1_19EBD4DED46C8032_METHOD_1_A598E3A312640CA4_OFFSET UNITYSDK_OFFSET(0x6F3ED90)
#define CLASS_1_19EBD4DED46C8032_METHOD_1_A9E85C4FEF688C89_OFFSET UNITYSDK_OFFSET(0x6F3B910)
#define CLASS_1_19EBD4DED46C8032_METHOD_1_AEBDA7D94AF30181_OFFSET UNITYSDK_OFFSET(0x6F3C5C0)
#define CLASS_1_19EBD4DED46C8032_METHOD_1_B37809BE1066964B_OFFSET UNITYSDK_OFFSET(0x6F3F1C0)
#define CLASS_1_19EBD4DED46C8032_METHOD_1_B6FD934A796F960E_OFFSET UNITYSDK_OFFSET(0x6F3F090)
#define CLASS_1_19EBD4DED46C8032_METHOD_1_B94D1220C76DDEBA_OFFSET UNITYSDK_OFFSET(0x8712D50)
#define CLASS_1_19EBD4DED46C8032_METHOD_1_BFF848BBCFF35D84_OFFSET UNITYSDK_OFFSET(0x6F3DF60)
#define CLASS_1_19EBD4DED46C8032_METHOD_1_CCAAE56E08561869_OFFSET UNITYSDK_OFFSET(0x8712950)
#define CLASS_1_19EBD4DED46C8032_METHOD_1_D51B107AE9B32828_OFFSET UNITYSDK_OFFSET(0x6F3C480)
#define CLASS_1_19EBD4DED46C8032_METHOD_1_E66B12444CB27763_1_OFFSET UNITYSDK_OFFSET(0x6F40170)
#define CLASS_1_19EBD4DED46C8032_METHOD_1_E66B12444CB27763_OFFSET UNITYSDK_OFFSET(0x6F3DAA0)
#define CLASS_1_19EBD4DED46C8032_METHOD_1_F4E3CB1FD2FBF59A_OFFSET UNITYSDK_OFFSET(0x8712FF0)
#define CLASS_1_19EBD4DED46C8032_METHOD_1_F53BAAE38A584428_OFFSET UNITYSDK_OFFSET(0x87119F0)
#define CLASS_1_19EBD4DED46C8032__CCTOR_OFFSET UNITYSDK_OFFSET(0x8711540)

inline static constexpr unsigned int Class_1_19EBD4DED46C8032_TypeDefinitionIndex = 78885;

class Class_1_19EBD4DED46C8032 : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_19EBD4DED46C8032_TypeDefinitionIndex)->GetStaticField(0x2CC90);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_19EBD4DED46C8032_TypeDefinitionIndex)->GetStaticField(0xA0F0);
	}
	// static const ::System::Int32 Field_1_1 = 0x3F6; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_652B37C8DFB8993F(::System::Int32 a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::Class_1_C0C09ABD309C60F2* a5)
	{
		return ((::System::Void(*)(::System::Int32, ::System::String*, ::UnityEngine::Vector3, ::System::Single, ::Class_1_C0C09ABD309C60F2*))((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032_METHOD_1_652B37C8DFB8993F_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_F53BAAE38A584428()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032_METHOD_1_F53BAAE38A584428_OFFSET))();
	}

	static ::System::Void Method_1_329A3B18C35ECAC2(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032_METHOD_1_329A3B18C35ECAC2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CCAAE56E08561869(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032_METHOD_1_CCAAE56E08561869_OFFSET))(a1);
	}

	static ::System::Void Method_1_524D2DABDB8018E8(::System::String* a1, ::System::Int32 a2, ::System::String* a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032_METHOD_1_524D2DABDB8018E8_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::UnityEngine::Vector3 Method_1_7102DE829D59FC44(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032_METHOD_1_7102DE829D59FC44_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_B94D1220C76DDEBA(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032_METHOD_1_B94D1220C76DDEBA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F4E3CB1FD2FBF59A(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032_METHOD_1_F4E3CB1FD2FBF59A_OFFSET))(a1);
	}

	static ::Class_1_2181504E881DDEE4* Method_1_472A819FDF2C1D8D(::System::Int32 a1, ::System::Collections::Generic::List_1<::Class_1_2181504E881DDEE4*>* a2)
	{
		return ((::Class_1_2181504E881DDEE4*(*)(::System::Int32, ::System::Collections::Generic::List_1<::Class_1_2181504E881DDEE4*>*))((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032_METHOD_1_472A819FDF2C1D8D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_0F82619830162414(::System::String* a1, ::UnityEngine::Vector3& a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032_METHOD_1_0F82619830162414_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_626639430879EE60(::System::UInt32& a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::System::UInt32&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032_METHOD_1_626639430879EE60_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5808BF7CBD565C41(::System::Boolean a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::UInt32, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032_METHOD_1_5808BF7CBD565C41_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_A9E85C4FEF688C89(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032_METHOD_1_A9E85C4FEF688C89_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_803F9DD50933FAB9(::Struct_2_6B18E018BF210BDA a1, ::Class_1_72108342D7142693_Class_2_B57A8ED4EE569CA0* a2, ::Class_1_C0C09ABD309C60F2* a3, ::Class_1_76DB84416A8BD8BA* a4)
	{
		return ((::System::Void(*)(::Struct_2_6B18E018BF210BDA, ::Class_1_72108342D7142693_Class_2_B57A8ED4EE569CA0*, ::Class_1_C0C09ABD309C60F2*, ::Class_1_76DB84416A8BD8BA*))((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032_METHOD_1_803F9DD50933FAB9_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_1_E66B12444CB27763(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032_METHOD_1_E66B12444CB27763_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_AEBDA7D94AF30181(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032_METHOD_1_AEBDA7D94AF30181_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_8A4C6820E5F5715F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032_METHOD_1_8A4C6820E5F5715F_OFFSET))();
	}

	static ::System::Boolean Method_1_BFF848BBCFF35D84(::Class_3_9F176DDE219C0679* a1, ::Struct_2_313DB38E01B148C7& a2)
	{
		return ((::System::Boolean(*)(::Class_3_9F176DDE219C0679*, ::Struct_2_313DB38E01B148C7&))((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032_METHOD_1_BFF848BBCFF35D84_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2F89324C87D8A332(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032_METHOD_1_2F89324C87D8A332_OFFSET))(a1);
	}

	static ::Class_1_D0A2F53B2806C61B* Method_1_83B3310BEFEEB8D0(::System::Int32 a1, ::System::String* a2, ::Class_3_A57C497A7F67FFC9* a3)
	{
		return ((::Class_1_D0A2F53B2806C61B*(*)(::System::Int32, ::System::String*, ::Class_3_A57C497A7F67FFC9*))((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032_METHOD_1_83B3310BEFEEB8D0_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::System::Int32>* Method_1_A598E3A312640CA4(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032_METHOD_1_A598E3A312640CA4_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D51B107AE9B32828(::UnityEngine::Vector3& a1, ::System::Single& a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::System::Single&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032_METHOD_1_D51B107AE9B32828_OFFSET))(a1, a2, a3);
	}

	static ::Class_3_9F176DDE219C0679* Method_1_7863965470E53831(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::Class_3_9F176DDE219C0679*(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032_METHOD_1_7863965470E53831_OFFSET))(a1, a2);
	}

	static ::Class_1_D0A2F53B2806C61B* Method_1_B6FD934A796F960E(::System::Int32 a1, ::System::String* a2, ::UnityEngine::Transform* a3, ::System::Boolean a4)
	{
		return ((::Class_1_D0A2F53B2806C61B*(*)(::System::Int32, ::System::String*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032_METHOD_1_B6FD934A796F960E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_15B9B8E6B36964C3(::System::Int32& a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032_METHOD_1_15B9B8E6B36964C3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0CF8E49FB6B8C01F(::Class_3_5D6E6A4B36F53E3B* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::Class_3_5D6E6A4B36F53E3B*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032_METHOD_1_0CF8E49FB6B8C01F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_B37809BE1066964B(::UnityEngine::Vector3 a1, ::MoleMole::Battle::Entity* a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032_METHOD_1_B37809BE1066964B_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_80F51F657550EBF0(::Struct_2_76CCAEE20B3AE57C a1)
	{
		return ((::UnityEngine::Vector3(*)(::Struct_2_76CCAEE20B3AE57C))((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032_METHOD_1_80F51F657550EBF0_OFFSET))(a1);
	}

	static ::System::Void Method_1_051EDE6F06C98256(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032_METHOD_1_051EDE6F06C98256_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_1_E66B12444CB27763_1(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_19EBD4DED46C8032_METHOD_1_E66B12444CB27763_1_OFFSET))(a1);
	}
};
