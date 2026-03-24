#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_F35B080B137ECC46;
namespace MoleMole { class CharacterScriptConfig; }
namespace MoleMole { class NewConfigUICommon; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_1_CD645390F06D6119_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x835A310)
#define CLASS_1_CD645390F06D6119_METHOD_1_241A7F9D21B7A5F7_OFFSET UNITYSDK_OFFSET(0x8359C50)
#define CLASS_1_CD645390F06D6119_METHOD_1_3733A515691DF08C_OFFSET UNITYSDK_OFFSET(0x8357C20)
#define CLASS_1_CD645390F06D6119_METHOD_1_3AA08A46D65577CF_OFFSET UNITYSDK_OFFSET(0x835B820)
#define CLASS_1_CD645390F06D6119_METHOD_1_4BA54187D0BF7DCA_OFFSET UNITYSDK_OFFSET(0x835AE40)
#define CLASS_1_CD645390F06D6119_METHOD_1_4D71BCFB74C16073_OFFSET UNITYSDK_OFFSET(0x8359C40)
#define CLASS_1_CD645390F06D6119_METHOD_1_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x835B900)
#define CLASS_1_CD645390F06D6119_METHOD_1_52B8AD0F2285229D_OFFSET UNITYSDK_OFFSET(0x8358540)
#define CLASS_1_CD645390F06D6119_METHOD_1_5A67402E3F183376_OFFSET UNITYSDK_OFFSET(0x8356130)
#define CLASS_1_CD645390F06D6119_METHOD_1_5EDEAC7103732C9E_OFFSET UNITYSDK_OFFSET(0x835B910)
#define CLASS_1_CD645390F06D6119_METHOD_1_627557CE4CD0ABB4_OFFSET UNITYSDK_OFFSET(0x8356CA0)
#define CLASS_1_CD645390F06D6119_METHOD_1_69214A0D4ECEB0F5_OFFSET UNITYSDK_OFFSET(0x835A510)
#define CLASS_1_CD645390F06D6119_METHOD_1_73300E6A50337857_OFFSET UNITYSDK_OFFSET(0x83594D0)
#define CLASS_1_CD645390F06D6119_METHOD_1_795468E1CBB39124_OFFSET UNITYSDK_OFFSET(0x8359000)
#define CLASS_1_CD645390F06D6119_METHOD_1_7E4A9DA203792B94_OFFSET UNITYSDK_OFFSET(0x8356F20)
#define CLASS_1_CD645390F06D6119_METHOD_1_80030D5C0D9C43E3_1_OFFSET UNITYSDK_OFFSET(0x8359900)
#define CLASS_1_CD645390F06D6119_METHOD_1_80030D5C0D9C43E3_OFFSET UNITYSDK_OFFSET(0x8356D70)
#define CLASS_1_CD645390F06D6119_METHOD_1_82B2BADB6C94DC6B_OFFSET UNITYSDK_OFFSET(0x8357B20)
#define CLASS_1_CD645390F06D6119_METHOD_1_9A16FD746CDCFE2D_OFFSET UNITYSDK_OFFSET(0x8356D60)
#define CLASS_1_CD645390F06D6119_METHOD_1_A74F08156DED5922_OFFSET UNITYSDK_OFFSET(0x8356760)
#define CLASS_1_CD645390F06D6119_METHOD_1_B0C9E67798485BC6_OFFSET UNITYSDK_OFFSET(0x8357930)
#define CLASS_1_CD645390F06D6119_METHOD_1_B7FA76902C9F370C_OFFSET UNITYSDK_OFFSET(0x8355CD0)
#define CLASS_1_CD645390F06D6119_METHOD_1_B8DDB8B6AA8ACDA5_OFFSET UNITYSDK_OFFSET(0x8356630)
#define CLASS_1_CD645390F06D6119_METHOD_1_C5F9823D509784CD_OFFSET UNITYSDK_OFFSET(0x8359AB0)
#define CLASS_1_CD645390F06D6119_METHOD_1_C7F5693B519BCA74_OFFSET UNITYSDK_OFFSET(0x8356B10)
#define CLASS_1_CD645390F06D6119_METHOD_1_CB92080F4FF6FC50_OFFSET UNITYSDK_OFFSET(0x8356290)
#define CLASS_1_CD645390F06D6119_METHOD_1_D15708DF941619D4_OFFSET UNITYSDK_OFFSET(0x835A190)
#define CLASS_1_CD645390F06D6119_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x835A4F0)
#define CLASS_1_CD645390F06D6119_METHOD_1_DAC9219D09D338F5_OFFSET UNITYSDK_OFFSET(0x835A380)
#define CLASS_1_CD645390F06D6119_METHOD_1_E6EB4A8E34962400_OFFSET UNITYSDK_OFFSET(0x835B590)
#define CLASS_1_CD645390F06D6119_METHOD_1_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0x8359BB0)
#define CLASS_1_CD645390F06D6119_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x83578A0)
#define CLASS_1_CD645390F06D6119__CTOR_OFFSET UNITYSDK_OFFSET(0x8355CB0)

