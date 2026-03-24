#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/Struct_2_9F85650CFFBE9F44.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_F35B080B137ECC46;
namespace Nap::NapECS { class EcsEntity; }
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_1_84358921ABCB4E84_METHOD_1_50DE06748159125F_OFFSET UNITYSDK_OFFSET(0x83A0580)
#define CLASS_1_84358921ABCB4E84_METHOD_1_6935A862C2B15995_OFFSET UNITYSDK_OFFSET(0x83A03E0)
#define CLASS_1_84358921ABCB4E84_METHOD_1_743407F59D62F9C7_OFFSET UNITYSDK_OFFSET(0x83A00D0)
#define CLASS_1_84358921ABCB4E84_METHOD_1_886CC43F5E8DD0BC_OFFSET UNITYSDK_OFFSET(0x83A0850)
#define CLASS_1_84358921ABCB4E84_METHOD_1_A7F3A60524C0313E_OFFSET UNITYSDK_OFFSET(0x83A0FB0)
#define CLASS_1_84358921ABCB4E84_METHOD_1_D333A662B943AF30_OFFSET UNITYSDK_OFFSET(0x83A0710)
#define CLASS_1_84358921ABCB4E84_METHOD_1_D351CD9A5193BCED_OFFSET UNITYSDK_OFFSET(0x83A0A20)

inline static constexpr unsigned int Class_1_84358921ABCB4E84_TypeDefinitionIndex = 71964;

class Class_1_84358921ABCB4E84 : public ::System::Object
{
public:
	static ::Foundation::Variable_1<::UnityEngine::Vector3> Method_1_743407F59D62F9C7(::Nap::NapECS::EcsEntity* a1, ::System::String* a2)
	{
		return ((::Foundation::Variable_1<::UnityEngine::Vector3>(*)(::Nap::NapECS::EcsEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_84358921ABCB4E84_METHOD_1_743407F59D62F9C7_OFFSET))(a1, a2);
	}

	static ::Struct_2_9F85650CFFBE9F44 Method_1_6935A862C2B15995(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::Struct_2_9F85650CFFBE9F44(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_1_84358921ABCB4E84_METHOD_1_6935A862C2B15995_OFFSET))(a1);
	}

	static ::Foundation::Variable_1<::UnityEngine::Vector3> Method_1_886CC43F5E8DD0BC(::Nap::NapECS::EcsEntity* a1, ::System::String* a2)
	{
		return ((::Foundation::Variable_1<::UnityEngine::Vector3>(*)(::Nap::NapECS::EcsEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_84358921ABCB4E84_METHOD_1_886CC43F5E8DD0BC_OFFSET))(a1, a2);
	}

	static ::Foundation::Variable_1<::UnityEngine::Vector3> Method_1_50DE06748159125F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::Foundation::Variable_1<::UnityEngine::Vector3>(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_1_84358921ABCB4E84_METHOD_1_50DE06748159125F_OFFSET))(a1);
	}

	static ::Struct_2_9F85650CFFBE9F44 Method_1_D351CD9A5193BCED(::UnityEngine::Bounds a1, ::UnityEngine::Transform* a2)
	{
		return ((::Struct_2_9F85650CFFBE9F44(*)(::UnityEngine::Bounds, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_84358921ABCB4E84_METHOD_1_D351CD9A5193BCED_OFFSET))(a1, a2);
	}

	static ::Struct_2_9F85650CFFBE9F44 Method_1_A7F3A60524C0313E(::UnityEngine::Collider* a1)
	{
		return ((::Struct_2_9F85650CFFBE9F44(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_84358921ABCB4E84_METHOD_1_A7F3A60524C0313E_OFFSET))(a1);
	}

	static ::Foundation::Variable_1<::UnityEngine::Vector3> Method_1_D333A662B943AF30(::Nap::NapECS::EcsEntity* a1, ::Class_3_F35B080B137ECC46* a2)
	{
		return ((::Foundation::Variable_1<::UnityEngine::Vector3>(*)(::Nap::NapECS::EcsEntity*, ::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_1_84358921ABCB4E84_METHOD_1_D333A662B943AF30_OFFSET))(a1, a2);
	}
};
