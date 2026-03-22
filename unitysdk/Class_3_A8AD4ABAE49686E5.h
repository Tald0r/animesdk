#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/MoleMole/AttackType.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_1B1B79CF034B93D1;
class Class_2_25A326E4E7F9FCFE;
class Class_2_B242825AD4217625;
class Class_2_EFBBB9EB13AB1B92;
class Class_3_750DA0E74FE20AAE;
class Class_3_B19369CC4AB45FA4;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }

#define CLASS_3_A8AD4ABAE49686E5_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x75FC760)
#define CLASS_3_A8AD4ABAE49686E5_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x75FCF20)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_0180E5D4C72D3A1C_OFFSET UNITYSDK_OFFSET(0x7603470)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_01810E1C5985C099_OFFSET UNITYSDK_OFFSET(0x75FE810)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x7603FF0)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_0508563E26675EC4_OFFSET UNITYSDK_OFFSET(0x7600690)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_0539F1DF6B7FACDB_OFFSET UNITYSDK_OFFSET(0x7602590)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_055E3BF644BB741B_OFFSET UNITYSDK_OFFSET(0x75FE9D0)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_08E666F7EFE21B1A_OFFSET UNITYSDK_OFFSET(0x75FF9E0)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_096100102B44C7E3_OFFSET UNITYSDK_OFFSET(0x7602720)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_0A7C48807515A41D_OFFSET UNITYSDK_OFFSET(0x7603220)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_0B3EB362858C4A1C_OFFSET UNITYSDK_OFFSET(0x75FD140)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_0FF755CF0787BB5E_OFFSET UNITYSDK_OFFSET(0x76019A0)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_13B39EC66F69D47F_OFFSET UNITYSDK_OFFSET(0x7600CB0)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_1A6E4B8032170F57_OFFSET UNITYSDK_OFFSET(0x7601E20)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_23CC58B0400757EB_OFFSET UNITYSDK_OFFSET(0x7600FB0)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_2BE98EB9F95F2CDC_OFFSET UNITYSDK_OFFSET(0x7603700)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_2CC9263E08F5BAB5_OFFSET UNITYSDK_OFFSET(0x75FEAC0)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_3162B1CC8A52BF11_OFFSET UNITYSDK_OFFSET(0x7602220)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_37782C0656E99598_OFFSET UNITYSDK_OFFSET(0x75FE680)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_385AA2E42A1A69EE_OFFSET UNITYSDK_OFFSET(0x75FDB10)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_3B522448B1B3BE68_OFFSET UNITYSDK_OFFSET(0x75FD420)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_3FEBC466DBC9364E_OFFSET UNITYSDK_OFFSET(0x75FFB70)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_42134E1E946B521D_OFFSET UNITYSDK_OFFSET(0x7600E20)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_4275E2862F8822FC_OFFSET UNITYSDK_OFFSET(0x75FF6E0)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_582AFEBA95488738_OFFSET UNITYSDK_OFFSET(0x75FDD80)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_5AD3ADCF4BDE212D_OFFSET UNITYSDK_OFFSET(0x75FEFC0)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_65E76176E7965818_OFFSET UNITYSDK_OFFSET(0x7600940)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_66E92F0F1F2E149A_OFFSET UNITYSDK_OFFSET(0x76040B0)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_6C3E18151183E806_OFFSET UNITYSDK_OFFSET(0x75FEA30)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_71CB1911E1482163_OFFSET UNITYSDK_OFFSET(0x7601FE0)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_724D2338ACD3E8A3_OFFSET UNITYSDK_OFFSET(0x76003F0)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_741D56C7B2BBECE2_OFFSET UNITYSDK_OFFSET(0x7601340)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_77F5509F60E9D563_OFFSET UNITYSDK_OFFSET(0x75FF490)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_90A3626BE3C035C8_OFFSET UNITYSDK_OFFSET(0x75FF500)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x7600480)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_A16B1E4DB1A3F093_OFFSET UNITYSDK_OFFSET(0x7601C20)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_A8518C4D4078676C_OFFSET UNITYSDK_OFFSET(0x7604050)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_BA7EC93585A2D84F_OFFSET UNITYSDK_OFFSET(0x7602B60)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x75FF420)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_C5F7038291B9C7AC_OFFSET UNITYSDK_OFFSET(0x75FEE20)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x7602530)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x75FD600)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_D67CEA96F332E96A_OFFSET UNITYSDK_OFFSET(0x76016B0)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_D749205B59441C1E_OFFSET UNITYSDK_OFFSET(0x7600870)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_D7917F24844E103A_OFFSET UNITYSDK_OFFSET(0x75FD660)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_E48D6654AD4E7EC9_OFFSET UNITYSDK_OFFSET(0x7602DB0)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_E580FB8A7DB7EB67_OFFSET UNITYSDK_OFFSET(0x76028D0)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_E5B23F8EF798AAA5_OFFSET UNITYSDK_OFFSET(0x7603760)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_E610E6ED7355DD4E_OFFSET UNITYSDK_OFFSET(0x75FEB90)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_E8F3294104A2A048_OFFSET UNITYSDK_OFFSET(0x7603F80)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_F44843D801E0CB03_OFFSET UNITYSDK_OFFSET(0x7603E70)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_F5B50F2A74C670C4_OFFSET UNITYSDK_OFFSET(0x75FE120)
#define CLASS_3_A8AD4ABAE49686E5_METHOD_3_F5F44F1A22EBC8ED_OFFSET UNITYSDK_OFFSET(0x75FD7B0)
#define CLASS_3_A8AD4ABAE49686E5_UPDATE_OFFSET UNITYSDK_OFFSET(0x75FCBF0)
#define CLASS_3_A8AD4ABAE49686E5__CCTOR_OFFSET UNITYSDK_OFFSET(0x75FD0E0)
#define CLASS_3_A8AD4ABAE49686E5__CTOR_OFFSET UNITYSDK_OFFSET(0x75FD0C0)

