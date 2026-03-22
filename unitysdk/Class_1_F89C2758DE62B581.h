#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/Struct_2_6E1B724B14572104_4.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_912CA5D103261DFB;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Config { class CharacterAimControlConfig; }
namespace MoleMole::Config { class CharacterAimModeConfig; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_1_F89C2758DE62B581_METHOD_1_06618C2A694360FD_OFFSET UNITYSDK_OFFSET(0x6910BB0)
#define CLASS_1_F89C2758DE62B581_METHOD_1_0D80A297A36BD8A2_OFFSET UNITYSDK_OFFSET(0x6912430)
#define CLASS_1_F89C2758DE62B581_METHOD_1_14185594048863EE_OFFSET UNITYSDK_OFFSET(0x6914B20)
#define CLASS_1_F89C2758DE62B581_METHOD_1_193534FFD5DAEE80_OFFSET UNITYSDK_OFFSET(0x6914C30)
#define CLASS_1_F89C2758DE62B581_METHOD_1_233CEE2ABE432C44_OFFSET UNITYSDK_OFFSET(0x6911280)
#define CLASS_1_F89C2758DE62B581_METHOD_1_26E0D35AADD7ED9A_OFFSET UNITYSDK_OFFSET(0x69125E0)
#define CLASS_1_F89C2758DE62B581_METHOD_1_341C1F64D723B884_OFFSET UNITYSDK_OFFSET(0x6912DF0)
#define CLASS_1_F89C2758DE62B581_METHOD_1_4EAB7C2A7753C576_OFFSET UNITYSDK_OFFSET(0x69148B0)
#define CLASS_1_F89C2758DE62B581_METHOD_1_4FA1F3D8D44C3492_OFFSET UNITYSDK_OFFSET(0x6914460)
#define CLASS_1_F89C2758DE62B581_METHOD_1_58084A478B1653C0_OFFSET UNITYSDK_OFFSET(0x69130B0)
#define CLASS_1_F89C2758DE62B581_METHOD_1_729D817C512DA11F_OFFSET UNITYSDK_OFFSET(0x6910B20)
#define CLASS_1_F89C2758DE62B581_METHOD_1_831F27FA14ED0912_OFFSET UNITYSDK_OFFSET(0x6913350)
#define CLASS_1_F89C2758DE62B581_METHOD_1_85B28EC33041B78C_OFFSET UNITYSDK_OFFSET(0x69126B0)
#define CLASS_1_F89C2758DE62B581_METHOD_1_8CA200EBF017B8D9_OFFSET UNITYSDK_OFFSET(0x6912410)
#define CLASS_1_F89C2758DE62B581_METHOD_1_9A2B864345CCC14F_OFFSET UNITYSDK_OFFSET(0x69142F0)
#define CLASS_1_F89C2758DE62B581_METHOD_1_B281FF939CCC24D0_OFFSET UNITYSDK_OFFSET(0x6913240)
#define CLASS_1_F89C2758DE62B581_METHOD_1_CBC7B9863D40BBDC_OFFSET UNITYSDK_OFFSET(0x6910D40)
#define CLASS_1_F89C2758DE62B581_METHOD_1_D7900605B55D8DBE_OFFSET UNITYSDK_OFFSET(0x6911820)
#define CLASS_1_F89C2758DE62B581_METHOD_1_DE274B3DAD50EEB1_OFFSET UNITYSDK_OFFSET(0x6911740)
#define CLASS_1_F89C2758DE62B581_METHOD_1_E56F9C1A57EC61EF_OFFSET UNITYSDK_OFFSET(0x6914120)
#define CLASS_1_F89C2758DE62B581_METHOD_1_FF7EAF6C5AF8FBF2_OFFSET UNITYSDK_OFFSET(0x6913080)

inline static constexpr unsigned int Class_1_F89C2758DE62B581_TypeDefinitionIndex = 53952;

class Class_1_F89C2758DE62B581 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0

