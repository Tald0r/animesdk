#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C836D00248E6EFFE.h"
#include "unitysdk/Class_2_5F3F43A98D097A42_Enum_3_E780930DE1CECBEF.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_0F138252A5783001;
class Class_2_14986121AA61AD99;
class Class_2_8CAD669444D1F6DE;
class Class_3_757A5862D4BBEE41_1;
class Class_3_8789B8149D32D3F2;
class Class_3_F35B080B137ECC46;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigWindFieldProperty; }
namespace MoleMole::Config { class PatternShape; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Collider; }

#define CLASS_2_5F3F43A98D097A42_METHOD_2_08BBACE844405300_OFFSET UNITYSDK_OFFSET(0xD054B50)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_1BCE0DA867094A1E_OFFSET UNITYSDK_OFFSET(0xD05C3A0)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_20137FA294E860F3_OFFSET UNITYSDK_OFFSET(0xD05CE10)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_26DB7B943FB654E0_OFFSET UNITYSDK_OFFSET(0xD05BAD0)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0xD055F60)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_5FB0DC4E8DAA3EC5_OFFSET UNITYSDK_OFFSET(0xD0565B0)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_75A5B1D9D1BECE41_OFFSET UNITYSDK_OFFSET(0xD0581A0)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_7619D93B61B6E841_OFFSET UNITYSDK_OFFSET(0xD05B570)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_81D73E9E40EEBAD0_OFFSET UNITYSDK_OFFSET(0xD059410)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_8A4FA7025C239134_OFFSET UNITYSDK_OFFSET(0xD058CD0)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_8C19339714663113_OFFSET UNITYSDK_OFFSET(0xD05AF80)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0xD055570)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_927ED2366981340D_OFFSET UNITYSDK_OFFSET(0xD058A50)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_9588AFB27191146D_OFFSET UNITYSDK_OFFSET(0xD05B9D0)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_96F6E9EA89A38FD1_OFFSET UNITYSDK_OFFSET(0xD056E50)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_A1A7583D5F36A23C_OFFSET UNITYSDK_OFFSET(0xD05C6B0)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_A4C9499E519D205D_OFFSET UNITYSDK_OFFSET(0xD054A50)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_ACA02A72FF6E91EF_OFFSET UNITYSDK_OFFSET(0xD05B580)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0xD05BEA0)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_AEBE70633EEF1704_OFFSET UNITYSDK_OFFSET(0xD05AC00)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_B09E78EE7EE4F8FA_1_OFFSET UNITYSDK_OFFSET(0xD05B380)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xD0573C0)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0xD056510)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_BC46A74DF805F47F_OFFSET UNITYSDK_OFFSET(0xD0571A0)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xD05ABA0)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xD05CB50)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0xD05CBB0)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD057360)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0xD056380)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0xD0575A0)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_E158251F3B04F7D9_OFFSET UNITYSDK_OFFSET(0xD05C190)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0xD055720)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_F1912AAB84F4571A_OFFSET UNITYSDK_OFFSET(0xD05CC10)
#define CLASS_2_5F3F43A98D097A42__CTOR_OFFSET UNITYSDK_OFFSET(0xD056F00)

inline static constexpr unsigned int Class_2_5F3F43A98D097A42_TypeDefinitionIndex = 47146;

