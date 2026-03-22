#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A9CCF2F4C9D162AF.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_85B1F6533DDB20EA;
class Class_1_86D95124687A23B0;
class Class_1_C0D373E596B22681;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigCameraScopedFront; }
namespace MoleMole::Config { class ConfigCameraScopedFrontEmotion; }
namespace MoleMole::Config { class PhotoCameraModeOverride; }
namespace MoleMole::Photo { class ScopedFrontCameraControlConfig; }
namespace System { class String; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_23EFCEB999C1D825_OFFSET UNITYSDK_OFFSET(0xB41CFF0)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_376CBBDAF0B05B12_OFFSET UNITYSDK_OFFSET(0xB41A420)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_414BB1FBFACD7919_OFFSET UNITYSDK_OFFSET(0xB41C640)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_479759059E440327_1_OFFSET UNITYSDK_OFFSET(0xB41BB90)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0xB41BC30)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xB41C180)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_63A69CCD16DEECED_OFFSET UNITYSDK_OFFSET(0xB41A240)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_765F20AE50A3938C_OFFSET UNITYSDK_OFFSET(0xB41A5D0)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_7C7377C794E8973C_1_OFFSET UNITYSDK_OFFSET(0xB41C070)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_7C7377C794E8973C_OFFSET UNITYSDK_OFFSET(0xB41BE90)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_7F20D9555862CF22_OFFSET UNITYSDK_OFFSET(0xB419F80)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_7F29568EA964E563_OFFSET UNITYSDK_OFFSET(0xB41CBD0)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0xB419B50)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_B523270650D0D301_OFFSET UNITYSDK_OFFSET(0xB41CDD0)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_BB566FDB7154E256_OFFSET UNITYSDK_OFFSET(0xB41A640)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_C60CAB37B51A3232_1_OFFSET UNITYSDK_OFFSET(0xB41C790)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_C60CAB37B51A3232_OFFSET UNITYSDK_OFFSET(0xB41CAC0)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB419F00)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB41AF50)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_DCCF63B007FEBD16_1_OFFSET UNITYSDK_OFFSET(0xB41BCD0)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_DCCF63B007FEBD16_OFFSET UNITYSDK_OFFSET(0xB41BDB0)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xB419E20)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xB41A3B0)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_EDACF3D84F32DDEF_1_OFFSET UNITYSDK_OFFSET(0xB41C530)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_EDACF3D84F32DDEF_2_OFFSET UNITYSDK_OFFSET(0xB41BF60)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_EDACF3D84F32DDEF_3_OFFSET UNITYSDK_OFFSET(0xB41CC40)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_EDACF3D84F32DDEF_4_OFFSET UNITYSDK_OFFSET(0xB41C9B0)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_EDACF3D84F32DDEF_5_OFFSET UNITYSDK_OFFSET(0xB41CEE0)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_EDACF3D84F32DDEF_OFFSET UNITYSDK_OFFSET(0xB41C8A0)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_F2DA1806168C2B48_OFFSET UNITYSDK_OFFSET(0xB41AFB0)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0xB41D150)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_FF7B2911BBACA4A9_2_OFFSET UNITYSDK_OFFSET(0xB41D1D0)
#define CLASS_2_0F0FB67B9BFE83E8_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xB41CD50)
#define CLASS_2_0F0FB67B9BFE83E8_ONDRAG_OFFSET UNITYSDK_OFFSET(0xB41C350)
#define CLASS_2_0F0FB67B9BFE83E8__CTOR_OFFSET UNITYSDK_OFFSET(0xB41C100)

inline static constexpr unsigned int Class_2_0F0FB67B9BFE83E8_TypeDefinitionIndex = 42783;

