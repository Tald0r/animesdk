#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_916778923E38503B;
class Class_1_B7E341C5F1A6F199;
class Class_3_9AE843FF905C0BDB;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define CLASS_3_2712D76941E4508C_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x87FC650)
#define CLASS_3_2712D76941E4508C_METHOD_3_034CFFF3CDD52811_OFFSET UNITYSDK_OFFSET(0x87FF190)
#define CLASS_3_2712D76941E4508C_METHOD_3_05252F136A7884FE_OFFSET UNITYSDK_OFFSET(0x87FF3F0)
#define CLASS_3_2712D76941E4508C_METHOD_3_0AFA3E9A60C07383_OFFSET UNITYSDK_OFFSET(0x8800DF0)
#define CLASS_3_2712D76941E4508C_METHOD_3_134A95DAF15CFB39_OFFSET UNITYSDK_OFFSET(0x8801D60)
#define CLASS_3_2712D76941E4508C_METHOD_3_1AD59A4D6FE8A8C3_OFFSET UNITYSDK_OFFSET(0x8802340)
#define CLASS_3_2712D76941E4508C_METHOD_3_20FD8965F00EA2BF_OFFSET UNITYSDK_OFFSET(0x8800450)
#define CLASS_3_2712D76941E4508C_METHOD_3_227FBE6E9AFC6072_OFFSET UNITYSDK_OFFSET(0x87FD3F0)
#define CLASS_3_2712D76941E4508C_METHOD_3_2D4940A8864E6610_OFFSET UNITYSDK_OFFSET(0x87FD1C0)
#define CLASS_3_2712D76941E4508C_METHOD_3_2E11BD26B565F70D_OFFSET UNITYSDK_OFFSET(0x8801230)
#define CLASS_3_2712D76941E4508C_METHOD_3_304A7B3593080D5E_OFFSET UNITYSDK_OFFSET(0x8801860)
#define CLASS_3_2712D76941E4508C_METHOD_3_4691854E32F3C2F6_OFFSET UNITYSDK_OFFSET(0x87FFC30)
#define CLASS_3_2712D76941E4508C_METHOD_3_54A73EE71975CF96_OFFSET UNITYSDK_OFFSET(0x87FDEC0)
#define CLASS_3_2712D76941E4508C_METHOD_3_5CBC2890DD8B8FE1_OFFSET UNITYSDK_OFFSET(0x87FCDC0)
#define CLASS_3_2712D76941E4508C_METHOD_3_5E4534F85F5E24C1_OFFSET UNITYSDK_OFFSET(0x87FCF90)
#define CLASS_3_2712D76941E4508C_METHOD_3_5FD05C759CA362C1_OFFSET UNITYSDK_OFFSET(0x88009F0)
#define CLASS_3_2712D76941E4508C_METHOD_3_638975D2D5AA621B_OFFSET UNITYSDK_OFFSET(0x87FEC80)
#define CLASS_3_2712D76941E4508C_METHOD_3_64E54667189E0E82_1_OFFSET UNITYSDK_OFFSET(0x87FEFD0)
#define CLASS_3_2712D76941E4508C_METHOD_3_64E54667189E0E82_OFFSET UNITYSDK_OFFSET(0x87FE8C0)
#define CLASS_3_2712D76941E4508C_METHOD_3_6A42D69EC06778FC_OFFSET UNITYSDK_OFFSET(0x8800250)
#define CLASS_3_2712D76941E4508C_METHOD_3_91D97064765DCBF1_OFFSET UNITYSDK_OFFSET(0x8800D20)
#define CLASS_3_2712D76941E4508C_METHOD_3_9926F4F0DBA561C8_OFFSET UNITYSDK_OFFSET(0x87FEA90)
#define CLASS_3_2712D76941E4508C_METHOD_3_B519A46C44F8653F_OFFSET UNITYSDK_OFFSET(0x8801590)
#define CLASS_3_2712D76941E4508C_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x87FE780)
#define CLASS_3_2712D76941E4508C_METHOD_3_BD71CCF95E66CB30_OFFSET UNITYSDK_OFFSET(0x87FDA90)
#define CLASS_3_2712D76941E4508C_METHOD_3_BE77BDBA11F12421_OFFSET UNITYSDK_OFFSET(0x87FFB00)
#define CLASS_3_2712D76941E4508C_METHOD_3_C6C42404123B8DE9_OFFSET UNITYSDK_OFFSET(0x8801CE0)
#define CLASS_3_2712D76941E4508C_METHOD_3_C84733537CE8A51E_OFFSET UNITYSDK_OFFSET(0x87FD6E0)
#define CLASS_3_2712D76941E4508C_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x87FCD60)
#define CLASS_3_2712D76941E4508C_METHOD_3_E9F85D670420BBAB_OFFSET UNITYSDK_OFFSET(0x8802250)
#define CLASS_3_2712D76941E4508C_METHOD_3_EB8BD7BE57734D47_OFFSET UNITYSDK_OFFSET(0x87FFD60)
#define CLASS_3_2712D76941E4508C_METHOD_3_EE3A4115437F2968_OFFSET UNITYSDK_OFFSET(0x87FE7F0)
#define CLASS_3_2712D76941E4508C_METHOD_3_F390BC167F6CE613_OFFSET UNITYSDK_OFFSET(0x88005B0)
#define CLASS_3_2712D76941E4508C_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x87FCB10)
#define CLASS_3_2712D76941E4508C__CCTOR_OFFSET UNITYSDK_OFFSET(0x87FCCB0)
#define CLASS_3_2712D76941E4508C__CTOR_OFFSET UNITYSDK_OFFSET(0x87FCC90)