	static ::System::Boolean Method_1_729D817C512DA11F(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F89C2758DE62B581_METHOD_1_729D817C512DA11F_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_06618C2A694360FD(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F89C2758DE62B581_METHOD_1_06618C2A694360FD_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector2 Method_1_233CEE2ABE432C44(::Struct_2_6E1B724B14572104_4& a1, ::System::Single a2, ::Enum_3_A019F766F8C74696 a3, ::UnityEngine::Vector2 a4, ::MoleMole::Config::CharacterAimControlConfig* a5)
	{
		return ((::UnityEngine::Vector2(*)(::Struct_2_6E1B724B14572104_4&, ::System::Single, ::Enum_3_A019F766F8C74696, ::UnityEngine::Vector2, ::MoleMole::Config::CharacterAimControlConfig*))((::PBYTE)hIl2Cpp + CLASS_1_F89C2758DE62B581_METHOD_1_233CEE2ABE432C44_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::ValueTuple_2<::System::Single, ::UnityEngine::Quaternion> Method_1_D7900605B55D8DBE(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::MoleMole::Config::CharacterAimModeConfig* a3)
	{
		return ((::System::ValueTuple_2<::System::Single, ::UnityEngine::Quaternion>(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::MoleMole::Config::CharacterAimModeConfig*))((::PBYTE)hIl2Cpp + CLASS_1_F89C2758DE62B581_METHOD_1_D7900605B55D8DBE_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector2 Method_1_26E0D35AADD7ED9A(::Enum_3_A019F766F8C74696 a1, ::MoleMole::Config::CharacterAimControlConfig* a2)
	{
		return ((::UnityEngine::Vector2(*)(::Enum_3_A019F766F8C74696, ::MoleMole::Config::CharacterAimControlConfig*))((::PBYTE)hIl2Cpp + CLASS_1_F89C2758DE62B581_METHOD_1_26E0D35AADD7ED9A_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_8CA200EBF017B8D9(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F89C2758DE62B581_METHOD_1_8CA200EBF017B8D9_OFFSET))(a1);
	}

	static ::UnityEngine::Quaternion Method_1_0D80A297A36BD8A2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F89C2758DE62B581_METHOD_1_0D80A297A36BD8A2_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Quaternion Method_1_85B28EC33041B78C(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F89C2758DE62B581_METHOD_1_85B28EC33041B78C_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Single Method_1_DE274B3DAD50EEB1(::System::Single a1, ::UnityEngine::AnimationCurve* a2)
	{
		return ((::System::Single(*)(::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_F89C2758DE62B581_METHOD_1_DE274B3DAD50EEB1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_341C1F64D723B884(::UnityEngine::Quaternion a1, ::Class_3_912CA5D103261DFB* a2, ::Class_3_F35B080B137ECC46* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::UnityEngine::Quaternion, ::Class_3_912CA5D103261DFB*, ::Class_3_F35B080B137ECC46*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F89C2758DE62B581_METHOD_1_341C1F64D723B884_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector2 Method_1_58084A478B1653C0(::Enum_3_A019F766F8C74696 a1, ::UnityEngine::Vector2 a2, ::MoleMole::Config::CharacterAimControlConfig* a3, ::System::Single a4)
	{
		return ((::UnityEngine::Vector2(*)(::Enum_3_A019F766F8C74696, ::UnityEngine::Vector2, ::MoleMole::Config::CharacterAimControlConfig*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F89C2758DE62B581_METHOD_1_58084A478B1653C0_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector3 Method_1_CBC7B9863D40BBDC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Collider*& a5, ::System::Single a6)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Collider*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F89C2758DE62B581_METHOD_1_CBC7B9863D40BBDC_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_B281FF939CCC24D0(::UnityEngine::Vector2& a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::UnityEngine::Vector2&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F89C2758DE62B581_METHOD_1_B281FF939CCC24D0_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_831F27FA14ED0912(::Class_3_912CA5D103261DFB* a1, ::MoleMole::Config::CharacterAimModeConfig* a2)
	{
		return ((::System::Void(*)(::Class_3_912CA5D103261DFB*, ::MoleMole::Config::CharacterAimModeConfig*))((::PBYTE)hIl2Cpp + CLASS_1_F89C2758DE62B581_METHOD_1_831F27FA14ED0912_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E56F9C1A57EC61EF(::Class_3_912CA5D103261DFB* a1, ::Struct_2_FA5F50563E60AFBA a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_3_912CA5D103261DFB*, ::Struct_2_FA5F50563E60AFBA, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F89C2758DE62B581_METHOD_1_E56F9C1A57EC61EF_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_9A2B864345CCC14F(::Enum_3_A019F766F8C74696 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Single(*)(::Enum_3_A019F766F8C74696, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F89C2758DE62B581_METHOD_1_9A2B864345CCC14F_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_4FA1F3D8D44C3492(::Class_3_912CA5D103261DFB* a1, ::Struct_2_FA5F50563E60AFBA a2)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_912CA5D103261DFB*, ::Struct_2_FA5F50563E60AFBA))((::PBYTE)hIl2Cpp + CLASS_1_F89C2758DE62B581_METHOD_1_4FA1F3D8D44C3492_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4EAB7C2A7753C576(::System::Single a1, ::Class_3_F35B080B137ECC46* a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::System::Single, ::Class_3_F35B080B137ECC46*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F89C2758DE62B581_METHOD_1_4EAB7C2A7753C576_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector2 Method_1_14185594048863EE(::Enum_3_A019F766F8C74696 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::UnityEngine::Vector2(*)(::Enum_3_A019F766F8C74696, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F89C2758DE62B581_METHOD_1_14185594048863EE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_193534FFD5DAEE80(::Class_3_912CA5D103261DFB* a1)
	{
		return ((::System::Void(*)(::Class_3_912CA5D103261DFB*))((::PBYTE)hIl2Cpp + CLASS_1_F89C2758DE62B581_METHOD_1_193534FFD5DAEE80_OFFSET))(a1);
	}

	static ::System::Single Method_1_FF7EAF6C5AF8FBF2(::System::Single a1, ::UnityEngine::AnimationCurve* a2)
	{
		return ((::System::Single(*)(::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_F89C2758DE62B581_METHOD_1_FF7EAF6C5AF8FBF2_OFFSET))(a1, a2);
	}
};
