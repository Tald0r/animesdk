#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CharacterAliveState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_F3CFF1AFF7EE7DCD;
class Class_3_7FBB00F3330A4099;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_1_D82AD410EAED7F36_METHOD_1_12E2584290784D11_1_OFFSET UNITYSDK_OFFSET(0x6A27730)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_12E2584290784D11_2_OFFSET UNITYSDK_OFFSET(0x6A28170)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_12E2584290784D11_OFFSET UNITYSDK_OFFSET(0x6A26550)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_19985667F34644E1_OFFSET UNITYSDK_OFFSET(0x6A28B00)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_1FA5C770C95CB253_OFFSET UNITYSDK_OFFSET(0x6A268F0)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_28F18D141513805A_OFFSET UNITYSDK_OFFSET(0x6A28EF0)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_2D29F6E4053CB679_OFFSET UNITYSDK_OFFSET(0x6A288A0)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_2E21A20CB250B65E_OFFSET UNITYSDK_OFFSET(0x6A277E0)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_3110E4E8F534D28F_1_OFFSET UNITYSDK_OFFSET(0x6A27530)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_3110E4E8F534D28F_2_OFFSET UNITYSDK_OFFSET(0x6A28E40)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_3110E4E8F534D28F_OFFSET UNITYSDK_OFFSET(0x6A26640)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_31EBC8B8FDA7DFF1_OFFSET UNITYSDK_OFFSET(0x6A28440)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_36879C007330AF1F_OFFSET UNITYSDK_OFFSET(0x6A266F0)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_47CDDACA9A031BCE_OFFSET UNITYSDK_OFFSET(0x6A28BA0)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_5189971FE48B344A_OFFSET UNITYSDK_OFFSET(0x6A28580)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_54213C7C3E6E639A_OFFSET UNITYSDK_OFFSET(0x6A26C70)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_5461E83839E8B020_OFFSET UNITYSDK_OFFSET(0x6A28810)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_567396ED774DEDD9_OFFSET UNITYSDK_OFFSET(0x6A272F0)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_5F093B9BC9219DC1_OFFSET UNITYSDK_OFFSET(0x6A27C40)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_74BB213AE3FE2084_OFFSET UNITYSDK_OFFSET(0x6A26AD0)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_757935B8717A57B7_OFFSET UNITYSDK_OFFSET(0x6A28F80)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_8D061D1DEE26B9DA_OFFSET UNITYSDK_OFFSET(0x6A27890)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_91028EF447CF38AB_OFFSET UNITYSDK_OFFSET(0x6A28760)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_977DA3BFF3EF97EA_OFFSET UNITYSDK_OFFSET(0x6A286A0)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_A15BC7F59DE3E286_OFFSET UNITYSDK_OFFSET(0x6A27CC0)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_A3DE4757D104E703_OFFSET UNITYSDK_OFFSET(0x6A26F20)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_B2BB1576EDCDCBA6_OFFSET UNITYSDK_OFFSET(0x6A27AD0)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_BEB6DE5CAC3D0800_1_OFFSET UNITYSDK_OFFSET(0x6A28A60)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_BEB6DE5CAC3D0800_OFFSET UNITYSDK_OFFSET(0x6A26E80)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_C6EDB6BFBB65BE58_OFFSET UNITYSDK_OFFSET(0x6A28290)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_CCF7ABC7CDE47B53_1_OFFSET UNITYSDK_OFFSET(0x6A26830)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_CCF7ABC7CDE47B53_OFFSET UNITYSDK_OFFSET(0x6A270A0)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_CF347C8679BFB90C_OFFSET UNITYSDK_OFFSET(0x6A275E0)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_D0D019D514CC91A5_OFFSET UNITYSDK_OFFSET(0x6A14160)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_E52A85E9F69A491B_OFFSET UNITYSDK_OFFSET(0x6A27680)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_E7A98C06FE01AD9C_OFFSET UNITYSDK_OFFSET(0x6A284C0)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_EBE0B1B3E906EAF6_1_OFFSET UNITYSDK_OFFSET(0x6A27260)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_EBE0B1B3E906EAF6_OFFSET UNITYSDK_OFFSET(0x6A267A0)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_EF0038944C44D5BE_1_OFFSET UNITYSDK_OFFSET(0x6A27480)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_EF0038944C44D5BE_2_OFFSET UNITYSDK_OFFSET(0x6A27B90)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_EF0038944C44D5BE_OFFSET UNITYSDK_OFFSET(0x6A271B0)
#define CLASS_1_D82AD410EAED7F36_METHOD_1_F7C0C121F7275567_OFFSET UNITYSDK_OFFSET(0x6A29010)

inline static constexpr unsigned int Class_1_D82AD410EAED7F36_TypeDefinitionIndex = 50023;