class Class_2_0F0FB67B9BFE83E8 : public ::Class_1_A9CCF2F4C9D162AF
{
public:
	// static const ::System::String* Field_2_2; // 0x0
	::Class_1_86D95124687A23B0* Field_2_1; // 0x20
	::MoleMole::Config::ConfigCameraScopedFront* Field_2_0; // 0x28
	::MoleMole::Photo::ScopedFrontCameraControlConfig* Field_2_4; // 0x30
	::Class_1_C0D373E596B22681* Field_2_3; // 0x38
	::System::Single Field_2_8; // 0x40
	::System::Single Field_2_9; // 0x44
	::UnityEngine::Vector2 Field_2_6; // 0x48
	::UnityEngine::Vector2 Field_2_7; // 0x50
	::System::UInt32 Field_2_5; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_2_7F20D9555862CF22(::Class_1_85B1F6533DDB20EA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_85B1F6533DDB20EA*))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_7F20D9555862CF22_OFFSET))(this, a1);
	}

	::System::Void Method_2_765F20AE50A3938C(::MoleMole::Config::PhotoCameraModeOverride* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PhotoCameraModeOverride*))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_765F20AE50A3938C_OFFSET))(this, a1);
	}

	::System::Void Method_2_BB566FDB7154E256(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_BB566FDB7154E256_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_F2DA1806168C2B48(::MoleMole::InputActionEvent a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_F2DA1806168C2B48_OFFSET))(this, a1);
	}

	::System::Void Method_2_376CBBDAF0B05B12(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_376CBBDAF0B05B12_OFFSET))(this, a1);
	}

	::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_ONDRAG_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_414BB1FBFACD7919(::UnityEngine::EventSystems::PointerEventData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_414BB1FBFACD7919_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DCCF63B007FEBD16(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_DCCF63B007FEBD16_OFFSET))(this, a1);
	}

	::System::Single Method_2_EDACF3D84F32DDEF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_EDACF3D84F32DDEF_OFFSET))(this);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_DCCF63B007FEBD16_1(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_DCCF63B007FEBD16_1_OFFSET))(this, a1);
	}

	::System::Single Method_2_EDACF3D84F32DDEF_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_EDACF3D84F32DDEF_1_OFFSET))(this);
	}

	::System::Single Method_2_EDACF3D84F32DDEF_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_EDACF3D84F32DDEF_2_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_86D95124687A23B0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_86D95124687A23B0*))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_7F29568EA964E563()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_7F29568EA964E563_OFFSET))(this);
	}

	::System::Single Method_2_EDACF3D84F32DDEF_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_EDACF3D84F32DDEF_3_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Single Method_2_EDACF3D84F32DDEF_4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_EDACF3D84F32DDEF_4_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_2_B523270650D0D301(::MoleMole::Config::ConfigCameraScopedFrontEmotion* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraScopedFrontEmotion*))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_B523270650D0D301_OFFSET))(this, a1);
	}

	::System::Void Method_2_479759059E440327_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_479759059E440327_1_OFFSET))(this, a1);
	}

	::System::Single Method_2_EDACF3D84F32DDEF_5()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_EDACF3D84F32DDEF_5_OFFSET))(this);
	}

	::System::Void Method_2_7C7377C794E8973C(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_7C7377C794E8973C_OFFSET))(this, a1);
	}

	::System::Void Method_2_63A69CCD16DEECED(::Foundation::AssetPath a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_63A69CCD16DEECED_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Single, ::System::Single> Method_2_C60CAB37B51A3232()
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_C60CAB37B51A3232_OFFSET))(this);
	}

	::System::Void Method_2_23EFCEB999C1D825(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_23EFCEB999C1D825_OFFSET))(this, a1);
	}

	::System::Single Method_2_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_FF7B2911BBACA4A9_2_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Single, ::System::Single> Method_2_C60CAB37B51A3232_1()
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_C60CAB37B51A3232_1_OFFSET))(this);
	}

	::System::Void Method_2_7C7377C794E8973C_1(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB67B9BFE83E8_METHOD_2_7C7377C794E8973C_1_OFFSET))(this, a1);
	}
};