inline static constexpr unsigned int Class_3_A8AD4ABAE49686E5_TypeDefinitionIndex = 59281;

class Class_3_A8AD4ABAE49686E5 : public ::Class_2_F33340E023067DAF
{
public:
	static ::System::Single* StaticGet_Field_3_6()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_A8AD4ABAE49686E5_TypeDefinitionIndex)->GetStaticField(0xB690);
	}
	static ::System::Single* StaticGet_Field_3_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_A8AD4ABAE49686E5_TypeDefinitionIndex)->GetStaticField(0xB694);
	}
	static ::System::Single* StaticGet_Field_3_5()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_A8AD4ABAE49686E5_TypeDefinitionIndex)->GetStaticField(0xB698);
	}
	static ::System::Boolean* StaticGet_Field_3_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_A8AD4ABAE49686E5_TypeDefinitionIndex)->GetStaticField(0xB69C);
	}
	static ::System::Boolean* StaticGet_Field_3_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_A8AD4ABAE49686E5_TypeDefinitionIndex)->GetStaticField(0xB69D);
	}
	static ::System::Boolean* StaticGet_Field_3_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_A8AD4ABAE49686E5_TypeDefinitionIndex)->GetStaticField(0xB69E);
	}
	static ::System::Single* StaticGet_Field_3_8()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_A8AD4ABAE49686E5_TypeDefinitionIndex)->GetStaticField(0xB6A0);
	}
	// static const ::System::Int32 Field_3_7 = 0x2; // 0x0
	::Nap::NapECS::EcsFilter* Field_3_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_UPDATE_OFFSET))(this);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_FIXEDUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_0B3EB362858C4A1C(::Class_3_750DA0E74FE20AAE* a1)
	{
		return ((::System::Void(*)(::Class_3_750DA0E74FE20AAE*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_0B3EB362858C4A1C_OFFSET))(a1);
	}

	static ::System::Int32 Method_3_3B522448B1B3BE68(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Int32(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_3B522448B1B3BE68_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_D7917F24844E103A(::Class_3_750DA0E74FE20AAE* a1)
	{
		return ((::System::Void(*)(::Class_3_750DA0E74FE20AAE*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_D7917F24844E103A_OFFSET))(a1);
	}

	static ::System::Void Method_3_F5F44F1A22EBC8ED(::MoleMole::EntityHandle a1, ::System::Boolean a2, ::System::Action_2<::System::UInt32, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Boolean, ::System::Action_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_F5F44F1A22EBC8ED_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_582AFEBA95488738(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_582AFEBA95488738_OFFSET))(a1);
	}

	static ::System::Void Method_3_01810E1C5985C099(::Class_2_1B1B79CF034B93D1* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_1B1B79CF034B93D1*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_01810E1C5985C099_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_055E3BF644BB741B(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_055E3BF644BB741B_OFFSET))(a1);
	}

	static ::System::Single Method_3_6C3E18151183E806()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_6C3E18151183E806_OFFSET))();
	}

	static ::System::String* Method_3_2CC9263E08F5BAB5(::System::Int32 a1, ::System::Boolean& a2)
	{
		return ((::System::String*(*)(::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_2CC9263E08F5BAB5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_E610E6ED7355DD4E(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_E610E6ED7355DD4E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C5F7038291B9C7AC(::Class_2_B242825AD4217625* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_B242825AD4217625*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_C5F7038291B9C7AC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5AD3ADCF4BDE212D(::Class_3_750DA0E74FE20AAE* a1, ::Class_3_B19369CC4AB45FA4* a2)
	{
		return ((::System::Void(*)(::Class_3_750DA0E74FE20AAE*, ::Class_3_B19369CC4AB45FA4*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_5AD3ADCF4BDE212D_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_77F5509F60E9D563(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_77F5509F60E9D563_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_90A3626BE3C035C8(::MoleMole::Battle::Entity* a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_90A3626BE3C035C8_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_385AA2E42A1A69EE(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_385AA2E42A1A69EE_OFFSET))(a1);
	}

	static ::System::Void Method_3_3FEBC466DBC9364E(::Class_3_750DA0E74FE20AAE* a1)
	{
		return ((::System::Void(*)(::Class_3_750DA0E74FE20AAE*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_3FEBC466DBC9364E_OFFSET))(a1);
	}

	static ::System::Void Method_3_97D83E4CB3B11935()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_97D83E4CB3B11935_OFFSET))();
	}

	static ::System::Void Method_3_0508563E26675EC4(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_0508563E26675EC4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_65E76176E7965818(::Class_3_750DA0E74FE20AAE* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_750DA0E74FE20AAE*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_65E76176E7965818_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F5B50F2A74C670C4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_F5B50F2A74C670C4_OFFSET))(a1);
	}

	static ::System::Void Method_3_23CC58B0400757EB(::MoleMole::EntityHandle a1, ::System::Action_2<::MoleMole::EntityHandle, ::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Action_2<::MoleMole::EntityHandle, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_23CC58B0400757EB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_741D56C7B2BBECE2(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_741D56C7B2BBECE2_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_D67CEA96F332E96A(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_D67CEA96F332E96A_OFFSET))(this, a1);
	}

	::System::Void Method_3_A16B1E4DB1A3F093(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_A16B1E4DB1A3F093_OFFSET))(this, a1);
	}

	static ::MoleMole::AttackType Method_3_42134E1E946B521D(::System::String* a1, ::MoleMole::AttackType a2)
	{
		return ((::MoleMole::AttackType(*)(::System::String*, ::MoleMole::AttackType))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_42134E1E946B521D_OFFSET))(a1, a2);
	}

	::System::Void Method_3_1A6E4B8032170F57(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_1A6E4B8032170F57_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_08E666F7EFE21B1A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_08E666F7EFE21B1A_OFFSET))(a1);
	}

	::System::Void Method_3_71CB1911E1482163(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_71CB1911E1482163_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Void Method_3_13B39EC66F69D47F(::Class_3_750DA0E74FE20AAE* a1)
	{
		return ((::System::Void(*)(::Class_3_750DA0E74FE20AAE*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_13B39EC66F69D47F_OFFSET))(a1);
	}

	static ::System::Void Method_3_0539F1DF6B7FACDB(::Class_2_25A326E4E7F9FCFE* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_25A326E4E7F9FCFE*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_0539F1DF6B7FACDB_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_096100102B44C7E3(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_096100102B44C7E3_OFFSET))(this, a1);
	}

	::System::Void Method_3_E580FB8A7DB7EB67(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_E580FB8A7DB7EB67_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_4275E2862F8822FC(::Class_3_750DA0E74FE20AAE* a1)
	{
		return ((::System::Void(*)(::Class_3_750DA0E74FE20AAE*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_4275E2862F8822FC_OFFSET))(a1);
	}

	static ::System::Void Method_3_724D2338ACD3E8A3(::Class_3_750DA0E74FE20AAE* a1)
	{
		return ((::System::Void(*)(::Class_3_750DA0E74FE20AAE*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_724D2338ACD3E8A3_OFFSET))(a1);
	}

	static ::System::Void Method_3_E48D6654AD4E7EC9(::MoleMole::EntityHandle a1, ::System::String* a2, ::System::Action_2<::System::UInt32, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::String*, ::System::Action_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_E48D6654AD4E7EC9_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_D749205B59441C1E(::Class_2_EFBBB9EB13AB1B92* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_EFBBB9EB13AB1B92*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_D749205B59441C1E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_0A7C48807515A41D(::MoleMole::EntityHandle a1, ::System::Action_2<::System::UInt32, ::System::Boolean>* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle, ::System::Action_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_0A7C48807515A41D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0180E5D4C72D3A1C(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_0180E5D4C72D3A1C_OFFSET))(a1, a2);
	}

	::System::Void Method_3_3162B1CC8A52BF11(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_3162B1CC8A52BF11_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_2BE98EB9F95F2CDC(::UnityEngine::Component* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_2BE98EB9F95F2CDC_OFFSET))(a1);
	}

	static ::System::Void Method_3_E5B23F8EF798AAA5(::MoleMole::EntityHandle a1, ::System::Int32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_E5B23F8EF798AAA5_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_F44843D801E0CB03(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_F44843D801E0CB03_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E8F3294104A2A048(::Class_3_750DA0E74FE20AAE* a1, ::System::Boolean a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Class_3_750DA0E74FE20AAE*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_E8F3294104A2A048_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_0FF755CF0787BB5E(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_0FF755CF0787BB5E_OFFSET))(this, a1);
	}

	::System::Void Method_3_BA7EC93585A2D84F(::System::Boolean a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_BA7EC93585A2D84F_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	static ::System::Void Method_3_A8518C4D4078676C(::Class_3_750DA0E74FE20AAE* a1)
	{
		return ((::System::Void(*)(::Class_3_750DA0E74FE20AAE*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_A8518C4D4078676C_OFFSET))(a1);
	}

	static ::System::Void Method_3_37782C0656E99598(::MoleMole::EntityHandle a1, ::System::Boolean a2, ::System::Action_2<::System::UInt32, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Boolean, ::System::Action_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_37782C0656E99598_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::AttackType Method_3_66E92F0F1F2E149A(::Class_3_750DA0E74FE20AAE* a1, ::Class_3_B19369CC4AB45FA4* a2, ::System::Boolean a3)
	{
		return ((::MoleMole::AttackType(*)(::Class_3_750DA0E74FE20AAE*, ::Class_3_B19369CC4AB45FA4*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_METHOD_3_66E92F0F1F2E149A_OFFSET))(a1, a2, a3);
	}
};
