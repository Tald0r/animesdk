#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3344BB063BAF0A29_Struct_2_813E40854E4D2E88.h"
#include "unitysdk/Class_2_47BA9561E39BFE8D_Enum_3_62F16D06C86B7AE9.h"
#include "unitysdk/Enum_3_9BDA95366DF1E3E0.h"
#include "unitysdk/Enum_3_ECCA5279390647E2.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/InLevelAvatarDataItem_InLevelAvatarDataType.h"
#include "unitysdk/UnityEngine/RigidbodyConstraints.h"
#include "unitysdk/UnityEngine/RigidbodyInterpolation.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3361C09B71BDB2D5_Class_1_51CA10D8796CFF9F;
class Class_1_EC6BF1DF2ADA817C;
class Class_2_47BA9561E39BFE8D_Class_3_487EE6B302AC50B7_4;
class Class_2_CD42631606067E6B;
class Class_3_4E22895815E0F387;
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class TeamGroupDataItem; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class StageEntry; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_47BA9561E39BFE8D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B9A620)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_00DE10A8D19F10D2_OFFSET UNITYSDK_OFFSET(0x8B9A990)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_01ED1C1F22416698_OFFSET UNITYSDK_OFFSET(0x8B9C510)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_040B376D8D5FBACC_OFFSET UNITYSDK_OFFSET(0x8B9A4A0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_07280B24DFAC0CA9_OFFSET UNITYSDK_OFFSET(0x8B9C6A0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_0CCBED40E4FE805E_OFFSET UNITYSDK_OFFSET(0x8BA1190)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_111E3F406ABDDAA7_OFFSET UNITYSDK_OFFSET(0x8BA42F0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_145CB65E45CEAA43_OFFSET UNITYSDK_OFFSET(0x8BA2060)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x8B9A070)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_189803FFC1D3100D_OFFSET UNITYSDK_OFFSET(0x8B9DD20)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_1A54E3DF1B02B1B9_OFFSET UNITYSDK_OFFSET(0x8B9EBC0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_1A7F9F3B13A09C96_OFFSET UNITYSDK_OFFSET(0x8B9F180)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x8B9E690)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_235D058510899FEE_OFFSET UNITYSDK_OFFSET(0x8B9F020)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_2907A9889E5240BD_OFFSET UNITYSDK_OFFSET(0x8BA3EF0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x8BA31F0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_39C610783335FB8A_OFFSET UNITYSDK_OFFSET(0x8B9ED10)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8BA3460)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_49895916DDD18478_OFFSET UNITYSDK_OFFSET(0x8BA0680)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_49C93AFBD0E29C71_OFFSET UNITYSDK_OFFSET(0x8B9AFA0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x8BA1A60)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x8BA3520)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_533A1AD0BBE60A3D_OFFSET UNITYSDK_OFFSET(0x8BA05D0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_562010E9BAD7A1CF_OFFSET UNITYSDK_OFFSET(0x8BA36A0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_5835DC16FC46989B_OFFSET UNITYSDK_OFFSET(0x8BA1EF0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_5E852A75624F0507_OFFSET UNITYSDK_OFFSET(0x8BA33D0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_7229398F83BBD3D9_OFFSET UNITYSDK_OFFSET(0x8B9B920)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_8037BED5A99279E1_OFFSET UNITYSDK_OFFSET(0x8BA3540)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_81483EC470411B74_OFFSET UNITYSDK_OFFSET(0x8BA1A80)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_81ADF539CEB58030_OFFSET UNITYSDK_OFFSET(0x8BA1E50)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_90FA418D274310BF_OFFSET UNITYSDK_OFFSET(0x8B9CB20)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_96E3159279ADB646_OFFSET UNITYSDK_OFFSET(0x8BA33E0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_96E5F22D97382A7E_OFFSET UNITYSDK_OFFSET(0x8B9BDC0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_992FBE3DE20958FD_OFFSET UNITYSDK_OFFSET(0x8B9C910)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_996800F5017E11C2_OFFSET UNITYSDK_OFFSET(0x8B9DA20)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x8BA1110)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_9F8F6511E8EF1235_OFFSET UNITYSDK_OFFSET(0x8BA39E0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_B86122B0EE4F8679_OFFSET UNITYSDK_OFFSET(0x8B9A420)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_B94ED07A4ECA7458_OFFSET UNITYSDK_OFFSET(0x8B9F5A0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_B9D8FD15D18938A0_1_OFFSET UNITYSDK_OFFSET(0x8BA3530)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_B9D8FD15D18938A0_OFFSET UNITYSDK_OFFSET(0x8BA0610)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_BA77AC20D3473157_OFFSET UNITYSDK_OFFSET(0x8BA0760)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_BFD06FCB5CA19485_OFFSET UNITYSDK_OFFSET(0x8B9BFC0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_C0D23376F9EA2B81_OFFSET UNITYSDK_OFFSET(0x8B9FB20)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x8BA1180)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8BA0620)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_CE0A9F9763D4569D_OFFSET UNITYSDK_OFFSET(0x8BA4160)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0x8BA3A80)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_CF1284BAAEF5280D_OFFSET UNITYSDK_OFFSET(0x8B9E710)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x8BA4000)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_D58ED5725A850C08_OFFSET UNITYSDK_OFFSET(0x8BA3300)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_D5DB67F578B91749_OFFSET UNITYSDK_OFFSET(0x8B9F520)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_D5F9349C0344266B_OFFSET UNITYSDK_OFFSET(0x8BA4020)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_D711938C54EAFD15_OFFSET UNITYSDK_OFFSET(0x8BA0A60)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_DEE01CA787A86C21_OFFSET UNITYSDK_OFFSET(0x8B9D9E0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0x8BA0F90)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0x8B9E460)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x8BA05C0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_EB7A7FABD82F88FB_OFFSET UNITYSDK_OFFSET(0x8BA4370)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_EE6915754C382F3A_OFFSET UNITYSDK_OFFSET(0x8B9E140)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_EFD899C616187CA8_OFFSET UNITYSDK_OFFSET(0x8BA3EB0)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x8B9C690)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_F3BA4758D5EDD291_OFFSET UNITYSDK_OFFSET(0x8B9B720)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x8B9BD20)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_F78C032061CEA1F7_OFFSET UNITYSDK_OFFSET(0x8BA3190)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_FE06A89EDCA5D340_OFFSET UNITYSDK_OFFSET(0x8BA3800)
#define CLASS_2_47BA9561E39BFE8D_METHOD_2_FFA6CD966E42D8F2_OFFSET UNITYSDK_OFFSET(0x8BA32C0)
#define CLASS_2_47BA9561E39BFE8D_ONCREATE_OFFSET UNITYSDK_OFFSET(0x8B99F70)
#define CLASS_2_47BA9561E39BFE8D_UPDATE_OFFSET UNITYSDK_OFFSET(0x8B9A180)
#define CLASS_2_47BA9561E39BFE8D__CTOR_OFFSET UNITYSDK_OFFSET(0x8B99EA0)

inline static constexpr unsigned int Class_2_47BA9561E39BFE8D_TypeDefinitionIndex = 75671;

class Class_2_47BA9561E39BFE8D : public ::Foundation::SingletonDisposable_1<::Class_2_47BA9561E39BFE8D*>
{
public:
	static ::System::Action** StaticGet_Field_2_9()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_47BA9561E39BFE8D_TypeDefinitionIndex)->GetStaticField(0x2AC20);
	}
	static ::System::Action_1<::MoleMole::Battle::Entity*>** StaticGet_Field_2_10()
	{
		return (::System::Action_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_47BA9561E39BFE8D_TypeDefinitionIndex)->GetStaticField(0x2AC28);
	}
	static ::System::Int64* StaticGet_Field_2_22()
	{
		return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(Class_2_47BA9561E39BFE8D_TypeDefinitionIndex)->GetStaticField(0x9790);
	}
	// static const ::System::String* Field_2_26; // 0x0
	::System::Action* Field_2_2; // 0x10
	::System::Action* Field_2_4; // 0x18
	::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>* Field_2_21; // 0x20
	::MoleMole::Battle::Entity* Field_2_11; // 0x28
	::System::Collections::Generic::List_1<::Class_1_EC6BF1DF2ADA817C*>* Field_2_23; // 0x30
	::Class_2_47BA9561E39BFE8D_Class_3_487EE6B302AC50B7_4* Field_2_5; // 0x38
	::System::String* Field_2_18; // 0x40
	::System::Action* Field_2_6; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_17; // 0x50
	::System::Action* Field_2_3; // 0x58
	::Class_2_CD42631606067E6B* Field_2_0; // 0x60
	::System::Collections::Generic::Dictionary_2<::Enum_3_9BDA95366DF1E3E0, ::Class_1_EC6BF1DF2ADA817C*>* Field_2_25; // 0x68
	::MoleMole::Battle::Entity* Field_2_8; // 0x70
	::UnityEngine::GameObject* Field_2_1; // 0x78
	::Class_1_EC6BF1DF2ADA817C* Field_2_24; // 0x80
	::Class_2_47BA9561E39BFE8D_Enum_3_62F16D06C86B7AE9 Field_2_20; // 0x88
	::System::UInt32 Field_2_14; // 0x8C
	::System::Int32 Field_2_7; // 0x90
	::UnityEngine::RigidbodyInterpolation Field_2_29; // 0x94
	::System::Int32 Field_2_27; // 0x98
	::UnityEngine::Vector3 Field_2_12; // 0x9C
	::System::Single Field_2_13; // 0xA8
	::Enum_3_ECCA5279390647E2 Field_2_15; // 0xAC
	::System::UInt32 Field_2_28; // 0xB0
	::System::Boolean Field_2_31; // 0xB4
	::System::Boolean Field_2_19; // 0xB5
	::System::Boolean Field_2_16; // 0xB6
	::UnityEngine::RigidbodyConstraints Field_2_30; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_ONCREATE_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_B86122B0EE4F8679(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_B86122B0EE4F8679_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_00DE10A8D19F10D2(::System::String* a1, ::UnityEngine::Vector3& a2, ::System::Single& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_00DE10A8D19F10D2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_49C93AFBD0E29C71(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Int32 a3, ::Class_1_3361C09B71BDB2D5_Class_1_51CA10D8796CFF9F* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32, ::Class_1_3361C09B71BDB2D5_Class_1_51CA10D8796CFF9F*))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_49C93AFBD0E29C71_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_F3BA4758D5EDD291(::System::Boolean a1, ::Enum_3_9BDA95366DF1E3E0 a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Enum_3_9BDA95366DF1E3E0, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_F3BA4758D5EDD291_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_BFD06FCB5CA19485(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_BFD06FCB5CA19485_OFFSET))(this, a1);
	}

	::System::Void Method_2_01ED1C1F22416698(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_01ED1C1F22416698_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_07280B24DFAC0CA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_07280B24DFAC0CA9_OFFSET))(this);
	}

	::System::Boolean Method_2_992FBE3DE20958FD(::MoleMole::TeamGroupDataItem* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::UInt32 a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TeamGroupDataItem*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_992FBE3DE20958FD_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_2_DEE01CA787A86C21(::System::Action_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Void(*)(::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_DEE01CA787A86C21_OFFSET))(a1);
	}

	::System::Void Method_2_996800F5017E11C2(::Class_3_4E22895815E0F387* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_4E22895815E0F387*))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_996800F5017E11C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_189803FFC1D3100D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_189803FFC1D3100D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_EE6915754C382F3A(::System::String* a1, ::UnityEngine::Vector3& a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_EE6915754C382F3A_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_CF1284BAAEF5280D(::System::Int64 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_CF1284BAAEF5280D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1A54E3DF1B02B1B9(::Class_1_EC6BF1DF2ADA817C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EC6BF1DF2ADA817C*))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_1A54E3DF1B02B1B9_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_B94ED07A4ECA7458(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5, ::UnityEngine::Vector3& a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Single a9)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::UnityEngine::Vector3&, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_B94ED07A4ECA7458_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	static ::System::Action_1<::MoleMole::Battle::Entity*>* Method_2_533A1AD0BBE60A3D()
	{
		return ((::System::Action_1<::MoleMole::Battle::Entity*>*(*)())((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_533A1AD0BBE60A3D_OFFSET))();
	}

	::MoleMole::Battle::Entity* Method_2_B9D8FD15D18938A0()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_B9D8FD15D18938A0_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_49895916DDD18478(::MoleMole::InLevelAvatarDataItem* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_49895916DDD18478_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_D5DB67F578B91749(::Class_2_47BA9561E39BFE8D_Enum_3_62F16D06C86B7AE9 a1, ::Class_2_47BA9561E39BFE8D_Enum_3_62F16D06C86B7AE9 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_47BA9561E39BFE8D_Enum_3_62F16D06C86B7AE9, ::Class_2_47BA9561E39BFE8D_Enum_3_62F16D06C86B7AE9))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_D5DB67F578B91749_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_39C610783335FB8A(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_39C610783335FB8A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_BA77AC20D3473157(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_BA77AC20D3473157_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_9A6DA36CCAE7D188_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_2_0CCBED40E4FE805E(::MoleMole::InLevelAvatarDataItem* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_0CCBED40E4FE805E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::System::Void Method_2_D711938C54EAFD15(::MoleMole::InLevelAvatarDataItem* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_D711938C54EAFD15_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_81483EC470411B74(::Class_1_EC6BF1DF2ADA817C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EC6BF1DF2ADA817C*))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_81483EC470411B74_OFFSET))(this, a1);
	}

	::System::Void Method_2_1A7F9F3B13A09C96(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_1A7F9F3B13A09C96_OFFSET))(this, a1);
	}

	::System::Void Method_2_81ADF539CEB58030(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_81ADF539CEB58030_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5835DC16FC46989B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_5835DC16FC46989B_OFFSET))(this);
	}

	::System::Void Method_2_145CB65E45CEAA43(::MoleMole::InLevelAvatarDataItem_InLevelAvatarDataType a1, ::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>* a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem_InLevelAvatarDataType, ::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_145CB65E45CEAA43_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_90FA418D274310BF(::MoleMole::TeamGroupDataItem* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5, ::System::UInt32 a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TeamGroupDataItem*, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_90FA418D274310BF_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_DFF98536D8B4074F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_DFF98536D8B4074F_OFFSET))(this);
	}

	static ::System::Void Method_2_F730968E2645E14B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_F730968E2645E14B_OFFSET))();
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Boolean Method_2_F78C032061CEA1F7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_F78C032061CEA1F7_OFFSET))(this);
	}

	::System::Void Method_2_96E5F22D97382A7E(::System::Boolean a1, ::System::Int64 a2, ::Enum_3_9BDA95366DF1E3E0 a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int64, ::Enum_3_9BDA95366DF1E3E0, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_96E5F22D97382A7E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_2_FFA6CD966E42D8F2(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_FFA6CD966E42D8F2_OFFSET))(a1);
	}

	::System::Void Method_2_235D058510899FEE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_235D058510899FEE_OFFSET))(this, a1);
	}

	::System::Void Method_2_D58ED5725A850C08(::MoleMole::InLevelAvatarDataItem* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_D58ED5725A850C08_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5E852A75624F0507(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_5E852A75624F0507_OFFSET))(this, a1);
	}

	::System::Void Method_2_96E3159279ADB646(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_96E3159279ADB646_OFFSET))(this, a1);
	}

	::System::Void Method_2_040B376D8D5FBACC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_040B376D8D5FBACC_OFFSET))(this, a1);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_2_B9D8FD15D18938A0_1()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_B9D8FD15D18938A0_1_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_2_8037BED5A99279E1(::System::Boolean a1, ::MoleMole::Config::StageEntry* a2, ::System::Boolean a3)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Boolean, ::MoleMole::Config::StageEntry*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_8037BED5A99279E1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_2_562010E9BAD7A1CF(::System::Boolean a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_562010E9BAD7A1CF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_FE06A89EDCA5D340(::System::Int32 a1, ::System::Boolean a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_FE06A89EDCA5D340_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9F8F6511E8EF1235()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_9F8F6511E8EF1235_OFFSET))(this);
	}

	static ::System::Action* Method_2_EFD899C616187CA8()
	{
		return ((::System::Action*(*)())((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_EFD899C616187CA8_OFFSET))();
	}

	::System::Void Method_2_E21AC6EE08DC160A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_E21AC6EE08DC160A_OFFSET))(this);
	}

	::System::Void Method_2_2907A9889E5240BD(::System::Boolean a1, ::System::Collections::Generic::List_1<::MoleMole::Config::EntityType>* a2, ::Enum_3_9BDA95366DF1E3E0 a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::MoleMole::Config::EntityType>*, ::Enum_3_9BDA95366DF1E3E0, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_2907A9889E5240BD_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_2_C0D23376F9EA2B81(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5, ::UnityEngine::Vector3& a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Single a9)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::UnityEngine::Vector3&, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_C0D23376F9EA2B81_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::Class_2_3344BB063BAF0A29_Struct_2_813E40854E4D2E88 Method_2_D5F9349C0344266B(::System::Int32 a1, ::System::String* a2)
	{
		return ((::Class_2_3344BB063BAF0A29_Struct_2_813E40854E4D2E88(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_D5F9349C0344266B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7229398F83BBD3D9(::System::Boolean a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_7229398F83BBD3D9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_111E3F406ABDDAA7(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_111E3F406ABDDAA7_OFFSET))(this, a1);
	}

	::System::Void Method_2_CE0A9F9763D4569D(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_CE0A9F9763D4569D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_EB7A7FABD82F88FB(::Class_1_EC6BF1DF2ADA817C* a1, ::Class_1_EC6BF1DF2ADA817C* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EC6BF1DF2ADA817C*, ::Class_1_EC6BF1DF2ADA817C*))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_EB7A7FABD82F88FB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_CEBFF096B4C9D46B_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BA9561E39BFE8D_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