class Class_2_5F3F43A98D097A42 : public ::Class_1_C836D00248E6EFFE
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_22; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_2_7; // 0x58
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_20; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* Field_2_5; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_757A5862D4BBEE41_1*>* Field_2_4; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* Field_2_6; // 0x78
	::UnityEngine::AnimationCurve* Field_2_25; // 0x80
	::Class_3_8789B8149D32D3F2* Field_2_0; // 0x88
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_23; // 0x90
	::UnityEngine::AnimationCurve* Field_2_26; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_F35B080B137ECC46*>* Field_2_3; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::Battle::Entity*>* Field_2_2; // 0xA8
	::MoleMole::Config::ConfigWindFieldProperty* Field_2_1; // 0xB0
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_24; // 0xB8
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Field_2_18; // 0xC0
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_21; // 0xC8
	::System::Int32 Field_2_19; // 0xD0
	::Class_2_5F3F43A98D097A42_Enum_3_E780930DE1CECBEF Field_2_8; // 0xD4
	::System::Single Field_2_9; // 0xD8
	::System::Single Field_2_12; // 0xDC
	::System::Single Field_2_11; // 0xE0
	::UnityEngine::Vector3 Field_2_17; // 0xE4
	::System::Single Field_2_13; // 0xF0
	::System::Single Field_2_14; // 0xF4
	::UnityEngine::Vector3 Field_2_16; // 0xF8
	::UnityEngine::Vector3 Field_2_15; // 0x104
	::System::Single Field_2_10; // 0x110

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A4C9499E519D205D(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3, ::Class_2_0F138252A5783001* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::Class_2_0F138252A5783001*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_A4C9499E519D205D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_08BBACE844405300()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_08BBACE844405300_OFFSET))(this);
	}

	::System::Void Method_2_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_E69AA2E64A20143D_OFFSET))(this);
	}

	::System::Void Method_2_D78B51BFDA4B8B32()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_D78B51BFDA4B8B32_OFFSET))(this);
	}

	::System::Void Method_2_96F6E9EA89A38FD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_96F6E9EA89A38FD1_OFFSET))(this);
	}

	::System::Void Method_2_BC46A74DF805F47F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_BC46A74DF805F47F_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Boolean Method_2_75A5B1D9D1BECE41(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_75A5B1D9D1BECE41_OFFSET))(this, a1);
	}

	static ::UnityEngine::Vector3 Method_2_8A4FA7025C239134(::MoleMole::Battle::Entity* a1, ::Class_3_F35B080B137ECC46* a2, ::MoleMole::Config::PatternShape* a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3& a5)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Battle::Entity*, ::Class_3_F35B080B137ECC46*, ::MoleMole::Config::PatternShape*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_8A4FA7025C239134_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_AEBE70633EEF1704(::MoleMole::Battle::Entity* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_AEBE70633EEF1704_OFFSET))(this, a1);
	}

	static ::MoleMole::Battle::Entity* Method_2_8C19339714663113(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::PatternShape* a2)
	{
		return ((::MoleMole::Battle::Entity*(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::PatternShape*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_8C19339714663113_OFFSET))(a1, a2);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_B09E78EE7EE4F8FA_1_OFFSET))(this);
	}

	::System::Void Method_2_7619D93B61B6E841(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3, ::Class_2_0F138252A5783001* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::Class_2_0F138252A5783001*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_7619D93B61B6E841_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_5FB0DC4E8DAA3EC5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_5FB0DC4E8DAA3EC5_OFFSET))(this, a1);
	}

	::System::Void Method_2_26DB7B943FB654E0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_26DB7B943FB654E0_OFFSET))(this, a1);
	}

	::System::Void Method_2_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_ACE888BF6F5BC5FD_OFFSET))(this);
	}

	::System::Single Method_2_ACA02A72FF6E91EF(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_ACA02A72FF6E91EF_OFFSET))(this, a1);
	}

	::System::Void Method_2_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_8CA88D55ECEFAD59_OFFSET))(this);
	}

	::System::Void Method_2_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_458DAEAB6170C584_OFFSET))(this);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_2_E158251F3B04F7D9(::MoleMole::Battle::Entity* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_E158251F3B04F7D9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_DAEB67F34AF80609_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_A1A7583D5F36A23C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_A1A7583D5F36A23C_OFFSET))(this, a1);
	}

	::System::Void Method_2_9588AFB27191146D(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_9588AFB27191146D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Boolean Method_2_F1912AAB84F4571A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_F1912AAB84F4571A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_20137FA294E860F3(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_20137FA294E860F3_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1BCE0DA867094A1E(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_1BCE0DA867094A1E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_927ED2366981340D(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_927ED2366981340D_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void Method_2_81D73E9E40EEBAD0(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Config::PatternShape* a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3& a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::PatternShape*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_81D73E9E40EEBAD0_OFFSET))(a1, a2, a3, a4, a5, a6);
	}
};
