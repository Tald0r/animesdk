#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class AnimatorRandomIntConfig; }
namespace MoleMole { class UIAvatarCameraAnimationSetting; }
namespace MoleMole { class UIAvatarCameraSetting; }
namespace MoleMole { class UICameraAnimator; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CLASS_1_CE7E65A4D716F72C_METHOD_1_0717423DDEA0E9A4_OFFSET UNITYSDK_OFFSET(0x10BA36C0)
#define CLASS_1_CE7E65A4D716F72C_METHOD_1_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x10BA45B0)
#define CLASS_1_CE7E65A4D716F72C_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x10BA3F00)
#define CLASS_1_CE7E65A4D716F72C_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x10BA5C20)
#define CLASS_1_CE7E65A4D716F72C_METHOD_1_366BD3C692610EBF_OFFSET UNITYSDK_OFFSET(0x10BA59D0)
#define CLASS_1_CE7E65A4D716F72C_METHOD_1_3B5D4C1326D5130E_OFFSET UNITYSDK_OFFSET(0x10BA3A50)
#define CLASS_1_CE7E65A4D716F72C_METHOD_1_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x10BA4060)
#define CLASS_1_CE7E65A4D716F72C_METHOD_1_7AB9DD428E230713_OFFSET UNITYSDK_OFFSET(0x10BA5650)
#define CLASS_1_CE7E65A4D716F72C_METHOD_1_7D25AEBB6993B499_OFFSET UNITYSDK_OFFSET(0x10BA4DB0)
#define CLASS_1_CE7E65A4D716F72C_METHOD_1_899724505166BB52_OFFSET UNITYSDK_OFFSET(0x10BA50E0)
#define CLASS_1_CE7E65A4D716F72C_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x10BA31D0)
#define CLASS_1_CE7E65A4D716F72C_METHOD_1_9856A192A1A7022A_OFFSET UNITYSDK_OFFSET(0x10BA5DB0)
#define CLASS_1_CE7E65A4D716F72C_METHOD_1_A5DE3ADF3D0115AD_OFFSET UNITYSDK_OFFSET(0x10BA5480)
#define CLASS_1_CE7E65A4D716F72C_METHOD_1_BCB087DFB7399B96_OFFSET UNITYSDK_OFFSET(0x10BA5540)
#define CLASS_1_CE7E65A4D716F72C_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x10BA53F0)
#define CLASS_1_CE7E65A4D716F72C_METHOD_1_EFFC7693432621C2_OFFSET UNITYSDK_OFFSET(0x10BA32E0)
#define CLASS_1_CE7E65A4D716F72C_METHOD_1_FED88183344C2905_OFFSET UNITYSDK_OFFSET(0x10BA3100)
#define CLASS_1_CE7E65A4D716F72C__CTOR_OFFSET UNITYSDK_OFFSET(0x10BA30C0)

inline static constexpr unsigned int Class_1_CE7E65A4D716F72C_TypeDefinitionIndex = 55458;

class Class_1_CE7E65A4D716F72C : public ::System::Object
{
public:
	::MoleMole::AnimatorRandomIntConfig* Field_1_18; // 0x10
	::MoleMole::UIAvatarCameraAnimationSetting* Field_1_16; // 0x18
	::MoleMole::UICameraAnimator* Field_1_20; // 0x20
	::MoleMole::UIAvatarCameraSetting* Field_1_15; // 0x28
	::UnityEngine::Transform* Field_1_1; // 0x30
	::UnityEngine::Camera* Field_1_13; // 0x38
	::UnityEngine::Transform* Field_1_0; // 0x40
	::System::Int32 Field_1_19; // 0x48
	::UnityEngine::Vector3 Field_1_10; // 0x4C
	::UnityEngine::Vector3 Field_1_2; // 0x58
	::UnityEngine::Vector3 Field_1_7; // 0x64
	::System::Single Field_1_17; // 0x70
	::UnityEngine::Quaternion Field_1_8; // 0x74
	::UnityEngine::Quaternion Field_1_11; // 0x84
	::System::Single Field_1_9; // 0x94
	::System::Boolean Field_1_3; // 0x98
	::System::Boolean Field_1_5; // 0x99
	::System::Boolean Field_1_14; // 0x9A
	::UnityEngine::Vector3 Field_1_6; // 0x9C
	::System::Single Field_1_12; // 0xA8
	::UnityEngine::Vector3 Field_1_4; // 0xAC

	::System::Void _ctor(::UnityEngine::Camera* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_CE7E65A4D716F72C__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FED88183344C2905(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_CE7E65A4D716F72C_METHOD_1_FED88183344C2905_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_1_EFFC7693432621C2(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_CE7E65A4D716F72C_METHOD_1_EFFC7693432621C2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_0717423DDEA0E9A4(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CE7E65A4D716F72C_METHOD_1_0717423DDEA0E9A4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE7E65A4D716F72C_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_62167C28EC14CC63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE7E65A4D716F72C_METHOD_1_62167C28EC14CC63_OFFSET))(this);
	}

	::System::Void Method_1_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE7E65A4D716F72C_METHOD_1_2CBE0B79DD36047E_OFFSET))(this);
	}

	::System::Void Method_1_7D25AEBB6993B499(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CE7E65A4D716F72C_METHOD_1_7D25AEBB6993B499_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_899724505166BB52(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CE7E65A4D716F72C_METHOD_1_899724505166BB52_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CE7E65A4D716F72C_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_1_A5DE3ADF3D0115AD()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE7E65A4D716F72C_METHOD_1_A5DE3ADF3D0115AD_OFFSET))(this);
	}

	::System::Void Method_1_BCB087DFB7399B96(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CE7E65A4D716F72C_METHOD_1_BCB087DFB7399B96_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_1_7AB9DD428E230713()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE7E65A4D716F72C_METHOD_1_7AB9DD428E230713_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE7E65A4D716F72C_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_366BD3C692610EBF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CE7E65A4D716F72C_METHOD_1_366BD3C692610EBF_OFFSET))(this, a1);
	}

	::System::Void Method_1_9856A192A1A7022A(::UnityEngine::Vector3 a1, ::MoleMole::UIAvatarCameraSetting* a2, ::MoleMole::UIAvatarCameraAnimationSetting* a3, ::MoleMole::AnimatorRandomIntConfig* a4, ::System::Int32 a5, ::UnityEngine::Vector3 a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::UIAvatarCameraSetting*, ::MoleMole::UIAvatarCameraAnimationSetting*, ::MoleMole::AnimatorRandomIntConfig*, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_CE7E65A4D716F72C_METHOD_1_9856A192A1A7022A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_3B5D4C1326D5130E(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_CE7E65A4D716F72C_METHOD_1_3B5D4C1326D5130E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE7E65A4D716F72C_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};
