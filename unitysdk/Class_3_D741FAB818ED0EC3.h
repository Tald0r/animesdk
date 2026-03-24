#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/Enum_3_C460945F1F3C12F5.h"
#include "unitysdk/Struct_2_7AEA12404CD1ADA2.h"

class Class_1_17084610E266B2F1;
class Class_1_88E4CECE0D39F697;
class Class_1_D366ED82D8A1F916;
class Class_1_E25AA19765F0B270;
class Class_1_F61BB49F70F7407A;
class Class_1_F94500673BE00878;
class Class_2_52E46C711C8C873D;
class Class_2_BA2B2B0A0E98E063;
class Class_2_C162E620AE258C19;
class Class_3_46E613428B30FCCD;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D741FAB818ED0EC3_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x98CDE00)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_01FBB2EDE30F5868_OFFSET UNITYSDK_OFFSET(0x98D1940)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_097011A8281486E9_OFFSET UNITYSDK_OFFSET(0x98D1B50)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_18EBD506031A4BFC_OFFSET UNITYSDK_OFFSET(0x98CF4C0)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_19BCB8F9ECACE29E_OFFSET UNITYSDK_OFFSET(0x98CE9B0)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_2CCA885A56D1610F_OFFSET UNITYSDK_OFFSET(0x98D12A0)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_2EDCFE768244BB69_OFFSET UNITYSDK_OFFSET(0x98CFA80)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_3558E4C27DDDCDDB_OFFSET UNITYSDK_OFFSET(0x98CFFA0)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_39C3C8989229221B_OFFSET UNITYSDK_OFFSET(0x98CF9B0)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_3C793DB8E982F1E1_OFFSET UNITYSDK_OFFSET(0x98CF770)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_437104B6108A6647_OFFSET UNITYSDK_OFFSET(0x98CEBE0)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_50E364B6D3F17C78_OFFSET UNITYSDK_OFFSET(0x98D1560)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_5416E03ECBCA6EFA_OFFSET UNITYSDK_OFFSET(0x98D10B0)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_5C68F1398A4A25A3_OFFSET UNITYSDK_OFFSET(0x98CF320)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x98CF450)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_82F68C34ED2DEDB4_OFFSET UNITYSDK_OFFSET(0x98D0C60)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_8B8773820C506C86_OFFSET UNITYSDK_OFFSET(0x98D1490)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_8BC85DADEC2C3862_OFFSET UNITYSDK_OFFSET(0x98CE330)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_8F62BDF7BE010079_OFFSET UNITYSDK_OFFSET(0x98D1160)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_997A5B543B59E1D0_OFFSET UNITYSDK_OFFSET(0x98CEB20)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_9E7F1A4AAB0B506A_OFFSET UNITYSDK_OFFSET(0x98CF130)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_A11144519902A27F_1_OFFSET UNITYSDK_OFFSET(0x98D0490)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_A11144519902A27F_OFFSET UNITYSDK_OFFSET(0x98CF2B0)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_A3C5205BE9896C06_OFFSET UNITYSDK_OFFSET(0x98CF7F0)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_A52A04403DC7D65A_OFFSET UNITYSDK_OFFSET(0x98CEF40)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_A8518C4D4078676C_OFFSET UNITYSDK_OFFSET(0x98D0430)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_AB26FB330C9D1F56_OFFSET UNITYSDK_OFFSET(0x98CF5E0)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_ABE028A4CD8823F1_OFFSET UNITYSDK_OFFSET(0x98D0840)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x98CE1D0)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x98D14F0)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_BFBBE8A6FE167A6A_OFFSET UNITYSDK_OFFSET(0x98CFF00)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x98D1050)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x98D1240)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x98D0500)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_D4499A0147676A9C_OFFSET UNITYSDK_OFFSET(0x98D0E50)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_E167CC791D3371F7_OFFSET UNITYSDK_OFFSET(0x98CEDD0)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_E580FB8A7DB7EB67_OFFSET UNITYSDK_OFFSET(0x98D0560)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_ED28413061815D20_OFFSET UNITYSDK_OFFSET(0x98D0150)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_EE7A41C190351096_OFFSET UNITYSDK_OFFSET(0x98D0760)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_F4BE935479597FC3_OFFSET UNITYSDK_OFFSET(0x98D0A10)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_FFED7C3041A4AB5E_1_OFFSET UNITYSDK_OFFSET(0x98D1AA0)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_FFED7C3041A4AB5E_OFFSET UNITYSDK_OFFSET(0x98CF080)
#define CLASS_3_D741FAB818ED0EC3_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x98CDDA0)
#define CLASS_3_D741FAB818ED0EC3_START_OFFSET UNITYSDK_OFFSET(0x98CDC20)
#define CLASS_3_D741FAB818ED0EC3_UPDATE_OFFSET UNITYSDK_OFFSET(0x98CE610)
#define CLASS_3_D741FAB818ED0EC3__CCTOR_OFFSET UNITYSDK_OFFSET(0x98CE910)
#define CLASS_3_D741FAB818ED0EC3__CTOR_OFFSET UNITYSDK_OFFSET(0x98CE840)

