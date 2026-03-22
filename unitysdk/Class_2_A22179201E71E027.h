#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BDCD1259222B5A4A.h"
#include "unitysdk/Class_2_A22179201E71E027_Struct_2_E7B322677315A924.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneHitWallEffect_HitWallEffectCreatedStatus.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneHitWallEffect_RayAxis.h"
#include "unitysdk/MoleMole/Config/DamageDecalData.h"
#include "unitysdk/MoleMole/SuperDebug_LogModule.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_515;
class Class_1_F0DD91CF91C3B169;
class Class_3_6124F7AF16B30AB1;
class Class_3_A5AF8EA2F7094EFB;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Battle { class ScratchConfigObject; }
namespace MoleMole::Config { class HitWallCameraShakeConfig; }
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_2_A22179201E71E027_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xB067F30)
#define CLASS_2_A22179201E71E027_METHOD_2_146E6E50FAF07D8F_OFFSET UNITYSDK_OFFSET(0xB064A40)
#define CLASS_2_A22179201E71E027_METHOD_2_1968CFB403DDD566_OFFSET UNITYSDK_OFFSET(0xB067C10)
#define CLASS_2_A22179201E71E027_METHOD_2_20139550C8206D50_OFFSET UNITYSDK_OFFSET(0xB061EA0)
#define CLASS_2_A22179201E71E027_METHOD_2_295DED65211771F6_OFFSET UNITYSDK_OFFSET(0xB062BC0)
#define CLASS_2_A22179201E71E027_METHOD_2_2A0F641337364AF8_OFFSET UNITYSDK_OFFSET(0xB065EC0)
#define CLASS_2_A22179201E71E027_METHOD_2_2CFCF7CEF4A7CB45_OFFSET UNITYSDK_OFFSET(0xB0674B0)
#define CLASS_2_A22179201E71E027_METHOD_2_41EC3FF6D2A88C47_OFFSET UNITYSDK_OFFSET(0xB066E00)
#define CLASS_2_A22179201E71E027_METHOD_2_4AB9012B5D01108B_OFFSET UNITYSDK_OFFSET(0xB0625F0)
#define CLASS_2_A22179201E71E027_METHOD_2_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0xB067DC0)
#define CLASS_2_A22179201E71E027_METHOD_2_4EF13288EFAF3AF5_OFFSET UNITYSDK_OFFSET(0xB062280)
#define CLASS_2_A22179201E71E027_METHOD_2_53183C7EF76DDD45_OFFSET UNITYSDK_OFFSET(0xB063A20)
#define CLASS_2_A22179201E71E027_METHOD_2_705AD94F036B4204_OFFSET UNITYSDK_OFFSET(0xB0623D0)
#define CLASS_2_A22179201E71E027_METHOD_2_7DB49B5407C8FD68_1_OFFSET UNITYSDK_OFFSET(0xB065260)
#define CLASS_2_A22179201E71E027_METHOD_2_7DB49B5407C8FD68_2_OFFSET UNITYSDK_OFFSET(0xB067DE0)
#define CLASS_2_A22179201E71E027_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xB063330)
#define CLASS_2_A22179201E71E027_METHOD_2_88667086FB91B538_OFFSET UNITYSDK_OFFSET(0xB0630D0)
#define CLASS_2_A22179201E71E027_METHOD_2_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0xB062CB0)
#define CLASS_2_A22179201E71E027_METHOD_2_AE80CBC984AADFD5_1_OFFSET UNITYSDK_OFFSET(0xB065F40)
#define CLASS_2_A22179201E71E027_METHOD_2_AE80CBC984AADFD5_OFFSET UNITYSDK_OFFSET(0xB065530)
#define CLASS_2_A22179201E71E027_METHOD_2_B29205EE7F7B640C_OFFSET UNITYSDK_OFFSET(0xB0640A0)
#define CLASS_2_A22179201E71E027_METHOD_2_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0xB063250)
#define CLASS_2_A22179201E71E027_METHOD_2_C24E7841E1CE0E0C_OFFSET UNITYSDK_OFFSET(0xB065D40)
#define CLASS_2_A22179201E71E027_METHOD_2_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0xB0653B0)
#define CLASS_2_A22179201E71E027_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB068530)
#define CLASS_2_A22179201E71E027_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xB0633F0)
#define CLASS_2_A22179201E71E027_METHOD_2_CC634A5DC90EEA5A_OFFSET UNITYSDK_OFFSET(0xB061A90)
#define CLASS_2_A22179201E71E027_METHOD_2_D2F60562A396C70D_OFFSET UNITYSDK_OFFSET(0xB063580)
#define CLASS_2_A22179201E71E027_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0xB065240)
#define CLASS_2_A22179201E71E027_METHOD_2_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0xB068590)
#define CLASS_2_A22179201E71E027_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0xB062F50)
#define CLASS_2_A22179201E71E027_METHOD_2_E57D6F9393F28D86_OFFSET UNITYSDK_OFFSET(0xB062ED0)
#define CLASS_2_A22179201E71E027_METHOD_2_EC1B7452242AE25F_OFFSET UNITYSDK_OFFSET(0xB062100)
#define CLASS_2_A22179201E71E027_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0xB063560)
#define CLASS_2_A22179201E71E027__CCTOR_OFFSET UNITYSDK_OFFSET(0xB061E60)
#define CLASS_2_A22179201E71E027__CTOR_OFFSET UNITYSDK_OFFSET(0xB061BD0)

inline static constexpr unsigned int Class_2_A22179201E71E027_TypeDefinitionIndex = 53896;

