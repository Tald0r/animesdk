#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/MonoGhostEffect_Struct_2_9167F944B15AEA92.h"
#include "unitysdk/Struct_2_70FF0A172150B476.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_9AE843FF905C0BDB;
class NapGradient;
namespace MoleMole { class MonoGhostEffect; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigGhostMove; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x67BBD30)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_21979913643BB809_OFFSET UNITYSDK_OFFSET(0x67BE0F0)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x67BE010)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0x67BBC80)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_33ACA6CB2ABC73F7_2_OFFSET UNITYSDK_OFFSET(0x67BCDE0)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x67B8620)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_368277E03B6DC819_OFFSET UNITYSDK_OFFSET(0x67B94F0)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0x67BD0C0)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x67BD050)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_4A78800DAA72F0F2_OFFSET UNITYSDK_OFFSET(0x67BD340)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_4FCB296A66368662_OFFSET UNITYSDK_OFFSET(0x67B8250)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x67BCD60)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_7787CB3AD5CF0BB7_OFFSET UNITYSDK_OFFSET(0x67BD900)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_8179571D267C8C9A_OFFSET UNITYSDK_OFFSET(0x67B88E0)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_85F9AAEEA394BE31_1_OFFSET UNITYSDK_OFFSET(0x67BE310)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_85F9AAEEA394BE31_OFFSET UNITYSDK_OFFSET(0x67B8780)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_90EC931103FB6F31_OFFSET UNITYSDK_OFFSET(0x67B85A0)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_94C81405F83348DF_OFFSET UNITYSDK_OFFSET(0x67BBF70)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x67BCF60)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_96BF62E147D3D419_OFFSET UNITYSDK_OFFSET(0x67BC540)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_AE87DEE765CBCDAD_OFFSET UNITYSDK_OFFSET(0x67B8330)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_AEBA7FC38248F3FF_OFFSET UNITYSDK_OFFSET(0x67BA090)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_B00DACF23A35F308_OFFSET UNITYSDK_OFFSET(0x67BCC20)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_B351685B52F64011_OFFSET UNITYSDK_OFFSET(0x67BE1D0)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_B40E266E36AC556E_OFFSET UNITYSDK_OFFSET(0x67BD140)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x67BCBC0)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x67B8720)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_CC1C297516E57E3D_OFFSET UNITYSDK_OFFSET(0x67BA100)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_E2F53F9B9F36FE3D_OFFSET UNITYSDK_OFFSET(0x67BC840)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x67BE290)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80__CTOR_OFFSET UNITYSDK_OFFSET(0x67B7E30)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGhostEffect_Class_1_A70517BD0BB41E80_TypeDefinitionIndex = 54562;

	class MonoGhostEffect_Class_1_A70517BD0BB41E80 : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Material*>* Field_1_7; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* Field_1_8; // 0x18
		::MoleMole::Battle::Entity* Field_1_11; // 0x20
		::UnityEngine::Mesh* Field_1_3; // 0x28
		::UnityEngine::SkinnedMeshRenderer* Field_1_0; // 0x30
		::MoleMole::MonoGhostEffect* Field_1_17; // 0x38
		::UnityEngine::GameObject* Field_1_20; // 0x40
		::Il2CppArray<::System::Collections::Generic::List_1<::MoleMole::MonoGhostEffect_Struct_2_9167F944B15AEA92>*>* Field_1_10; // 0x48
		::MoleMole::Config::ConfigGhostMove* Field_1_21; // 0x50
		::UnityEngine::MeshRenderer* Field_1_1; // 0x58
		::MoleMole::EntityHandle Field_1_12; // 0x60
		::Il2CppArray<::UnityEngine::Material*>* Field_1_9; // 0x70
		::System::Single Field_1_23; // 0x78
		::UnityEngine::Vector3 Field_1_25; // 0x7C
		::Struct_2_70FF0A172150B476 Field_1_13; // 0x88
		::System::Single Field_1_22; // 0x98
		::System::Int32 Field_1_19; // 0x9C
		::UnityEngine::Vector3 Field_1_15; // 0xA0
		::UnityEngine::Vector3 Field_1_24; // 0xAC
		::System::Boolean Field_1_18; // 0xB8
		::System::Boolean Field_1_16; // 0xB9
		::System::Boolean Field_1_4; // 0xBA
		::System::Single Field_1_6; // 0xBC
		::System::Single Field_1_14; // 0xC0
		::System::Single Field_1_5; // 0xC4
		::System::Int32 Field_1_2; // 0xC8

		::System::Void _ctor(::UnityEngine::SkinnedMeshRenderer* a1, ::UnityEngine::MeshRenderer* a2, ::UnityEngine::Mesh* a3, ::System::Single a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::MonoGhostEffect* a6, ::UnityEngine::Material* a7, ::System::Boolean a8, ::System::Int32 a9)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::MeshRenderer*, ::UnityEngine::Mesh*, ::System::Single, ::MoleMole::Battle::Entity*, ::MoleMole::MonoGhostEffect*, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Boolean Method_1_AE87DEE765CBCDAD(::UnityEngine::Vector3& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_AE87DEE765CBCDAD_OFFSET))(this, a1);
		}

		::System::Void Method_1_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_85F9AAEEA394BE31(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_85F9AAEEA394BE31_OFFSET))(this, a1);
		}

		::System::Void Method_1_8179571D267C8C9A(::UnityEngine::SkinnedMeshRenderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_8179571D267C8C9A_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_1_AEBA7FC38248F3FF(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_AEBA7FC38248F3FF_OFFSET))(this, a1);
		}

		::System::Void Method_1_CC1C297516E57E3D(::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::NapGradient*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::NapGradient*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_CC1C297516E57E3D_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_33ACA6CB2ABC73F7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_33ACA6CB2ABC73F7_1_OFFSET))(this);
		}

		::System::Void Method_1_0FD0EC313FAAB75A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_0FD0EC313FAAB75A_OFFSET))(this);
		}

		::System::Void Method_1_94C81405F83348DF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_94C81405F83348DF_OFFSET))(this);
		}

		::System::Void Method_1_96BF62E147D3D419(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_96BF62E147D3D419_OFFSET))(this, a1);
		}

		::System::Void Method_1_E2F53F9B9F36FE3D(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_E2F53F9B9F36FE3D_OFFSET))(this, a1);
		}

		::System::Void Method_1_775B6D644F07B554()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_775B6D644F07B554_OFFSET))(this);
		}

		::System::Void Method_1_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_9681042564541CD6_OFFSET))(this);
		}

		::System::Boolean Method_1_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_391A84BCD9F51317_OFFSET))(this);
		}

		::UnityEngine::Transform* Method_1_90EC931103FB6F31()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_90EC931103FB6F31_OFFSET))(this);
		}

		::UnityEngine::Transform* Method_1_38B862BB2192EC08()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_38B862BB2192EC08_OFFSET))(this);
		}

		::System::Void Method_1_33ACA6CB2ABC73F7_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_33ACA6CB2ABC73F7_2_OFFSET))(this);
		}

		::System::Void Method_1_B40E266E36AC556E(::Class_3_9AE843FF905C0BDB* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_9AE843FF905C0BDB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_B40E266E36AC556E_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_4A78800DAA72F0F2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_4A78800DAA72F0F2_OFFSET))(this, a1);
		}

		::System::Void Method_1_7787CB3AD5CF0BB7(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_7787CB3AD5CF0BB7_OFFSET))(this, a1);
		}

		::System::Void Method_1_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void Method_1_21979913643BB809(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_21979913643BB809_OFFSET))(this, a1);
		}

		::System::Void Method_1_B00DACF23A35F308(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_B00DACF23A35F308_OFFSET))(this, a1, a2);
		}

		::System::String* Method_1_4FCB296A66368662(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_4FCB296A66368662_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_1_B351685B52F64011(::System::UInt32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_B351685B52F64011_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_F4ADC37B63F4E9EF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_F4ADC37B63F4E9EF_OFFSET))(this);
		}

		::System::Void Method_1_85F9AAEEA394BE31_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_85F9AAEEA394BE31_1_OFFSET))(this, a1);
		}

		::System::Void Method_1_368277E03B6DC819(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_A70517BD0BB41E80_METHOD_1_368277E03B6DC819_OFFSET))(this, a1);
		}
	};
}
