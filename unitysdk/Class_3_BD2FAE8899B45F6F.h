#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_BD2FAE8899B45F6F_Enum_3_6A7C46D848DB3953.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/ParticleSystem_Particle.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_6124F7AF16B30AB1;
class Class_3_A5AF8EA2F7094EFB;
namespace MoleMole { class MonoEffectPluginFollow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_BD2FAE8899B45F6F_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x9EF5800)
#define CLASS_3_BD2FAE8899B45F6F_METHOD_3_46D78B8894C3D058_OFFSET UNITYSDK_OFFSET(0x9EF56B0)
#define CLASS_3_BD2FAE8899B45F6F_METHOD_3_52FB29FB5E593F19_OFFSET UNITYSDK_OFFSET(0x9EF5C20)
#define CLASS_3_BD2FAE8899B45F6F_METHOD_3_5C8BA5F8E857A2FC_OFFSET UNITYSDK_OFFSET(0x9EF5C30)
#define CLASS_3_BD2FAE8899B45F6F_METHOD_3_6E0B379E2C3609FF_OFFSET UNITYSDK_OFFSET(0x9EF52F0)
#define CLASS_3_BD2FAE8899B45F6F_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x9EF5E70)
#define CLASS_3_BD2FAE8899B45F6F_METHOD_3_B2AE43CACB777B2F_OFFSET UNITYSDK_OFFSET(0x9EF5EF0)
#define CLASS_3_BD2FAE8899B45F6F_METHOD_3_BDD4FF1F21872E6E_OFFSET UNITYSDK_OFFSET(0x9EF5910)
#define CLASS_3_BD2FAE8899B45F6F_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x9EF5E60)
#define CLASS_3_BD2FAE8899B45F6F_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x9EF5DB0)
#define CLASS_3_BD2FAE8899B45F6F_METHOD_3_DFBA32323EBA8DC1_OFFSET UNITYSDK_OFFSET(0x9EF5E50)
#define CLASS_3_BD2FAE8899B45F6F_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x9EF5EE0)
#define CLASS_3_BD2FAE8899B45F6F_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x9EF5ED0)
#define CLASS_3_BD2FAE8899B45F6F_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x9EF51C0)
#define CLASS_3_BD2FAE8899B45F6F__CCTOR_OFFSET UNITYSDK_OFFSET(0x9EF5860)
#define CLASS_3_BD2FAE8899B45F6F__CTOR_OFFSET UNITYSDK_OFFSET(0x9EF5900)

inline static constexpr unsigned int Class_3_BD2FAE8899B45F6F_TypeDefinitionIndex = 72363;

class Class_3_BD2FAE8899B45F6F : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_3_4()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_BD2FAE8899B45F6F_TypeDefinitionIndex)->GetStaticField(0x36F30);
	}
	// static const ::System::Int32 Field_3_13 = 0x66; // 0x0
	::MoleMole::MonoEffectPluginFollow* Field_3_1; // 0x48
	::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::ParticleSystem_Particle>*>* Field_3_9; // 0x50
	::System::Nullable_1<::UnityEngine::RaycastHit> Field_3_5; // 0x58
	::UnityEngine::Quaternion Field_3_7; // 0x90
	::System::Int32 Field_3_0; // 0xA0
	::UnityEngine::Vector3 Field_3_6; // 0xA4
	::System::UInt16 Field_3_2; // 0xB0
	::Class_3_BD2FAE8899B45F6F_Enum_3_6A7C46D848DB3953 Field_3_11; // 0xB4
	::System::Boolean Field_3_10; // 0xB8
	::System::Boolean Field_3_3; // 0xB9
	::System::Boolean Field_3_12; // 0xBA
	::UnityEngine::Vector3 Field_3_8; // 0xBC

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_BD2FAE8899B45F6F__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD2FAE8899B45F6F__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD2FAE8899B45F6F_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD2FAE8899B45F6F_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_BDD4FF1F21872E6E(::Class_3_6124F7AF16B30AB1* a1, ::Class_3_A5AF8EA2F7094EFB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_6124F7AF16B30AB1*, ::Class_3_A5AF8EA2F7094EFB*))((::PBYTE)hIl2Cpp + CLASS_3_BD2FAE8899B45F6F_METHOD_3_BDD4FF1F21872E6E_OFFSET))(this, a1, a2);
	}

	::Class_3_BD2FAE8899B45F6F_Enum_3_6A7C46D848DB3953 Method_3_52FB29FB5E593F19()
	{
		return ((::Class_3_BD2FAE8899B45F6F_Enum_3_6A7C46D848DB3953(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD2FAE8899B45F6F_METHOD_3_52FB29FB5E593F19_OFFSET))(this);
	}

	::System::Void Method_3_46D78B8894C3D058(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_BD2FAE8899B45F6F_METHOD_3_46D78B8894C3D058_OFFSET))(this, a1);
	}

	static ::Class_3_BD2FAE8899B45F6F* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_BD2FAE8899B45F6F*(*)())((::PBYTE)hIl2Cpp + CLASS_3_BD2FAE8899B45F6F_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::MoleMole::MonoEffectPluginFollow* Method_3_DFBA32323EBA8DC1()
	{
		return ((::MoleMole::MonoEffectPluginFollow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD2FAE8899B45F6F_METHOD_3_DFBA32323EBA8DC1_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_BD2FAE8899B45F6F_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD2FAE8899B45F6F_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_6E0B379E2C3609FF(::MoleMole::MonoEffectPluginFollow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginFollow*))((::PBYTE)hIl2Cpp + CLASS_3_BD2FAE8899B45F6F_METHOD_3_6E0B379E2C3609FF_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD2FAE8899B45F6F_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_5C8BA5F8E857A2FC(::System::UInt16 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_BD2FAE8899B45F6F_METHOD_3_5C8BA5F8E857A2FC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD2FAE8899B45F6F_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_3_B2AE43CACB777B2F(::Class_3_BD2FAE8899B45F6F_Enum_3_6A7C46D848DB3953 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_BD2FAE8899B45F6F_Enum_3_6A7C46D848DB3953))((::PBYTE)hIl2Cpp + CLASS_3_BD2FAE8899B45F6F_METHOD_3_B2AE43CACB777B2F_OFFSET))(this, a1);
	}
};