inline static constexpr unsigned int Class_1_CD645390F06D6119_TypeDefinitionIndex = 69911;

class Class_1_CD645390F06D6119 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_5; // 0x10
	::MoleMole::CharacterScriptConfig* Field_1_0; // 0x18
	::System::String* Field_1_4; // 0x20
	::UnityEngine::Transform* Field_1_7; // 0x28
	::Class_3_F35B080B137ECC46* Field_1_2; // 0x30
	::MoleMole::NewConfigUICommon* Field_1_3; // 0x38
	::UnityEngine::Transform* Field_1_6; // 0x40
	::System::Single Field_1_10; // 0x48
	::System::Single Field_1_14; // 0x4C
	::System::Nullable_1<::System::Single> Field_1_11; // 0x50
	::System::Boolean Field_1_8; // 0x58
	::System::Single Field_1_9; // 0x5C
	::System::Single Field_1_13; // 0x60
	::System::Nullable_1<::System::Single> Field_1_12; // 0x64
	::System::UInt32 Field_1_1; // 0x6C
	::UnityEngine::Vector3 Field_1_15; // 0x70

	::System::Void _ctor(::MoleMole::Battle::Entity* a1, ::UnityEngine::GameObject* a2, ::System::Single a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Transform* Method_1_5A67402E3F183376()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_5A67402E3F183376_OFFSET))(this);
	}

	::System::Void Method_1_CB92080F4FF6FC50(::Struct_2_FA5F50563E60AFBA a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_CB92080F4FF6FC50_OFFSET))(this, a1);
	}

	::UnityEngine::Bounds Method_1_A74F08156DED5922()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_A74F08156DED5922_OFFSET))(this);
	}

	::System::Boolean Method_1_C7F5693B519BCA74(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector2& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_C7F5693B519BCA74_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_1_627557CE4CD0ABB4(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_627557CE4CD0ABB4_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::CharacterScriptConfig* Method_1_9A16FD746CDCFE2D()
	{
		return ((::MoleMole::CharacterScriptConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_9A16FD746CDCFE2D_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* Method_1_80030D5C0D9C43E3()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_80030D5C0D9C43E3_OFFSET))(this);
	}

	::System::Single Method_1_7E4A9DA203792B94()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_7E4A9DA203792B94_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_B0C9E67798485BC6()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_B0C9E67798485BC6_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Boolean, ::System::Boolean> Method_1_3733A515691DF08C(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Vector2& a3)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::System::Boolean>(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_3733A515691DF08C_OFFSET))(this, a1, a2, a3);
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::System::Single> Method_1_73300E6A50337857()
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_73300E6A50337857_OFFSET))(this);
	}

	::System::Single Method_1_52B8AD0F2285229D()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_52B8AD0F2285229D_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_4D71BCFB74C16073()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_4D71BCFB74C16073_OFFSET))(this);
	}

	::System::Single Method_1_241A7F9D21B7A5F7(::MoleMole::NewConfigUICommon* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Single a6)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::NewConfigUICommon*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_241A7F9D21B7A5F7_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::UnityEngine::Vector3 Method_1_D15708DF941619D4()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_D15708DF941619D4_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* Method_1_80030D5C0D9C43E3_1()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_80030D5C0D9C43E3_1_OFFSET))(this);
	}

	::System::Single Method_1_DAC9219D09D338F5()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_DAC9219D09D338F5_OFFSET))(this);
	}

	::System::Single Method_1_82B2BADB6C94DC6B(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_82B2BADB6C94DC6B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B8DDB8B6AA8ACDA5(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_B8DDB8B6AA8ACDA5_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Single Method_1_C5F9823D509784CD(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_C5F9823D509784CD_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::System::Boolean, ::System::Boolean> Method_1_69214A0D4ECEB0F5(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Vector2& a3)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::System::Boolean>(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_69214A0D4ECEB0F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_4BA54187D0BF7DCA(::MoleMole::NewConfigUICommon* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::System::Single a7)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::NewConfigUICommon*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_4BA54187D0BF7DCA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_B7FA76902C9F370C(::MoleMole::Battle::Entity* a1, ::UnityEngine::GameObject* a2, ::System::Single a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_B7FA76902C9F370C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_795468E1CBB39124(::UnityEngine::RectTransform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_795468E1CBB39124_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E6EB4A8E34962400(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_E6EB4A8E34962400_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_3AA08A46D65577CF()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_3AA08A46D65577CF_OFFSET))(this);
	}

	::System::Void Method_1_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5EDEAC7103732C9E(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_CD645390F06D6119_METHOD_1_5EDEAC7103732C9E_OFFSET))(this, a1, a2);
	}
};