inline static constexpr unsigned int Class_3_2712D76941E4508C_TypeDefinitionIndex = 64470;

class Class_3_2712D76941E4508C : public ::Class_2_F33340E023067DAF
{
public:
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Field_3_2()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2712D76941E4508C_TypeDefinitionIndex)->GetStaticField(0x3E3E0);
	}
	static ::System::String** StaticGet_Field_3_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2712D76941E4508C_TypeDefinitionIndex)->GetStaticField(0x3E3E8);
	}
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void PostLateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_POSTLATEUPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Single Method_3_5CBC2890DD8B8FE1(::UnityEngine::Vector3 a1, ::Class_3_F35B080B137ECC46* a2, ::Class_3_9AE843FF905C0BDB* a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::Class_3_F35B080B137ECC46*, ::Class_3_9AE843FF905C0BDB*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_5CBC2890DD8B8FE1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_5E4534F85F5E24C1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_5E4534F85F5E24C1_OFFSET))(a1);
	}

	static ::System::Void Method_3_227FBE6E9AFC6072(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_227FBE6E9AFC6072_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_BD71CCF95E66CB30(::Class_3_9AE843FF905C0BDB* a1, ::System::Single a2, ::System::Action* a3, ::System::String* a4, ::System::UInt32 a5)
	{
		return ((::System::Boolean(*)(::Class_3_9AE843FF905C0BDB*, ::System::Single, ::System::Action*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_BD71CCF95E66CB30_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_EE3A4115437F2968(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_EE3A4115437F2968_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_64E54667189E0E82(::Class_3_9AE843FF905C0BDB* a1)
	{
		return ((::System::Boolean(*)(::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_64E54667189E0E82_OFFSET))(a1);
	}

	static ::System::Void Method_3_9926F4F0DBA561C8(::System::Single a1, ::Class_3_F35B080B137ECC46* a2, ::Class_3_9AE843FF905C0BDB* a3)
	{
		return ((::System::Void(*)(::System::Single, ::Class_3_F35B080B137ECC46*, ::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_9926F4F0DBA561C8_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_C84733537CE8A51E(::Class_3_9AE843FF905C0BDB* a1)
	{
		return ((::System::Boolean(*)(::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_C84733537CE8A51E_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_2D4940A8864E6610(::System::Single a1, ::Class_3_F35B080B137ECC46* a2, ::Class_3_9AE843FF905C0BDB* a3)
	{
		return ((::System::Boolean(*)(::System::Single, ::Class_3_F35B080B137ECC46*, ::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_2D4940A8864E6610_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_638975D2D5AA621B(::UnityEngine::Material* a1, ::MoleMole::Battle::Entity* a2, ::Class_3_9AE843FF905C0BDB* a3)
	{
		return ((::System::Void(*)(::UnityEngine::Material*, ::MoleMole::Battle::Entity*, ::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_638975D2D5AA621B_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_64E54667189E0E82_1(::Class_3_9AE843FF905C0BDB* a1)
	{
		return ((::System::Boolean(*)(::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_64E54667189E0E82_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_034CFFF3CDD52811(::UnityEngine::Material* a1, ::MoleMole::Battle::Entity* a2, ::Class_3_9AE843FF905C0BDB* a3, ::System::Int32& a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Material*, ::MoleMole::Battle::Entity*, ::Class_3_9AE843FF905C0BDB*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_034CFFF3CDD52811_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_05252F136A7884FE(::Class_3_9AE843FF905C0BDB* a1)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_05252F136A7884FE_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_54A73EE71975CF96(::System::Single a1, ::Class_3_F35B080B137ECC46* a2, ::Class_3_9AE843FF905C0BDB* a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Boolean(*)(::System::Single, ::Class_3_F35B080B137ECC46*, ::Class_3_9AE843FF905C0BDB*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_54A73EE71975CF96_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_916778923E38503B* Method_3_20FD8965F00EA2BF(::Class_3_9AE843FF905C0BDB* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::System::UInt32>* a4, ::System::Action* a5, ::System::UInt32 a6)
	{
		return ((::Class_1_916778923E38503B*(*)(::Class_3_9AE843FF905C0BDB*, ::System::String*, ::System::String*, ::System::Action_1<::System::UInt32>*, ::System::Action*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_20FD8965F00EA2BF_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_3_F390BC167F6CE613(::Class_3_9AE843FF905C0BDB* a1, ::System::Single a2, ::System::Action* a3, ::System::String* a4, ::System::String* a5, ::System::UInt32 a6)
	{
		return ((::System::Boolean(*)(::Class_3_9AE843FF905C0BDB*, ::System::Single, ::System::Action*, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_F390BC167F6CE613_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_5FD05C759CA362C1(::Class_3_9AE843FF905C0BDB* a1)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_5FD05C759CA362C1_OFFSET))(a1);
	}

	static ::System::Void Method_3_91D97064765DCBF1(::Class_3_9AE843FF905C0BDB* a1)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_91D97064765DCBF1_OFFSET))(a1);
	}

	static ::Class_1_916778923E38503B* Method_3_BE77BDBA11F12421(::Class_3_9AE843FF905C0BDB* a1, ::System::String* a2, ::System::String* a3, ::System::UInt32 a4)
	{
		return ((::Class_1_916778923E38503B*(*)(::Class_3_9AE843FF905C0BDB*, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_BE77BDBA11F12421_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_6A42D69EC06778FC(::Class_3_9AE843FF905C0BDB* a1)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_6A42D69EC06778FC_OFFSET))(a1);
	}

	static ::System::Void Method_3_0AFA3E9A60C07383(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_0AFA3E9A60C07383_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_EB8BD7BE57734D47(::Class_3_F35B080B137ECC46* a1, ::Class_3_9AE843FF905C0BDB* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::Class_3_F35B080B137ECC46*, ::Class_3_9AE843FF905C0BDB*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_EB8BD7BE57734D47_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_B519A46C44F8653F(::Class_3_9AE843FF905C0BDB* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_B519A46C44F8653F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4691854E32F3C2F6(::Class_3_9AE843FF905C0BDB* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_4691854E32F3C2F6_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_304A7B3593080D5E(::Class_3_9AE843FF905C0BDB* a1, ::System::Boolean a2, ::System::String* a3, ::UnityEngine::Vector2 a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::System::Boolean, ::System::String*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_304A7B3593080D5E_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::String* Method_3_C6C42404123B8DE9(::Class_3_9AE843FF905C0BDB* a1)
	{
		return ((::System::String*(*)(::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_C6C42404123B8DE9_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_134A95DAF15CFB39(::Class_3_9AE843FF905C0BDB* a1, ::System::Single a2, ::System::Action_1<::System::UInt32>* a3, ::System::String* a4, ::System::UInt32 a5)
	{
		return ((::System::Boolean(*)(::Class_3_9AE843FF905C0BDB*, ::System::Single, ::System::Action_1<::System::UInt32>*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_134A95DAF15CFB39_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_E9F85D670420BBAB(::Class_3_9AE843FF905C0BDB* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_E9F85D670420BBAB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1AD59A4D6FE8A8C3(::Class_3_9AE843FF905C0BDB* a1)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_1AD59A4D6FE8A8C3_OFFSET))(a1);
	}

	static ::System::Void Method_3_2E11BD26B565F70D(::Class_3_9AE843FF905C0BDB* a1)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_2E11BD26B565F70D_OFFSET))(a1);
	}
};
