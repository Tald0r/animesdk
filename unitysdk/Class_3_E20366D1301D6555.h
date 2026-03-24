#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/Enum_3_7609C87F8335DE37.h"
#include "unitysdk/Enum_3_BEADE0D60E8972CC.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/Struct_2_BD55FB98E7CE49F3.h"
#include "unitysdk/Struct_2_E555EF9B1EABB0B4.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F_1.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7A5F167CAAA013FB;
class Class_1_B7E341C5F1A6F199;
class Class_2_1F102D37972FE675;
class Class_2_3CB5FE397F4526FE;
class Class_2_53F83645A448BA68_7;
class Class_2_AA847F914C1E8638;
class Class_2_C66010578763963F;
class Class_2_D2635BA9D50B0AA7;
class Class_2_FF870BBAEF08CB0B_4;
class Class_3_F41D242A20F8FE06;
class Class_3_F97B015544BE936B;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_E20366D1301D6555_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x6583380)
#define CLASS_3_E20366D1301D6555_ENDOFFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x65839F0)
#define CLASS_3_E20366D1301D6555_METHOD_3_02F12016C38772D9_OFFSET UNITYSDK_OFFSET(0x658B380)
#define CLASS_3_E20366D1301D6555_METHOD_3_04E5A3C91BCECA3E_OFFSET UNITYSDK_OFFSET(0x658D060)
#define CLASS_3_E20366D1301D6555_METHOD_3_088C9E99B2B1F58A_OFFSET UNITYSDK_OFFSET(0x6589A20)
#define CLASS_3_E20366D1301D6555_METHOD_3_0944E13101E3B11D_OFFSET UNITYSDK_OFFSET(0x658DE20)
#define CLASS_3_E20366D1301D6555_METHOD_3_101E38781F8BFF8E_OFFSET UNITYSDK_OFFSET(0x6590AA0)
#define CLASS_3_E20366D1301D6555_METHOD_3_14C8E83BE7B9FF05_OFFSET UNITYSDK_OFFSET(0x65915D0)
#define CLASS_3_E20366D1301D6555_METHOD_3_21DB8E6F31E6B2BF_OFFSET UNITYSDK_OFFSET(0x6583FC0)
#define CLASS_3_E20366D1301D6555_METHOD_3_2EE7243B0BA3ECB7_OFFSET UNITYSDK_OFFSET(0x65843E0)
#define CLASS_3_E20366D1301D6555_METHOD_3_305196D46D542C4F_1_OFFSET UNITYSDK_OFFSET(0x658D630)
#define CLASS_3_E20366D1301D6555_METHOD_3_305196D46D542C4F_OFFSET UNITYSDK_OFFSET(0x658BDB0)
#define CLASS_3_E20366D1301D6555_METHOD_3_34C8239FA0F850FB_OFFSET UNITYSDK_OFFSET(0x6583EC0)
#define CLASS_3_E20366D1301D6555_METHOD_3_3645FDB85192C5E2_OFFSET UNITYSDK_OFFSET(0x658FCD0)
#define CLASS_3_E20366D1301D6555_METHOD_3_3B2233B36BC190C7_OFFSET UNITYSDK_OFFSET(0x6583BD0)
#define CLASS_3_E20366D1301D6555_METHOD_3_432E8114528FD5E4_OFFSET UNITYSDK_OFFSET(0x658AB80)
#define CLASS_3_E20366D1301D6555_METHOD_3_4A4271C3FDFA7A10_OFFSET UNITYSDK_OFFSET(0x658E0B0)
#define CLASS_3_E20366D1301D6555_METHOD_3_4A7809C670C95EE5_OFFSET UNITYSDK_OFFSET(0x658A370)
#define CLASS_3_E20366D1301D6555_METHOD_3_4B962419EDD6CEFC_OFFSET UNITYSDK_OFFSET(0x658FB00)
#define CLASS_3_E20366D1301D6555_METHOD_3_50DA494A5EA31306_1_OFFSET UNITYSDK_OFFSET(0x658BF50)
#define CLASS_3_E20366D1301D6555_METHOD_3_50DA494A5EA31306_2_OFFSET UNITYSDK_OFFSET(0x65901F0)
#define CLASS_3_E20366D1301D6555_METHOD_3_50DA494A5EA31306_OFFSET UNITYSDK_OFFSET(0x6588140)
#define CLASS_3_E20366D1301D6555_METHOD_3_51020A869A3C7806_OFFSET UNITYSDK_OFFSET(0x658CCB0)
#define CLASS_3_E20366D1301D6555_METHOD_3_51E13C0B1A849A83_OFFSET UNITYSDK_OFFSET(0x65849A0)
#define CLASS_3_E20366D1301D6555_METHOD_3_54762394B0510DCC_OFFSET UNITYSDK_OFFSET(0x658B530)
#define CLASS_3_E20366D1301D6555_METHOD_3_600E48955F09ED1B_OFFSET UNITYSDK_OFFSET(0x658CE30)
#define CLASS_3_E20366D1301D6555_METHOD_3_6058BDD33DAB0EBD_OFFSET UNITYSDK_OFFSET(0x6588780)
#define CLASS_3_E20366D1301D6555_METHOD_3_61508B20EA104B09_OFFSET UNITYSDK_OFFSET(0x658F000)
#define CLASS_3_E20366D1301D6555_METHOD_3_6980C8075C023857_OFFSET UNITYSDK_OFFSET(0x658A230)
#define CLASS_3_E20366D1301D6555_METHOD_3_7229BAB6D7121D69_1_OFFSET UNITYSDK_OFFSET(0x6590B30)
#define CLASS_3_E20366D1301D6555_METHOD_3_7229BAB6D7121D69_OFFSET UNITYSDK_OFFSET(0x65890C0)
#define CLASS_3_E20366D1301D6555_METHOD_3_72BCF3E252699D79_OFFSET UNITYSDK_OFFSET(0x6586D80)
#define CLASS_3_E20366D1301D6555_METHOD_3_7724916078DA132B_OFFSET UNITYSDK_OFFSET(0x6587420)
#define CLASS_3_E20366D1301D6555_METHOD_3_7B146A835A63E4A2_OFFSET UNITYSDK_OFFSET(0x6590000)
#define CLASS_3_E20366D1301D6555_METHOD_3_7F5E672902308E8A_OFFSET UNITYSDK_OFFSET(0x6591870)
#define CLASS_3_E20366D1301D6555_METHOD_3_803589031DCB0BDA_OFFSET UNITYSDK_OFFSET(0x6587330)
#define CLASS_3_E20366D1301D6555_METHOD_3_987FCCF0A51685D4_OFFSET UNITYSDK_OFFSET(0x6588ED0)
#define CLASS_3_E20366D1301D6555_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0x658FAA0)
#define CLASS_3_E20366D1301D6555_METHOD_3_A1B7F4023607C863_1_OFFSET UNITYSDK_OFFSET(0x6591270)
#define CLASS_3_E20366D1301D6555_METHOD_3_A1B7F4023607C863_OFFSET UNITYSDK_OFFSET(0x658E870)
#define CLASS_3_E20366D1301D6555_METHOD_3_A7A0D4230851EFAF_OFFSET UNITYSDK_OFFSET(0x658FBC0)
#define CLASS_3_E20366D1301D6555_METHOD_3_A829C21E0DDA970D_OFFSET UNITYSDK_OFFSET(0x6589730)
#define CLASS_3_E20366D1301D6555_METHOD_3_AE763322F3044CB3_OFFSET UNITYSDK_OFFSET(0x658A760)
#define CLASS_3_E20366D1301D6555_METHOD_3_B3E229B668ACCF23_OFFSET UNITYSDK_OFFSET(0x658EAA0)
#define CLASS_3_E20366D1301D6555_METHOD_3_B408299A805176B4_OFFSET UNITYSDK_OFFSET(0x6591750)
#define CLASS_3_E20366D1301D6555_METHOD_3_B8EEE779B6BF1C93_1_OFFSET UNITYSDK_OFFSET(0x658B900)
#define CLASS_3_E20366D1301D6555_METHOD_3_B8EEE779B6BF1C93_OFFSET UNITYSDK_OFFSET(0x658EE10)
#define CLASS_3_E20366D1301D6555_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x65872C0)
#define CLASS_3_E20366D1301D6555_METHOD_3_C6C0F471E996E270_OFFSET UNITYSDK_OFFSET(0x658B600)
#define CLASS_3_E20366D1301D6555_METHOD_3_C84F42CAE39E447A_1_OFFSET UNITYSDK_OFFSET(0x658FD40)
#define CLASS_3_E20366D1301D6555_METHOD_3_C84F42CAE39E447A_OFFSET UNITYSDK_OFFSET(0x658BAF0)
#define CLASS_3_E20366D1301D6555_METHOD_3_C878AA2CC201D2EB_OFFSET UNITYSDK_OFFSET(0x65871D0)
#define CLASS_3_E20366D1301D6555_METHOD_3_C8E06C74F4385539_OFFSET UNITYSDK_OFFSET(0x65908E0)
#define CLASS_3_E20366D1301D6555_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6587170)
#define CLASS_3_E20366D1301D6555_METHOD_3_CB1319CE7269C92C_OFFSET UNITYSDK_OFFSET(0x6591190)
#define CLASS_3_E20366D1301D6555_METHOD_3_D1C6E7E2DD79C148_OFFSET UNITYSDK_OFFSET(0x6586AE0)
#define CLASS_3_E20366D1301D6555_METHOD_3_D2570AA6795434FE_OFFSET UNITYSDK_OFFSET(0x65909B0)
#define CLASS_3_E20366D1301D6555_METHOD_3_D613321D03157EDB_OFFSET UNITYSDK_OFFSET(0x658D400)
#define CLASS_3_E20366D1301D6555_METHOD_3_D852386318F57E8F_1_OFFSET UNITYSDK_OFFSET(0x6586970)
#define CLASS_3_E20366D1301D6555_METHOD_3_D852386318F57E8F_OFFSET UNITYSDK_OFFSET(0x6584830)
#define CLASS_3_E20366D1301D6555_METHOD_3_DA3ACFA1316D231A_1_OFFSET UNITYSDK_OFFSET(0x658C590)
#define CLASS_3_E20366D1301D6555_METHOD_3_DA3ACFA1316D231A_2_OFFSET UNITYSDK_OFFSET(0x658D7D0)
#define CLASS_3_E20366D1301D6555_METHOD_3_DA3ACFA1316D231A_OFFSET UNITYSDK_OFFSET(0x6586320)
#define CLASS_3_E20366D1301D6555_METHOD_3_DDDB4FE26C984127_OFFSET UNITYSDK_OFFSET(0x658B0E0)
#define CLASS_3_E20366D1301D6555_METHOD_3_DF518C5F5B4B18A5_OFFSET UNITYSDK_OFFSET(0x6583DD0)
#define CLASS_3_E20366D1301D6555_METHOD_3_E028D6792B3F2719_OFFSET UNITYSDK_OFFSET(0x6584370)
#define CLASS_3_E20366D1301D6555_METHOD_3_E2B524554C60449B_OFFSET UNITYSDK_OFFSET(0x6592450)
#define CLASS_3_E20366D1301D6555_METHOD_3_F098C4EC951B3DB9_OFFSET UNITYSDK_OFFSET(0x65914A0)
#define CLASS_3_E20366D1301D6555_METHOD_3_F7630BA667E7E395_OFFSET UNITYSDK_OFFSET(0x658EC10)
#define CLASS_3_E20366D1301D6555__CCTOR_OFFSET UNITYSDK_OFFSET(0x6583B90)
#define CLASS_3_E20366D1301D6555__CTOR_OFFSET UNITYSDK_OFFSET(0x6583B70)