inline static constexpr unsigned int Class_3_D741FAB818ED0EC3_TypeDefinitionIndex = 72909;

class Class_3_D741FAB818ED0EC3 : public ::Class_2_F33340E023067DAF
{
public:
	static ::System::Collections::Generic::List_1<::Class_2_C162E620AE258C19*>** StaticGet_Field_3_5()
	{
		return (::System::Collections::Generic::List_1<::Class_2_C162E620AE258C19*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D741FAB818ED0EC3_TypeDefinitionIndex)->GetStaticField(0x3E0F0);
	}
	static ::Nap::NapECS::EcsFilter** StaticGet_Field_3_2()
	{
		return (::Nap::NapECS::EcsFilter**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D741FAB818ED0EC3_TypeDefinitionIndex)->GetStaticField(0x3E0F8);
	}
	static ::Class_1_F94500673BE00878** StaticGet_Field_3_6()
	{
		return (::Class_1_F94500673BE00878**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D741FAB818ED0EC3_TypeDefinitionIndex)->GetStaticField(0x3E100);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_BA2B2B0A0E98E063*>** StaticGet_Field_3_4()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_BA2B2B0A0E98E063*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D741FAB818ED0EC3_TypeDefinitionIndex)->GetStaticField(0x3E108);
	}
	static ::System::Int32* StaticGet_Field_3_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_D741FAB818ED0EC3_TypeDefinitionIndex)->GetStaticField(0xF1D0);
	}
	static ::System::Boolean* StaticGet_Field_3_12()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_D741FAB818ED0EC3_TypeDefinitionIndex)->GetStaticField(0xF1D4);
	}
	// static const ::System::Int32 Field_3_0 = 0x7FFFFFFF; // 0x0
	// static const ::System::Int32 Field_3_8 = 0x80000000; // 0x0
	// static const ::System::String* Field_3_9; // 0x0
	// static const ::System::String* Field_3_10; // 0x0
	// static const ::System::String* Field_3_11; // 0x0
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x20
	::System::Collections::Generic::List_1<::Class_1_17084610E266B2F1*>* Field_3_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3__CCTOR_OFFSET))();
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_ONDESTROY_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_19BCB8F9ECACE29E(::MoleMole::Battle::Entity* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_19BCB8F9ECACE29E_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_3_997A5B543B59E1D0(::Class_3_46E613428B30FCCD* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::Class_3_46E613428B30FCCD*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_997A5B543B59E1D0_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_437104B6108A6647(::Class_1_17084610E266B2F1* a1)
	{
		return ((::System::Boolean(*)(::Class_1_17084610E266B2F1*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_437104B6108A6647_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_E167CC791D3371F7(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_E167CC791D3371F7_OFFSET))(a1);
	}

	static ::System::Void Method_3_A52A04403DC7D65A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_A52A04403DC7D65A_OFFSET))(a1);
	}

	static ::System::Void Method_3_FFED7C3041A4AB5E(::Class_2_C162E620AE258C19* a1)
	{
		return ((::System::Void(*)(::Class_2_C162E620AE258C19*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_FFED7C3041A4AB5E_OFFSET))(a1);
	}

	static ::System::Void Method_3_9E7F1A4AAB0B506A(::MoleMole::Battle::Entity* a1, ::Class_1_88E4CECE0D39F697* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_1_88E4CECE0D39F697*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_9E7F1A4AAB0B506A_OFFSET))(a1, a2);
	}

	::System::Void Method_3_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_3_A11144519902A27F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_A11144519902A27F_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_8BC85DADEC2C3862()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_8BC85DADEC2C3862_OFFSET))();
	}

	static ::System::Void Method_3_5C68F1398A4A25A3(::System::Int32 a1, ::Class_2_BA2B2B0A0E98E063* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::Class_2_BA2B2B0A0E98E063*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_5C68F1398A4A25A3_OFFSET))(a1, a2);
	}

	::System::Void Method_3_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	static ::Struct_2_7AEA12404CD1ADA2 Method_3_18EBD506031A4BFC(::Struct_2_7AEA12404CD1ADA2 a1)
	{
		return ((::Struct_2_7AEA12404CD1ADA2(*)(::Struct_2_7AEA12404CD1ADA2))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_18EBD506031A4BFC_OFFSET))(a1);
	}

	static ::Class_2_C162E620AE258C19* Method_3_AB26FB330C9D1F56()
	{
		return ((::Class_2_C162E620AE258C19*(*)())((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_AB26FB330C9D1F56_OFFSET))();
	}

	static ::System::Void Method_3_3C793DB8E982F1E1(::Class_2_C162E620AE258C19* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_2_C162E620AE258C19*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_3C793DB8E982F1E1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A3C5205BE9896C06(::MoleMole::Battle::Entity* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_A3C5205BE9896C06_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_39C3C8989229221B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_39C3C8989229221B_OFFSET))(a1);
	}

	static ::Class_1_17084610E266B2F1* Method_3_2EDCFE768244BB69(::Class_3_46E613428B30FCCD* a1, ::System::Int32 a2, ::Nap::NapECS::EcsEntity* a3, ::System::Int32 a4)
	{
		return ((::Class_1_17084610E266B2F1*(*)(::Class_3_46E613428B30FCCD*, ::System::Int32, ::Nap::NapECS::EcsEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_2EDCFE768244BB69_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_3558E4C27DDDCDDB(::Class_3_46E613428B30FCCD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_46E613428B30FCCD*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_3558E4C27DDDCDDB_OFFSET))(this, a1);
	}

	::System::Void Method_3_A11144519902A27F_1(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_A11144519902A27F_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_E580FB8A7DB7EB67(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_E580FB8A7DB7EB67_OFFSET))(a1);
	}

	static ::System::String* Method_3_EE7A41C190351096(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_EE7A41C190351096_OFFSET))(a1);
	}

	static ::System::Void Method_3_ABE028A4CD8823F1(::Class_2_C162E620AE258C19* a1)
	{
		return ((::System::Void(*)(::Class_2_C162E620AE258C19*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_ABE028A4CD8823F1_OFFSET))(a1);
	}

	static ::System::Void Method_3_F4BE935479597FC3(::Class_3_46E613428B30FCCD* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_46E613428B30FCCD*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_F4BE935479597FC3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_D4499A0147676A9C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_D4499A0147676A9C_OFFSET))();
	}

	static ::System::Int32 Method_3_BFBBE8A6FE167A6A()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_BFBBE8A6FE167A6A_OFFSET))();
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Boolean Method_3_5416E03ECBCA6EFA(::Class_3_46E613428B30FCCD* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::Class_3_46E613428B30FCCD*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_5416E03ECBCA6EFA_OFFSET))(a1, a2);
	}

	::System::Void Method_3_ED28413061815D20(::Class_3_46E613428B30FCCD* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_46E613428B30FCCD*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_ED28413061815D20_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	static ::System::Void Method_3_A8518C4D4078676C(::Class_3_46E613428B30FCCD* a1)
	{
		return ((::System::Void(*)(::Class_3_46E613428B30FCCD*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_A8518C4D4078676C_OFFSET))(a1);
	}

	static ::System::Void Method_3_2CCA885A56D1610F(::MoleMole::Battle::Entity* a1, ::Class_1_88E4CECE0D39F697* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_1_88E4CECE0D39F697*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_2CCA885A56D1610F_OFFSET))(a1, a2);
	}

	static ::Nap::NapECS::EcsFilter* Method_3_8B8773820C506C86()
	{
		return ((::Nap::NapECS::EcsFilter*(*)())((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_8B8773820C506C86_OFFSET))();
	}

	static ::System::Boolean Method_3_82F68C34ED2DEDB4(::Class_3_46E613428B30FCCD* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::Class_3_46E613428B30FCCD*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_82F68C34ED2DEDB4_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::Class_1_88E4CECE0D39F697* Method_3_50E364B6D3F17C78(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::Class_1_F61BB49F70F7407A* a3, ::Enum_3_C460945F1F3C12F5 a4, ::System::Single a5, ::System::String* a6)
	{
		return ((::Class_1_88E4CECE0D39F697*(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_F61BB49F70F7407A*, ::Enum_3_C460945F1F3C12F5, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_50E364B6D3F17C78_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_8F62BDF7BE010079(::Class_3_46E613428B30FCCD* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_3_46E613428B30FCCD*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_8F62BDF7BE010079_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_01FBB2EDE30F5868(::System::Int32 a1, ::Class_2_BA2B2B0A0E98E063*& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::Class_2_BA2B2B0A0E98E063*&))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_01FBB2EDE30F5868_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FFED7C3041A4AB5E_1(::Class_2_C162E620AE258C19* a1)
	{
		return ((::System::Void(*)(::Class_2_C162E620AE258C19*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_FFED7C3041A4AB5E_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_097011A8281486E9(::Class_2_C162E620AE258C19* a1, ::Class_1_D366ED82D8A1F916* a2, ::Class_1_E25AA19765F0B270* a3, ::System::Action_1<::Class_2_BA2B2B0A0E98E063*>* a4, ::System::Action_1<::Class_2_BA2B2B0A0E98E063*>* a5, ::System::Action_1<::Class_2_BA2B2B0A0E98E063*>* a6, ::System::Action_1<::Class_2_BA2B2B0A0E98E063*>* a7, ::System::Func_2<::Class_2_BA2B2B0A0E98E063*, ::Class_2_BA2B2B0A0E98E063*>* a8, ::System::Func_3<::Class_1_D366ED82D8A1F916*, ::System::Collections::Generic::List_1<::Class_2_52E46C711C8C873D*>*, ::System::Collections::Generic::List_1<::Class_2_52E46C711C8C873D*>*>* a9)
	{
		return ((::System::Void(*)(::Class_2_C162E620AE258C19*, ::Class_1_D366ED82D8A1F916*, ::Class_1_E25AA19765F0B270*, ::System::Action_1<::Class_2_BA2B2B0A0E98E063*>*, ::System::Action_1<::Class_2_BA2B2B0A0E98E063*>*, ::System::Action_1<::Class_2_BA2B2B0A0E98E063*>*, ::System::Action_1<::Class_2_BA2B2B0A0E98E063*>*, ::System::Func_2<::Class_2_BA2B2B0A0E98E063*, ::Class_2_BA2B2B0A0E98E063*>*, ::System::Func_3<::Class_1_D366ED82D8A1F916*, ::System::Collections::Generic::List_1<::Class_2_52E46C711C8C873D*>*, ::System::Collections::Generic::List_1<::Class_2_52E46C711C8C873D*>*>*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_097011A8281486E9_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}
};
