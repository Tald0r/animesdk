#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/Enum_3_BEADE0D60E8972CC.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/Struct_2_BD55FB98E7CE49F3.h"
#include "unitysdk/Struct_2_E555EF9B1EABB0B4.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_15CCFE77B9E12299;
class Class_1_B7E341C5F1A6F199;
class Class_2_09C478668651C9AE_15;
class Class_2_3D56061BB4B0BC0F;
class Class_2_AA847F914C1E8638;
class Class_2_B9924A1E70572906;
class Class_2_D2635BA9D50B0AA7;
class Class_2_D92382DB92EE14DA;
class Class_2_FF870BBAEF08CB0B_3;
class Class_3_F41D242A20F8FE06;
class Class_3_F97B015544BE936B;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define CLASS_3_E20366D1301D6555_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x846B890)
#define CLASS_3_E20366D1301D6555_ENDOFFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x846BF00)
#define CLASS_3_E20366D1301D6555_METHOD_3_02F12016C38772D9_OFFSET UNITYSDK_OFFSET(0x846D290)
#define CLASS_3_E20366D1301D6555_METHOD_3_04E5A3C91BCECA3E_OFFSET UNITYSDK_OFFSET(0x84704C0)
#define CLASS_3_E20366D1301D6555_METHOD_3_088C9E99B2B1F58A_OFFSET UNITYSDK_OFFSET(0x846E790)
#define CLASS_3_E20366D1301D6555_METHOD_3_0944E13101E3B11D_OFFSET UNITYSDK_OFFSET(0x847A2D0)
#define CLASS_3_E20366D1301D6555_METHOD_3_09870CE9209296CB_OFFSET UNITYSDK_OFFSET(0x847A6E0)
#define CLASS_3_E20366D1301D6555_METHOD_3_101E38781F8BFF8E_OFFSET UNITYSDK_OFFSET(0x846F470)
#define CLASS_3_E20366D1301D6555_METHOD_3_14C8E83BE7B9FF05_OFFSET UNITYSDK_OFFSET(0x847A560)
#define CLASS_3_E20366D1301D6555_METHOD_3_152F21E7D1BACB7B_OFFSET UNITYSDK_OFFSET(0x8472000)
#define CLASS_3_E20366D1301D6555_METHOD_3_21DB8E6F31E6B2BF_OFFSET UNITYSDK_OFFSET(0x8479660)
#define CLASS_3_E20366D1301D6555_METHOD_3_305196D46D542C4F_1_OFFSET UNITYSDK_OFFSET(0x8476AB0)
#define CLASS_3_E20366D1301D6555_METHOD_3_305196D46D542C4F_OFFSET UNITYSDK_OFFSET(0x8476820)
#define CLASS_3_E20366D1301D6555_METHOD_3_3343054C9CAF8D87_OFFSET UNITYSDK_OFFSET(0x8479320)
#define CLASS_3_E20366D1301D6555_METHOD_3_34C8239FA0F850FB_OFFSET UNITYSDK_OFFSET(0x8477400)
#define CLASS_3_E20366D1301D6555_METHOD_3_3645FDB85192C5E2_OFFSET UNITYSDK_OFFSET(0x8479440)
#define CLASS_3_E20366D1301D6555_METHOD_3_3B2233B36BC190C7_OFFSET UNITYSDK_OFFSET(0x8471410)
#define CLASS_3_E20366D1301D6555_METHOD_3_4A7809C670C95EE5_OFFSET UNITYSDK_OFFSET(0x846C0E0)
#define CLASS_3_E20366D1301D6555_METHOD_3_51020A869A3C7806_OFFSET UNITYSDK_OFFSET(0x8474CD0)
#define CLASS_3_E20366D1301D6555_METHOD_3_51E13C0B1A849A83_OFFSET UNITYSDK_OFFSET(0x8472FB0)
#define CLASS_3_E20366D1301D6555_METHOD_3_54762394B0510DCC_OFFSET UNITYSDK_OFFSET(0x8471F30)
#define CLASS_3_E20366D1301D6555_METHOD_3_5E1FBC6E28BF7391_OFFSET UNITYSDK_OFFSET(0x846C9C0)
#define CLASS_3_E20366D1301D6555_METHOD_3_5E6738D4CB8CB98D_1_OFFSET UNITYSDK_OFFSET(0x8475520)
#define CLASS_3_E20366D1301D6555_METHOD_3_5E6738D4CB8CB98D_OFFSET UNITYSDK_OFFSET(0x8471610)
#define CLASS_3_E20366D1301D6555_METHOD_3_718F31D5203D51D5_OFFSET UNITYSDK_OFFSET(0x8477940)
#define CLASS_3_E20366D1301D6555_METHOD_3_7229BAB6D7121D69_1_OFFSET UNITYSDK_OFFSET(0x846FDC0)
#define CLASS_3_E20366D1301D6555_METHOD_3_7229BAB6D7121D69_OFFSET UNITYSDK_OFFSET(0x846F6C0)
#define CLASS_3_E20366D1301D6555_METHOD_3_7724916078DA132B_OFFSET UNITYSDK_OFFSET(0x846D5D0)
#define CLASS_3_E20366D1301D6555_METHOD_3_7B146A835A63E4A2_OFFSET UNITYSDK_OFFSET(0x8475DA0)
#define CLASS_3_E20366D1301D6555_METHOD_3_803589031DCB0BDA_OFFSET UNITYSDK_OFFSET(0x8477620)
#define CLASS_3_E20366D1301D6555_METHOD_3_84EE4D4BE253C005_1_OFFSET UNITYSDK_OFFSET(0x8478EA0)
#define CLASS_3_E20366D1301D6555_METHOD_3_84EE4D4BE253C005_OFFSET UNITYSDK_OFFSET(0x8478260)
#define CLASS_3_E20366D1301D6555_METHOD_3_93D8B03700E07FF7_OFFSET UNITYSDK_OFFSET(0x846F0F0)
#define CLASS_3_E20366D1301D6555_METHOD_3_987FCCF0A51685D4_OFFSET UNITYSDK_OFFSET(0x846D0A0)
#define CLASS_3_E20366D1301D6555_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0x84792C0)
#define CLASS_3_E20366D1301D6555_METHOD_3_A7A0D4230851EFAF_OFFSET UNITYSDK_OFFSET(0x8477510)
#define CLASS_3_E20366D1301D6555_METHOD_3_A829C21E0DDA970D_OFFSET UNITYSDK_OFFSET(0x846E4A0)
#define CLASS_3_E20366D1301D6555_METHOD_3_AE763322F3044CB3_OFFSET UNITYSDK_OFFSET(0x846C4D0)
#define CLASS_3_E20366D1301D6555_METHOD_3_B0AB40A0F28DAB6B_OFFSET UNITYSDK_OFFSET(0x8474950)
#define CLASS_3_E20366D1301D6555_METHOD_3_B3E229B668ACCF23_OFFSET UNITYSDK_OFFSET(0x8474B60)
#define CLASS_3_E20366D1301D6555_METHOD_3_B408299A805176B4_OFFSET UNITYSDK_OFFSET(0x846D4B0)
#define CLASS_3_E20366D1301D6555_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x8479250)
#define CLASS_3_E20366D1301D6555_METHOD_3_C0F131BBB1F8E23F_OFFSET UNITYSDK_OFFSET(0x846EFB0)
#define CLASS_3_E20366D1301D6555_METHOD_3_C6B38F382EBB9D9D_OFFSET UNITYSDK_OFFSET(0x8478610)
#define CLASS_3_E20366D1301D6555_METHOD_3_C76E59D08B6356AE_1_OFFSET UNITYSDK_OFFSET(0x8475360)
#define CLASS_3_E20366D1301D6555_METHOD_3_C76E59D08B6356AE_OFFSET UNITYSDK_OFFSET(0x846F500)
#define CLASS_3_E20366D1301D6555_METHOD_3_C878AA2CC201D2EB_OFFSET UNITYSDK_OFFSET(0x8472EC0)
#define CLASS_3_E20366D1301D6555_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x84793E0)
#define CLASS_3_E20366D1301D6555_METHOD_3_CB1319CE7269C92C_OFFSET UNITYSDK_OFFSET(0x8476740)
#define CLASS_3_E20366D1301D6555_METHOD_3_D1C6E7E2DD79C148_OFFSET UNITYSDK_OFFSET(0x84750C0)
#define CLASS_3_E20366D1301D6555_METHOD_3_D2570AA6795434FE_OFFSET UNITYSDK_OFFSET(0x8474FD0)
#define CLASS_3_E20366D1301D6555_METHOD_3_D613321D03157EDB_OFFSET UNITYSDK_OFFSET(0x8477710)
#define CLASS_3_E20366D1301D6555_METHOD_3_D852386318F57E8F_1_OFFSET UNITYSDK_OFFSET(0x8474E60)
#define CLASS_3_E20366D1301D6555_METHOD_3_D852386318F57E8F_OFFSET UNITYSDK_OFFSET(0x8471DC0)
#define CLASS_3_E20366D1301D6555_METHOD_3_DDDB4FE26C984127_OFFSET UNITYSDK_OFFSET(0x846CDF0)
#define CLASS_3_E20366D1301D6555_METHOD_3_DF518C5F5B4B18A5_OFFSET UNITYSDK_OFFSET(0x84769C0)
#define CLASS_3_E20366D1301D6555_METHOD_3_E028D6792B3F2719_OFFSET UNITYSDK_OFFSET(0x846D440)
#define CLASS_3_E20366D1301D6555_METHOD_3_E2B524554C60449B_OFFSET UNITYSDK_OFFSET(0x84794B0)
#define CLASS_3_E20366D1301D6555_METHOD_3_F2457FCB0FAFA694_1_OFFSET UNITYSDK_OFFSET(0x8479A10)
#define CLASS_3_E20366D1301D6555_METHOD_3_F2457FCB0FAFA694_2_OFFSET UNITYSDK_OFFSET(0x8476C50)
#define CLASS_3_E20366D1301D6555_METHOD_3_F2457FCB0FAFA694_OFFSET UNITYSDK_OFFSET(0x8475F90)
#define CLASS_3_E20366D1301D6555_METHOD_3_F7630BA667E7E395_OFFSET UNITYSDK_OFFSET(0x8472CC0)
#define CLASS_3_E20366D1301D6555_METHOD_3_F7EFF65316E52323_OFFSET UNITYSDK_OFFSET(0x8475CD0)
#define CLASS_3_E20366D1301D6555_METHOD_3_F9425CE671B74859_OFFSET UNITYSDK_OFFSET(0x8470870)
#define CLASS_3_E20366D1301D6555_METHOD_3_F99757A6A9829279_OFFSET UNITYSDK_OFFSET(0x84723F0)
#define CLASS_3_E20366D1301D6555__CCTOR_OFFSET UNITYSDK_OFFSET(0x846C0A0)
#define CLASS_3_E20366D1301D6555__CTOR_OFFSET UNITYSDK_OFFSET(0x846C080)