inline static constexpr unsigned int Class_3_E20366D1301D6555_TypeDefinitionIndex = 73307;

class Class_3_E20366D1301D6555 : public ::Class_2_F33340E023067DAF
{
public:
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_3_2()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_3_E20366D1301D6555_TypeDefinitionIndex)->GetStaticField(0xA090);
	}
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x28

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

	static ::System::Void Method_3_3B2233B36BC190C7(::System::UInt32 a1, ::Class_2_1F102D37972FE675* a2, ::System::Double a3)
	{
		return ((::System::Void(*)(::System::UInt32, ::Class_2_1F102D37972FE675*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_3B2233B36BC190C7_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_DF518C5F5B4B18A5(::Class_3_F97B015544BE936B* a1, ::Class_2_AA847F914C1E8638* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_2_AA847F914C1E8638*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_DF518C5F5B4B18A5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_34C8239FA0F850FB(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_34C8239FA0F850FB_OFFSET))(a1);
	}

	::System::Void Method_3_21DB8E6F31E6B2BF(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_21DB8E6F31E6B2BF_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_E028D6792B3F2719(::Class_2_FF870BBAEF08CB0B_4* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_FF870BBAEF08CB0B_4*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_E028D6792B3F2719_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_2EE7243B0BA3ECB7(::Class_3_F97B015544BE936B* a1, ::Class_2_1F102D37972FE675* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_2_1F102D37972FE675*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_2EE7243B0BA3ECB7_OFFSET))(a1, a2);
	}

	static ::System::Single Method_3_D852386318F57E8F(::Class_3_F97B015544BE936B* a1)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_D852386318F57E8F_OFFSET))(a1);
	}

	static ::System::Void Method_3_51E13C0B1A849A83(::Class_3_F97B015544BE936B* a1)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_51E13C0B1A849A83_OFFSET))(a1);
	}

	static ::System::Void Method_3_DA3ACFA1316D231A(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_DA3ACFA1316D231A_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_D1C6E7E2DD79C148(::Class_3_F97B015544BE936B* a1, ::System::String* a2, ::MoleMole::Config::ConfigPosRot* a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::String*, ::MoleMole::Config::ConfigPosRot*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_D1C6E7E2DD79C148_OFFSET))(a1, a2, a3);
	}

	static ::System::Double Method_3_72BCF3E252699D79(::System::Single a1, ::System::Double a2, ::MoleMole::Config::BaseProperty a3, ::System::String* a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::System::Double(*)(::System::Single, ::System::Double, ::MoleMole::Config::BaseProperty, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_72BCF3E252699D79_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_C878AA2CC201D2EB(::Class_3_F97B015544BE936B* a1, ::Class_2_AA847F914C1E8638* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_2_AA847F914C1E8638*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_C878AA2CC201D2EB_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_803589031DCB0BDA(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_803589031DCB0BDA_OFFSET))(a1);
	}

	static ::System::Void Method_3_50DA494A5EA31306(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_50DA494A5EA31306_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_6058BDD33DAB0EBD(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_6058BDD33DAB0EBD_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_987FCCF0A51685D4(::Class_2_53F83645A448BA68_7* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_53F83645A448BA68_7*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_987FCCF0A51685D4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7229BAB6D7121D69(::Struct_2_E555EF9B1EABB0B4 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Struct_2_E555EF9B1EABB0B4, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_7229BAB6D7121D69_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7724916078DA132B(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_7724916078DA132B_OFFSET))(a1);
	}

	static ::System::Single Method_3_D852386318F57E8F_1(::Class_3_F97B015544BE936B* a1)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_D852386318F57E8F_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_4A7809C670C95EE5(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_4A7809C670C95EE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_54762394B0510DCC(::Class_3_F97B015544BE936B* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_54762394B0510DCC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C6C0F471E996E270(::Class_3_F97B015544BE936B* a1, ::System::Collections::Generic::Dictionary_2<::Enum_3_7609C87F8335DE37, ::System::Single>* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::Collections::Generic::Dictionary_2<::Enum_3_7609C87F8335DE37, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_C6C0F471E996E270_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C84F42CAE39E447A(::Class_3_F97B015544BE936B* a1, ::Class_1_7A5F167CAAA013FB* a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_1_7A5F167CAAA013FB*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_C84F42CAE39E447A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_305196D46D542C4F(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_305196D46D542C4F_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_DA3ACFA1316D231A_1(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_DA3ACFA1316D231A_1_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_51020A869A3C7806(::Class_3_F97B015544BE936B* a1, ::System::Single a2, ::MoleMole::Config::PropertyModifyFunction a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::Single, ::MoleMole::Config::PropertyModifyFunction))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_51020A869A3C7806_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_600E48955F09ED1B(::Class_3_F97B015544BE936B* a1, ::Class_2_1F102D37972FE675* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_2_1F102D37972FE675*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_600E48955F09ED1B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_088C9E99B2B1F58A(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5, ::System::Boolean a6, ::MoleMole::Battle::Entity* a7)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_088C9E99B2B1F58A_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_3_D613321D03157EDB(::Class_3_F97B015544BE936B* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_D613321D03157EDB_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_305196D46D542C4F_1(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_305196D46D542C4F_1_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_50DA494A5EA31306_1(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_50DA494A5EA31306_1_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_0944E13101E3B11D(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_0944E13101E3B11D_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_4A4271C3FDFA7A10(::MoleMole::Config::BaseProperty a1, ::System::Single a2, ::System::Double a3, ::MoleMole::Config::PropertyModifyFunction a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::BaseProperty, ::System::Single, ::System::Double, ::MoleMole::Config::PropertyModifyFunction, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_4A4271C3FDFA7A10_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_A1B7F4023607C863(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_A1B7F4023607C863_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_B3E229B668ACCF23(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_B3E229B668ACCF23_OFFSET))(a1);
	}

	static ::System::Void Method_3_F7630BA667E7E395(::MoleMole::Battle::Entity* a1, ::Struct_2_E555EF9B1EABB0B4 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Struct_2_E555EF9B1EABB0B4, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_F7630BA667E7E395_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_3_B8EEE779B6BF1C93(::Class_3_F97B015544BE936B* a1, ::Enum_3_7609C87F8335DE37 a2)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::Enum_3_7609C87F8335DE37))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_B8EEE779B6BF1C93_OFFSET))(a1, a2);
	}

	static ::System::Single Method_3_61508B20EA104B09(::Class_3_F97B015544BE936B* a1, ::System::Double a2, ::System::Boolean a3, ::Enum_3_BEADE0D60E8972CC a4)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Double, ::System::Boolean, ::Enum_3_BEADE0D60E8972CC))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_61508B20EA104B09_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}

	static ::System::Void Method_3_AE763322F3044CB3(::Class_2_3CB5FE397F4526FE* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_3CB5FE397F4526FE*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_AE763322F3044CB3_OFFSET))(a1, a2);
	}

	static ::System::Single Method_3_4B962419EDD6CEFC(::Class_3_F97B015544BE936B* a1, ::System::Double a2)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_4B962419EDD6CEFC_OFFSET))(a1, a2);
	}

	static ::System::Single Method_3_B8EEE779B6BF1C93_1(::Class_3_F97B015544BE936B* a1, ::Enum_3_7609C87F8335DE37 a2)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::Enum_3_7609C87F8335DE37))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_B8EEE779B6BF1C93_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_DDDB4FE26C984127(::Class_2_D2635BA9D50B0AA7* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_D2635BA9D50B0AA7*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_DDDB4FE26C984127_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A7A0D4230851EFAF(::Class_3_F97B015544BE936B* a1, ::System::Single a2, ::MoleMole::Config::PropertyModifyFunction a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::Single, ::MoleMole::Config::PropertyModifyFunction))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_A7A0D4230851EFAF_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_3645FDB85192C5E2(::System::Int32 a1, ::System::Int32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_3645FDB85192C5E2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_DA3ACFA1316D231A_2(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_DA3ACFA1316D231A_2_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_6980C8075C023857(::Class_3_F97B015544BE936B* a1, ::Class_1_7A5F167CAAA013FB* a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_1_7A5F167CAAA013FB*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_6980C8075C023857_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_C84F42CAE39E447A_1(::Class_3_F97B015544BE936B* a1, ::Class_1_7A5F167CAAA013FB* a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_1_7A5F167CAAA013FB*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_C84F42CAE39E447A_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_7B146A835A63E4A2(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_7B146A835A63E4A2_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_50DA494A5EA31306_2(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_50DA494A5EA31306_2_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Single Method_3_C8E06C74F4385539(::Class_3_F97B015544BE936B* a1, ::System::Double a2, ::Enum_3_BEADE0D60E8972CC a3)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Double, ::Enum_3_BEADE0D60E8972CC))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_C8E06C74F4385539_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_D2570AA6795434FE(::Class_3_F97B015544BE936B* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::Class_3_F97B015544BE936B*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_D2570AA6795434FE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_101E38781F8BFF8E(::Class_3_F97B015544BE936B* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_101E38781F8BFF8E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A829C21E0DDA970D(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_A829C21E0DDA970D_OFFSET))(a1);
	}

	static ::System::Void Method_3_432E8114528FD5E4(::Class_2_C66010578763963F* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_C66010578763963F*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_432E8114528FD5E4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_02F12016C38772D9(::MoleMole::Battle::Entity* a1, ::Struct_2_E555EF9B1EABB0B4 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Struct_2_E555EF9B1EABB0B4))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_02F12016C38772D9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_CB1319CE7269C92C(::Class_3_F97B015544BE936B* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_CB1319CE7269C92C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_A1B7F4023607C863_1(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_A1B7F4023607C863_1_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_3_F098C4EC951B3DB9(::Class_3_F97B015544BE936B* a1, ::Enum_3_7609C87F8335DE37 a2)
	{
		return ((::System::Boolean(*)(::Class_3_F97B015544BE936B*, ::Enum_3_7609C87F8335DE37))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_F098C4EC951B3DB9_OFFSET))(a1, a2);
	}

	::System::Void Method_3_14C8E83BE7B9FF05(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_14C8E83BE7B9FF05_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_B408299A805176B4(::Class_3_F97B015544BE936B* a1, ::System::String* a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::Class_3_F97B015544BE936B*, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_B408299A805176B4_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_7229BAB6D7121D69_1(::Struct_2_E555EF9B1EABB0B4 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Struct_2_E555EF9B1EABB0B4, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_7229BAB6D7121D69_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_04E5A3C91BCECA3E(::Class_3_F97B015544BE936B* a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_04E5A3C91BCECA3E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_7F5E672902308E8A(::MoleMole::Battle::Entity* a1, ::Struct_2_BD55FB98E7CE49F3 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Struct_2_BD55FB98E7CE49F3))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_7F5E672902308E8A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_E2B524554C60449B(::Class_3_F97B015544BE936B* a1, ::System::String* a2, ::Struct_2_FC595D1A561D8C6F_1& a3)
	{
		return ((::System::Boolean(*)(::Class_3_F97B015544BE936B*, ::System::String*, ::Struct_2_FC595D1A561D8C6F_1&))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_E2B524554C60449B_OFFSET))(a1, a2, a3);
	}
};