class Class_1_D82AD410EAED7F36 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_12E2584290784D11(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_12E2584290784D11_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_36879C007330AF1F(::Class_2_F3CFF1AFF7EE7DCD* a1)
	{
		return ((::System::UInt32(*)(::Class_2_F3CFF1AFF7EE7DCD*))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_36879C007330AF1F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_EBE0B1B3E906EAF6(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_EBE0B1B3E906EAF6_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_1FA5C770C95CB253(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_1FA5C770C95CB253_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_74BB213AE3FE2084(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_74BB213AE3FE2084_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_54213C7C3E6E639A(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_54213C7C3E6E639A_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_3110E4E8F534D28F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_3110E4E8F534D28F_OFFSET))(a1);
	}

	static ::System::Nullable_1<::System::Int32> Method_1_BEB6DE5CAC3D0800(::Class_3_7FBB00F3330A4099* a1)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::Class_3_7FBB00F3330A4099*))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_BEB6DE5CAC3D0800_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A3DE4757D104E703(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_A3DE4757D104E703_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_CCF7ABC7CDE47B53(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_CCF7ABC7CDE47B53_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_EF0038944C44D5BE(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::UInt32(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_EF0038944C44D5BE_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_EBE0B1B3E906EAF6_1(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_EBE0B1B3E906EAF6_1_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Quaternion Method_1_567396ED774DEDD9(::MoleMole::Battle::Entity* a1)
	{
		return ((::UnityEngine::Quaternion(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_567396ED774DEDD9_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_EF0038944C44D5BE_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::UInt32(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_EF0038944C44D5BE_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3110E4E8F534D28F_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_3110E4E8F534D28F_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CF347C8679BFB90C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_CF347C8679BFB90C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E52A85E9F69A491B(::Class_2_F3CFF1AFF7EE7DCD* a1)
	{
		return ((::System::Boolean(*)(::Class_2_F3CFF1AFF7EE7DCD*))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_E52A85E9F69A491B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_12E2584290784D11_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_12E2584290784D11_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_2E21A20CB250B65E(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_2E21A20CB250B65E_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_D0D019D514CC91A5(::MoleMole::Battle::Entity* a1)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_D0D019D514CC91A5_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_8D061D1DEE26B9DA(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3& a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_8D061D1DEE26B9DA_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_B2BB1576EDCDCBA6(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_B2BB1576EDCDCBA6_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CCF7ABC7CDE47B53_1(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_CCF7ABC7CDE47B53_1_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_EF0038944C44D5BE_2(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::UInt32(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_EF0038944C44D5BE_2_OFFSET))(a1);
	}

	static ::System::String* Method_1_5F093B9BC9219DC1(::Class_2_F3CFF1AFF7EE7DCD* a1)
	{
		return ((::System::String*(*)(::Class_2_F3CFF1AFF7EE7DCD*))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_5F093B9BC9219DC1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_12E2584290784D11_2(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_12E2584290784D11_2_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C6EDB6BFBB65BE58(::Class_2_F3CFF1AFF7EE7DCD* a1)
	{
		return ((::System::Boolean(*)(::Class_2_F3CFF1AFF7EE7DCD*))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_C6EDB6BFBB65BE58_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_31EBC8B8FDA7DFF1(::Class_2_F3CFF1AFF7EE7DCD* a1, ::System::Boolean a2)
	{
		return ((::System::UInt32(*)(::Class_2_F3CFF1AFF7EE7DCD*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_31EBC8B8FDA7DFF1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_5189971FE48B344A(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_5189971FE48B344A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_977DA3BFF3EF97EA(::MoleMole::Battle::Entity* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_977DA3BFF3EF97EA_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::Config::CharacterAliveState Method_1_91028EF447CF38AB(::MoleMole::Battle::Entity* a1)
	{
		return ((::MoleMole::Config::CharacterAliveState(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_91028EF447CF38AB_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_5461E83839E8B020(::Class_3_7FBB00F3330A4099* a1)
	{
		return ((::System::UInt32(*)(::Class_3_7FBB00F3330A4099*))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_5461E83839E8B020_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_2D29F6E4053CB679(::MoleMole::Battle::Entity* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_2D29F6E4053CB679_OFFSET))(a1, a2);
	}

	static ::System::Nullable_1<::System::Int32> Method_1_BEB6DE5CAC3D0800_1(::Class_3_7FBB00F3330A4099* a1)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::Class_3_7FBB00F3330A4099*))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_BEB6DE5CAC3D0800_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_19985667F34644E1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_19985667F34644E1_OFFSET))(a1);
	}

	static ::System::Void Method_1_47CDDACA9A031BCE(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_47CDDACA9A031BCE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3110E4E8F534D28F_2(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_3110E4E8F534D28F_2_OFFSET))(a1);
	}

	static ::System::String* Method_1_A15BC7F59DE3E286(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::String*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_A15BC7F59DE3E286_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_28F18D141513805A(::Class_3_7FBB00F3330A4099* a1)
	{
		return ((::System::UInt32(*)(::Class_3_7FBB00F3330A4099*))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_28F18D141513805A_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_E7A98C06FE01AD9C(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::UInt32(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_E7A98C06FE01AD9C_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_757935B8717A57B7(::System::Object* a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_757935B8717A57B7_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_F7C0C121F7275567(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D82AD410EAED7F36_METHOD_1_F7C0C121F7275567_OFFSET))(a1);
	}
};