class Class_2_A22179201E71E027 : public ::Class_1_BDCD1259222B5A4A
{
public:
	static ::System::Random** StaticGet_Field_2_30()
	{
		return (::System::Random**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A22179201E71E027_TypeDefinitionIndex)->GetStaticField(0x42DC0);
	}
	static ::System::Single* StaticGet_Field_2_28()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_A22179201E71E027_TypeDefinitionIndex)->GetStaticField(0x10A60);
	}
	static ::MoleMole::SuperDebug_LogModule* StaticGet_Field_2_29()
	{
		return (::MoleMole::SuperDebug_LogModule*)Il2CppClass::FromTypeDefinitionIndex(Class_2_A22179201E71E027_TypeDefinitionIndex)->GetStaticField(0x10A64);
	}
	static ::System::Single* StaticGet_Field_2_27()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_A22179201E71E027_TypeDefinitionIndex)->GetStaticField(0x10A68);
	}
	::MoleMole::Battle::Entity* Field_2_3; // 0x28
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_13; // 0x30
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_2_24; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Collider*>* Field_2_8; // 0x40
	::MoleMole::Battle::ScratchConfigObject* Field_2_1; // 0x48
	::UnityEngine::Transform* Field_2_15; // 0x50
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*>* Field_2_6; // 0x58
	::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>* Field_2_5; // 0x60
	::System::Collections::Generic::List_1<::Class_2_A22179201E71E027_Struct_2_E7B322677315A924>* Field_2_9; // 0x68
	::Class_3_A5AF8EA2F7094EFB* Field_2_4; // 0x70
	::Class_1_F0DD91CF91C3B169* Field_2_0; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_2_7; // 0x80
	::UnityEngine::Transform* Field_2_14; // 0x88
	::UnityEngine::Transform* Field_2_16; // 0x90
	::MoleMole::Config::AnimatorZoneHitWallEffect_RayAxis Field_2_17; // 0x98
	::MoleMole::Config::AnimatorZoneHitWallEffect_HitWallEffectCreatedStatus Field_2_12; // 0x9C
	::UnityEngine::Vector3 Field_2_22; // 0xA0
	::System::Int32 Field_2_20; // 0xAC
	::System::Int32 Field_2_10; // 0xB0
	::System::Boolean Field_2_11; // 0xB4
	::System::Single Field_2_19; // 0xB8
	::UnityEngine::Color Field_2_25; // 0xBC
	::UnityEngine::Vector3 Field_2_23; // 0xCC
	::UnityEngine::Vector3 Field_2_21; // 0xD8
	::MoleMole::Config::DamageDecalData Field_2_2; // 0xE4
	::System::Int32 Field_2_26; // 0x104
	::UnityEngine::Vector3 Field_2_18; // 0x108

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027__CCTOR_OFFSET))();
	}

	::System::Void Method_2_CC634A5DC90EEA5A(::Class_0_16E4307DCC419505_515* a1, ::MoleMole::Config::HitWallCameraShakeConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_515*, ::MoleMole::Config::HitWallCameraShakeConfig*))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_CC634A5DC90EEA5A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_20139550C8206D50()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_20139550C8206D50_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_EC1B7452242AE25F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_EC1B7452242AE25F_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_4EF13288EFAF3AF5(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_4EF13288EFAF3AF5_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_705AD94F036B4204(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_705AD94F036B4204_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_295DED65211771F6(::Class_3_A5AF8EA2F7094EFB* a1, ::Class_3_6124F7AF16B30AB1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A5AF8EA2F7094EFB*, ::Class_3_6124F7AF16B30AB1*))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_295DED65211771F6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E57D6F9393F28D86(::Class_0_16E4307DCC419505_515* a1, ::MoleMole::Config::HitWallCameraShakeConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_515*, ::MoleMole::Config::HitWallCameraShakeConfig*))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_E57D6F9393F28D86_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_4AB9012B5D01108B()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_4AB9012B5D01108B_OFFSET))(this);
	}

	::System::Void Method_2_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_DD784213055292FB_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_C2245EC58D417830_OFFSET))(this);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Int32 Method_2_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Void Method_2_D2F60562A396C70D(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::RaycastHit a4, ::System::Boolean& a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_D2F60562A396C70D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_B29205EE7F7B640C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_B29205EE7F7B640C_OFFSET))(this);
	}

	::System::Void Method_2_146E6E50FAF07D8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_146E6E50FAF07D8F_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Void Method_2_7DB49B5407C8FD68_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_7DB49B5407C8FD68_1_OFFSET))(this);
	}

	::System::Void Method_2_AE80CBC984AADFD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_AE80CBC984AADFD5_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_C24E7841E1CE0E0C()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_C24E7841E1CE0E0C_OFFSET))(this);
	}

	::System::Boolean Method_2_53183C7EF76DDD45(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit a3, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_53183C7EF76DDD45_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_AE80CBC984AADFD5_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_AE80CBC984AADFD5_1_OFFSET))(this);
	}

	::System::Void Method_2_41EC3FF6D2A88C47(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_41EC3FF6D2A88C47_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1968CFB403DDD566(::UnityEngine::RaycastHit& a1, ::UnityEngine::RaycastHit& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit&, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_1968CFB403DDD566_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DB49B5407C8FD68_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_7DB49B5407C8FD68_2_OFFSET))(this);
	}

	::System::Void Method_2_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_2_88667086FB91B538()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_88667086FB91B538_OFFSET))(this);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_2A0F641337364AF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_2A0F641337364AF8_OFFSET))(this);
	}

	::System::Boolean Method_2_2CFCF7CEF4A7CB45(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_2CFCF7CEF4A7CB45_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_2_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_METHOD_2_D7852DE078ACC1F1_OFFSET))(this);
	}
};
