#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A9CCF2F4C9D162AF.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_4D65A0FCDA8137CB;
class Class_1_73226DA8C2187016;
class Class_1_86D95124687A23B0;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class FirstPersonCameraConfig; }
namespace MoleMole::Config { class PhotoCameraModeOverride; }
namespace MoleMole::Config { class UIConfigPhotoCamera; }
namespace MoleMole::Photo { class ScopedFirstPersonCameraMotionConfig; }
namespace System { class String; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CLASS_2_200451D3DD50D64C_METHOD_2_0D372435D9CAE4BC_1_OFFSET UNITYSDK_OFFSET(0xE84FDE0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0xE851B40)
#define CLASS_2_200451D3DD50D64C_METHOD_2_0FBFC1DEFB737BD0_1_OFFSET UNITYSDK_OFFSET(0xE852D00)
#define CLASS_2_200451D3DD50D64C_METHOD_2_0FBFC1DEFB737BD0_OFFSET UNITYSDK_OFFSET(0xE852840)
#define CLASS_2_200451D3DD50D64C_METHOD_2_414BB1FBFACD7919_OFFSET UNITYSDK_OFFSET(0xE852570)
#define CLASS_2_200451D3DD50D64C_METHOD_2_4B49CDA568F1F7F4_OFFSET UNITYSDK_OFFSET(0xE850840)
#define CLASS_2_200451D3DD50D64C_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xE851ED0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_62C193B7BE96C914_OFFSET UNITYSDK_OFFSET(0xE8506F0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_64CCEC54F9F4C372_OFFSET UNITYSDK_OFFSET(0xE850760)
#define CLASS_2_200451D3DD50D64C_METHOD_2_6BE7DAB5DA40BCFF_OFFSET UNITYSDK_OFFSET(0xE8502E0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_7301533EE4FBBAD2_OFFSET UNITYSDK_OFFSET(0xE851550)
#define CLASS_2_200451D3DD50D64C_METHOD_2_7C7377C794E8973C_1_OFFSET UNITYSDK_OFFSET(0xE851980)
#define CLASS_2_200451D3DD50D64C_METHOD_2_7C7377C794E8973C_OFFSET UNITYSDK_OFFSET(0xE851840)
#define CLASS_2_200451D3DD50D64C_METHOD_2_7DF1DC345886EBDA_OFFSET UNITYSDK_OFFSET(0xE850CC0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_7FDE31EDE47E1969_OFFSET UNITYSDK_OFFSET(0xE8516F0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_82540ED13FE909B0_OFFSET UNITYSDK_OFFSET(0xE8526C0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xE84FB00)
#define CLASS_2_200451D3DD50D64C_METHOD_2_9B8206603CE8CF13_OFFSET UNITYSDK_OFFSET(0xE852740)
#define CLASS_2_200451D3DD50D64C_METHOD_2_A57FA722AB2A8938_OFFSET UNITYSDK_OFFSET(0xE850B00)
#define CLASS_2_200451D3DD50D64C_METHOD_2_BA0CFC6A675C2791_OFFSET UNITYSDK_OFFSET(0xE850A70)
#define CLASS_2_200451D3DD50D64C_METHOD_2_BD9CFCDCFFA614DD_OFFSET UNITYSDK_OFFSET(0xE850680)
#define CLASS_2_200451D3DD50D64C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE850260)
#define CLASS_2_200451D3DD50D64C_METHOD_2_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0xE8524F0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_D64FD9A228A1C4E0_2_OFFSET UNITYSDK_OFFSET(0xE852A50)
#define CLASS_2_200451D3DD50D64C_METHOD_2_D64FD9A228A1C4E0_3_OFFSET UNITYSDK_OFFSET(0xE852B50)
#define CLASS_2_200451D3DD50D64C_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xE8528C0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_E1B1897755057184_OFFSET UNITYSDK_OFFSET(0xE852BE0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xE850170)
#define CLASS_2_200451D3DD50D64C_METHOD_2_E69F3DFB7CDFE412_OFFSET UNITYSDK_OFFSET(0xE850C30)
#define CLASS_2_200451D3DD50D64C_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xE8507D0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_F4DD08A31BA3F883_1_OFFSET UNITYSDK_OFFSET(0xE8520A0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0xE84FC00)
#define CLASS_2_200451D3DD50D64C_METHOD_2_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0xE8529D0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_FF7B2911BBACA4A9_2_OFFSET UNITYSDK_OFFSET(0xE852AD0)
#define CLASS_2_200451D3DD50D64C_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xE852950)
#define CLASS_2_200451D3DD50D64C_ONDRAG_OFFSET UNITYSDK_OFFSET(0xE852290)
#define CLASS_2_200451D3DD50D64C__CTOR_OFFSET UNITYSDK_OFFSET(0xE851AC0)

inline static constexpr unsigned int Class_2_200451D3DD50D64C_TypeDefinitionIndex = 57035;

class Class_2_200451D3DD50D64C : public ::Class_1_A9CCF2F4C9D162AF
{
public:
	// static const ::System::String* Field_2_2; // 0x0
	::Class_1_73226DA8C2187016* Field_2_3; // 0x20
	::Class_1_86D95124687A23B0* Field_2_1; // 0x28
	::MoleMole::Config::UIConfigPhotoCamera* Field_2_0; // 0x30
	::MoleMole::Battle::Entity* Field_2_6; // 0x38
	::MoleMole::Photo::ScopedFirstPersonCameraMotionConfig* Field_2_5; // 0x40
	::MoleMole::Cameras::FirstPersonCameraConfig* Field_2_4; // 0x48
	::System::Boolean Field_2_7; // 0x50
	::System::Single Field_2_10; // 0x54
	::UnityEngine::Vector2 Field_2_8; // 0x58
	::System::Single Field_2_9; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_6BE7DAB5DA40BCFF(::Class_1_4D65A0FCDA8137CB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D65A0FCDA8137CB*))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_6BE7DAB5DA40BCFF_OFFSET))(this, a1);
	}

	::System::Void Method_2_BA0CFC6A675C2791(::MoleMole::Config::PhotoCameraModeOverride* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PhotoCameraModeOverride*))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_BA0CFC6A675C2791_OFFSET))(this, a1);
	}

	::System::Void Method_2_A57FA722AB2A8938(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_A57FA722AB2A8938_OFFSET))(this, a1);
	}

	::System::Void Method_2_E69F3DFB7CDFE412()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_E69F3DFB7CDFE412_OFFSET))(this);
	}

	::System::Boolean Method_2_7DF1DC345886EBDA(::MoleMole::InputActionEvent a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_7DF1DC345886EBDA_OFFSET))(this, a1);
	}

	::System::Void Method_2_4B49CDA568F1F7F4(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_4B49CDA568F1F7F4_OFFSET))(this, a1);
	}

	::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_ONDRAG_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_414BB1FBFACD7919(::UnityEngine::EventSystems::PointerEventData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_414BB1FBFACD7919_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_82540ED13FE909B0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_82540ED13FE909B0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7FDE31EDE47E1969(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_7FDE31EDE47E1969_OFFSET))(this, a1);
	}

	::System::Single Method_2_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_2_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_86D95124687A23B0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_86D95124687A23B0*))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Single Method_2_D64FD9A228A1C4E0_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_D64FD9A228A1C4E0_1_OFFSET))(this);
	}

	::System::Single Method_2_D64FD9A228A1C4E0_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_D64FD9A228A1C4E0_2_OFFSET))(this);
	}

	::System::Void Method_2_BD9CFCDCFFA614DD(::MoleMole::Config::UIConfigPhotoCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::UIConfigPhotoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_BD9CFCDCFFA614DD_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::System::Single, ::System::Single> Method_2_0FBFC1DEFB737BD0()
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_0FBFC1DEFB737BD0_OFFSET))(this);
	}

	::System::Void Method_2_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_0D372435D9CAE4BC_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_FF7B2911BBACA4A9_2_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_64CCEC54F9F4C372(::MoleMole::Photo::ScopedFirstPersonCameraMotionConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Photo::ScopedFirstPersonCameraMotionConfig*))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_64CCEC54F9F4C372_OFFSET))(this, a1);
	}

	::System::Void Method_2_7C7377C794E8973C(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_7C7377C794E8973C_OFFSET))(this, a1);
	}

	::System::Single Method_2_D64FD9A228A1C4E0_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_D64FD9A228A1C4E0_3_OFFSET))(this);
	}

	::System::Void Method_2_F4DD08A31BA3F883_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_F4DD08A31BA3F883_1_OFFSET))(this);
	}

	::System::Void Method_2_9B8206603CE8CF13(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_9B8206603CE8CF13_OFFSET))(this, a1);
	}

	::System::Void Method_2_7C7377C794E8973C_1(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_7C7377C794E8973C_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_7301533EE4FBBAD2(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_7301533EE4FBBAD2_OFFSET))(this, a1);
	}

	::System::Void Method_2_62C193B7BE96C914(::MoleMole::Cameras::FirstPersonCameraConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::FirstPersonCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_62C193B7BE96C914_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::System::Single, ::System::Single> Method_2_0FBFC1DEFB737BD0_1()
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_0FBFC1DEFB737BD0_1_OFFSET))(this);
	}

	::System::Void Method_2_E1B1897755057184(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_E1B1897755057184_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0D372435D9CAE4BC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200451D3DD50D64C_METHOD_2_0D372435D9CAE4BC_1_OFFSET))(this);
	}
};
