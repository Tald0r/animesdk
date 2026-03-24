#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_CD3FBE690F475501;
class Class_3_6124F7AF16B30AB1;
class Class_3_A5AF8EA2F7094EFB;
class Class_3_EF807F379AD65D33;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_3_4104D55F3637796D_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x727AF40)
#define CLASS_3_4104D55F3637796D_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x727B3D0)
#define CLASS_3_4104D55F3637796D_METHOD_3_1E87171074AA7CDF_OFFSET UNITYSDK_OFFSET(0x727B7B0)
#define CLASS_3_4104D55F3637796D_METHOD_3_34AC2D7F6935D40D_OFFSET UNITYSDK_OFFSET(0x727D420)
#define CLASS_3_4104D55F3637796D_METHOD_3_3F404C178E91C9D3_OFFSET UNITYSDK_OFFSET(0x727CF90)
#define CLASS_3_4104D55F3637796D_METHOD_3_58A45FC75AABC3B5_OFFSET UNITYSDK_OFFSET(0x727BBE0)
#define CLASS_3_4104D55F3637796D_METHOD_3_66EFAE5CEB275B3A_OFFSET UNITYSDK_OFFSET(0x727CB20)
#define CLASS_3_4104D55F3637796D_METHOD_3_9730B29A129ACD76_OFFSET UNITYSDK_OFFSET(0x727DE20)
#define CLASS_3_4104D55F3637796D_METHOD_3_A9A413FBB9CD3CC7_OFFSET UNITYSDK_OFFSET(0x727E620)
#define CLASS_3_4104D55F3637796D_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x727DDB0)
#define CLASS_3_4104D55F3637796D_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x727E5C0)
#define CLASS_3_4104D55F3637796D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x727E560)
#define CLASS_3_4104D55F3637796D_METHOD_3_E34CD12B7397C94F_OFFSET UNITYSDK_OFFSET(0x727E390)
#define CLASS_3_4104D55F3637796D_METHOD_3_EC9083BAABC2F3BA_OFFSET UNITYSDK_OFFSET(0x727C400)
#define CLASS_3_4104D55F3637796D_METHOD_3_F456FE896DA426A5_OFFSET UNITYSDK_OFFSET(0x727B570)
#define CLASS_3_4104D55F3637796D_UPDATE_OFFSET UNITYSDK_OFFSET(0x727B250)
#define CLASS_3_4104D55F3637796D__CTOR_OFFSET UNITYSDK_OFFSET(0x727B550)

inline static constexpr unsigned int Class_3_4104D55F3637796D_TypeDefinitionIndex = 45922;

class Class_3_4104D55F3637796D : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_F456FE896DA426A5(::Class_3_EF807F379AD65D33* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_EF807F379AD65D33*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_METHOD_3_F456FE896DA426A5_OFFSET))(a1, a2);
	}

	::System::Void Method_3_1E87171074AA7CDF(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_METHOD_3_1E87171074AA7CDF_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_EC9083BAABC2F3BA(::Class_3_EF807F379AD65D33* a1, ::Class_3_A5AF8EA2F7094EFB* a2, ::Class_3_6124F7AF16B30AB1* a3, ::Class_1_CD3FBE690F475501* a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::Class_3_EF807F379AD65D33*, ::Class_3_A5AF8EA2F7094EFB*, ::Class_3_6124F7AF16B30AB1*, ::Class_1_CD3FBE690F475501*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_METHOD_3_EC9083BAABC2F3BA_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_3_58A45FC75AABC3B5(::Class_3_EF807F379AD65D33* a1, ::Class_3_A5AF8EA2F7094EFB* a2, ::Class_3_6124F7AF16B30AB1* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_3_EF807F379AD65D33*, ::Class_3_A5AF8EA2F7094EFB*, ::Class_3_6124F7AF16B30AB1*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_METHOD_3_58A45FC75AABC3B5_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_34AC2D7F6935D40D(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_METHOD_3_34AC2D7F6935D40D_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::UnityEngine::Vector3 Method_3_9730B29A129ACD76(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::UnityEngine::Transform*& a3)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::System::String*>*, ::UnityEngine::Transform*&))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_METHOD_3_9730B29A129ACD76_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_3_3F404C178E91C9D3(::Class_3_EF807F379AD65D33* a1, ::Class_3_A5AF8EA2F7094EFB* a2, ::Class_3_6124F7AF16B30AB1* a3, ::System::Int32 a4, ::Class_1_CD3FBE690F475501* a5, ::System::Boolean a6)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_EF807F379AD65D33*, ::Class_3_A5AF8EA2F7094EFB*, ::Class_3_6124F7AF16B30AB1*, ::System::Int32, ::Class_1_CD3FBE690F475501*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_METHOD_3_3F404C178E91C9D3_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_3_66EFAE5CEB275B3A(::Class_3_EF807F379AD65D33* a1, ::Class_3_A5AF8EA2F7094EFB* a2, ::Class_3_6124F7AF16B30AB1* a3, ::System::Int32 a4, ::Class_1_CD3FBE690F475501* a5, ::System::Boolean a6)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_EF807F379AD65D33*, ::Class_3_A5AF8EA2F7094EFB*, ::Class_3_6124F7AF16B30AB1*, ::System::Int32, ::Class_1_CD3FBE690F475501*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_METHOD_3_66EFAE5CEB275B3A_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_3_E34CD12B7397C94F(::Class_3_6124F7AF16B30AB1* a1, ::Class_3_A5AF8EA2F7094EFB* a2, ::Class_3_EF807F379AD65D33* a3)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_6124F7AF16B30AB1*, ::Class_3_A5AF8EA2F7094EFB*, ::Class_3_EF807F379AD65D33*))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_METHOD_3_E34CD12B7397C94F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_A9A413FBB9CD3CC7(::Class_3_EF807F379AD65D33* a1, ::Class_3_A5AF8EA2F7094EFB* a2, ::Class_3_6124F7AF16B30AB1* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_3_EF807F379AD65D33*, ::Class_3_A5AF8EA2F7094EFB*, ::Class_3_6124F7AF16B30AB1*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_METHOD_3_A9A413FBB9CD3CC7_OFFSET))(a1, a2, a3, a4);
	}
};