inline static constexpr unsigned int Class_3_E20366D1301D6555_TypeDefinitionIndex = 77180;

class Class_3_E20366D1301D6555 : public ::Class_2_F33340E023067DAF
{
public:
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_3_2()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_3_E20366D1301D6555_TypeDefinitionIndex)->GetStaticField(0xF270);
	}
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void EndOfFixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_ENDOFFIXEDUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_4A7809C670C95EE5(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_4A7809C670C95EE5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_B408299A805176B4(::Class_3_F97B015544BE936B* a1, ::System::String* a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::Class_3_F97B015544BE936B*, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_B408299A805176B4_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_7724916078DA132B(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_7724916078DA132B_OFFSET))(a1);
	}

	static ::System::Double Method_3_93D8B03700E07FF7(::System::Single a1, ::System::Double a2, ::MoleMole::Config::BaseProperty a3, ::System::String* a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::System::Double(*)(::System::Single, ::System::Double, ::MoleMole::Config::BaseProperty, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_93D8B03700E07FF7_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_101E38781F8BFF8E(::Class_3_F97B015544BE936B* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_101E38781F8BFF8E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C76E59D08B6356AE(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_C76E59D08B6356AE_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_02F12016C38772D9(::MoleMole::Battle::Entity* a1, ::Struct_2_E555EF9B1EABB0B4 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Struct_2_E555EF9B1EABB0B4))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_02F12016C38772D9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_04E5A3C91BCECA3E(::Class_3_F97B015544BE936B* a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_04E5A3C91BCECA3E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_AE763322F3044CB3(::Class_2_B9924A1E70572906* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_B9924A1E70572906*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_AE763322F3044CB3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3B2233B36BC190C7(::System::UInt32 a1, ::Class_2_D92382DB92EE14DA* a2, ::System::Double a3)
	{
		return ((::System::Void(*)(::System::UInt32, ::Class_2_D92382DB92EE14DA*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_3B2233B36BC190C7_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_5E6738D4CB8CB98D(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_5E6738D4CB8CB98D_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_54762394B0510DCC(::Class_3_F97B015544BE936B* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_54762394B0510DCC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_152F21E7D1BACB7B(::Class_3_F97B015544BE936B* a1, ::Class_2_D92382DB92EE14DA* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_2_D92382DB92EE14DA*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_152F21E7D1BACB7B_OFFSET))(a1, a2);
	}

	static ::System::Single Method_3_F99757A6A9829279(::Class_3_F97B015544BE936B* a1, ::System::Double a2, ::System::Boolean a3, ::Enum_3_BEADE0D60E8972CC a4)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Double, ::System::Boolean, ::Enum_3_BEADE0D60E8972CC))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_F99757A6A9829279_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_F7630BA667E7E395(::MoleMole::Battle::Entity* a1, ::Struct_2_E555EF9B1EABB0B4 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Struct_2_E555EF9B1EABB0B4, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_F7630BA667E7E395_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_7229BAB6D7121D69(::Struct_2_E555EF9B1EABB0B4 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Struct_2_E555EF9B1EABB0B4, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_7229BAB6D7121D69_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C878AA2CC201D2EB(::Class_3_F97B015544BE936B* a1, ::Class_2_AA847F914C1E8638* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_2_AA847F914C1E8638*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_C878AA2CC201D2EB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_51E13C0B1A849A83(::Class_3_F97B015544BE936B* a1)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_51E13C0B1A849A83_OFFSET))(a1);
	}

	static ::System::Single Method_3_D852386318F57E8F(::Class_3_F97B015544BE936B* a1)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_D852386318F57E8F_OFFSET))(a1);
	}

	static ::System::Void Method_3_B0AB40A0F28DAB6B(::Class_3_F97B015544BE936B* a1, ::Class_2_D92382DB92EE14DA* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_2_D92382DB92EE14DA*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_B0AB40A0F28DAB6B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B3E229B668ACCF23(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_B3E229B668ACCF23_OFFSET))(a1);
	}

	static ::System::Void Method_3_51020A869A3C7806(::Class_3_F97B015544BE936B* a1, ::System::Single a2, ::MoleMole::Config::PropertyModifyFunction a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::Single, ::MoleMole::Config::PropertyModifyFunction))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_51020A869A3C7806_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_987FCCF0A51685D4(::Class_2_09C478668651C9AE_15* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_09C478668651C9AE_15*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_987FCCF0A51685D4_OFFSET))(a1, a2);
	}

	static ::System::Single Method_3_D852386318F57E8F_1(::Class_3_F97B015544BE936B* a1)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_D852386318F57E8F_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_D2570AA6795434FE(::Class_3_F97B015544BE936B* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::Class_3_F97B015544BE936B*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_D2570AA6795434FE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_D1C6E7E2DD79C148(::Class_3_F97B015544BE936B* a1, ::System::String* a2, ::MoleMole::Config::ConfigPosRot* a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::String*, ::MoleMole::Config::ConfigPosRot*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_D1C6E7E2DD79C148_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_C76E59D08B6356AE_1(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_C76E59D08B6356AE_1_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_5E6738D4CB8CB98D_1(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_5E6738D4CB8CB98D_1_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Single Method_3_F7EFF65316E52323(::Class_3_F97B015544BE936B* a1, ::System::Double a2, ::Enum_3_BEADE0D60E8972CC a3)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Double, ::Enum_3_BEADE0D60E8972CC))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_F7EFF65316E52323_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_7B146A835A63E4A2(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_7B146A835A63E4A2_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_F2457FCB0FAFA694(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_F2457FCB0FAFA694_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_CB1319CE7269C92C(::Class_3_F97B015544BE936B* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_CB1319CE7269C92C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_305196D46D542C4F(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_305196D46D542C4F_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_DF518C5F5B4B18A5(::Class_3_F97B015544BE936B* a1, ::Class_2_AA847F914C1E8638* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_2_AA847F914C1E8638*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_DF518C5F5B4B18A5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_305196D46D542C4F_1(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_305196D46D542C4F_1_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_34C8239FA0F850FB(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_34C8239FA0F850FB_OFFSET))(a1);
	}

	static ::System::Void Method_3_A7A0D4230851EFAF(::Class_3_F97B015544BE936B* a1, ::System::Single a2, ::MoleMole::Config::PropertyModifyFunction a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::Single, ::MoleMole::Config::PropertyModifyFunction))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_A7A0D4230851EFAF_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_803589031DCB0BDA(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_803589031DCB0BDA_OFFSET))(a1);
	}

	static ::System::Void Method_3_D613321D03157EDB(::Class_3_F97B015544BE936B* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_D613321D03157EDB_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_A829C21E0DDA970D(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_A829C21E0DDA970D_OFFSET))(a1);
	}

	static ::System::Void Method_3_E028D6792B3F2719(::Class_2_FF870BBAEF08CB0B_3* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_FF870BBAEF08CB0B_3*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_E028D6792B3F2719_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_718F31D5203D51D5(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_718F31D5203D51D5_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_84EE4D4BE253C005(::Class_3_F97B015544BE936B* a1, ::Class_1_15CCFE77B9E12299* a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_1_15CCFE77B9E12299*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_84EE4D4BE253C005_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_C6B38F382EBB9D9D(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_C6B38F382EBB9D9D_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_C0F131BBB1F8E23F(::Class_3_F97B015544BE936B* a1, ::Class_1_15CCFE77B9E12299* a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_1_15CCFE77B9E12299*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_C0F131BBB1F8E23F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_7229BAB6D7121D69_1(::Struct_2_E555EF9B1EABB0B4 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Struct_2_E555EF9B1EABB0B4, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_7229BAB6D7121D69_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_088C9E99B2B1F58A(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5, ::System::Boolean a6, ::MoleMole::Battle::Entity* a7)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_088C9E99B2B1F58A_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}

	static ::System::Single Method_3_3343054C9CAF8D87(::Class_3_F97B015544BE936B* a1, ::System::Double a2)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_3343054C9CAF8D87_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_84EE4D4BE253C005_1(::Class_3_F97B015544BE936B* a1, ::Class_1_15CCFE77B9E12299* a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_1_15CCFE77B9E12299*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_84EE4D4BE253C005_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_DDDB4FE26C984127(::Class_2_D2635BA9D50B0AA7* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_D2635BA9D50B0AA7*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_DDDB4FE26C984127_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_F9425CE671B74859(::MoleMole::Config::BaseProperty a1, ::System::Single a2, ::System::Double a3, ::MoleMole::Config::PropertyModifyFunction a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::BaseProperty, ::System::Single, ::System::Double, ::MoleMole::Config::PropertyModifyFunction, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_F9425CE671B74859_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_3645FDB85192C5E2(::System::Int32 a1, ::System::Int32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_3645FDB85192C5E2_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_E2B524554C60449B(::Class_3_F97B015544BE936B* a1, ::System::String* a2, ::Struct_2_FC595D1A561D8C6F& a3)
	{
		return ((::System::Boolean(*)(::Class_3_F97B015544BE936B*, ::System::String*, ::Struct_2_FC595D1A561D8C6F&))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_E2B524554C60449B_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_21DB8E6F31E6B2BF(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_21DB8E6F31E6B2BF_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_F2457FCB0FAFA694_1(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_F2457FCB0FAFA694_1_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_0944E13101E3B11D(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_0944E13101E3B11D_OFFSET))(a1);
	}

	::System::Void Method_3_14C8E83BE7B9FF05(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_14C8E83BE7B9FF05_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_09870CE9209296CB(::MoleMole::Battle::Entity* a1, ::Struct_2_BD55FB98E7CE49F3 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Struct_2_BD55FB98E7CE49F3))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_09870CE9209296CB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5E1FBC6E28BF7391(::Class_2_3D56061BB4B0BC0F* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_3D56061BB4B0BC0F*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_5E1FBC6E28BF7391_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F2457FCB0FAFA694_2(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_F2457FCB0FAFA694_2_OFFSET))(a1, a2, a3, a4, a5, a6);
	}
};
