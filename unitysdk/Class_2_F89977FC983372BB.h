#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A9CCF2F4C9D162AF.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/Struct_2_6188FB36C2269853.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_4D65A0FCDA8137CB;
class Class_1_86D95124687A23B0;
class Class_1_9454BFF647B56E9E;
namespace MoleMole::Cameras { class TacticalCombatCameraConfig; }
namespace MoleMole::Config { class ConfigCameraScopedTacticalCombat; }
namespace MoleMole::Config { class PhotoCameraModeOverride; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CLASS_2_F89977FC983372BB_METHOD_2_15E27781A1522662_OFFSET UNITYSDK_OFFSET(0x782A2C0)
#define CLASS_2_F89977FC983372BB_METHOD_2_1BC72208CAFF7D4E_OFFSET UNITYSDK_OFFSET(0x782AFB0)
#define CLASS_2_F89977FC983372BB_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x7829020)
#define CLASS_2_F89977FC983372BB_METHOD_2_2A829551B42C81EF_OFFSET UNITYSDK_OFFSET(0x782A650)
#define CLASS_2_F89977FC983372BB_METHOD_2_2E2DC98B50F3CCB1_OFFSET UNITYSDK_OFFSET(0x782A740)
#define CLASS_2_F89977FC983372BB_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x7828B70)
#define CLASS_2_F89977FC983372BB_METHOD_2_30E89B400FB8C9D5_OFFSET UNITYSDK_OFFSET(0x7829D10)
#define CLASS_2_F89977FC983372BB_METHOD_2_432E25D47DEF40E8_OFFSET UNITYSDK_OFFSET(0x78295D0)
#define CLASS_2_F89977FC983372BB_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x7828760)
#define CLASS_2_F89977FC983372BB_METHOD_2_4BD9E95D1AEEBF9B_OFFSET UNITYSDK_OFFSET(0x7828960)
#define CLASS_2_F89977FC983372BB_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x782B0A0)
#define CLASS_2_F89977FC983372BB_METHOD_2_551D1813B33CFC79_OFFSET UNITYSDK_OFFSET(0x782B7B0)
#define CLASS_2_F89977FC983372BB_METHOD_2_63A69CCD16DEECED_OFFSET UNITYSDK_OFFSET(0x7828C60)
#define CLASS_2_F89977FC983372BB_METHOD_2_65BB8F0F1E258993_OFFSET UNITYSDK_OFFSET(0x782B380)
#define CLASS_2_F89977FC983372BB_METHOD_2_765F20AE50A3938C_OFFSET UNITYSDK_OFFSET(0x7828FB0)
#define CLASS_2_F89977FC983372BB_METHOD_2_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0x7828E40)
#define CLASS_2_F89977FC983372BB_METHOD_2_AB77F47AC22558FB_OFFSET UNITYSDK_OFFSET(0x782A7F0)
#define CLASS_2_F89977FC983372BB_METHOD_2_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x7829090)
#define CLASS_2_F89977FC983372BB_METHOD_2_C7AB8A576F610C37_OFFSET UNITYSDK_OFFSET(0x7829940)
#define CLASS_2_F89977FC983372BB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x782AD40)
#define CLASS_2_F89977FC983372BB_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x782ABE0)
#define CLASS_2_F89977FC983372BB_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x7828800)
#define CLASS_2_F89977FC983372BB_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x7828DD0)
#define CLASS_2_F89977FC983372BB_METHOD_2_EDACF3D84F32DDEF_1_OFFSET UNITYSDK_OFFSET(0x782AAD0)
#define CLASS_2_F89977FC983372BB_METHOD_2_EDACF3D84F32DDEF_2_OFFSET UNITYSDK_OFFSET(0x782AE20)
#define CLASS_2_F89977FC983372BB_METHOD_2_EDACF3D84F32DDEF_3_OFFSET UNITYSDK_OFFSET(0x782A8B0)
#define CLASS_2_F89977FC983372BB_METHOD_2_EDACF3D84F32DDEF_4_OFFSET UNITYSDK_OFFSET(0x782B270)
#define CLASS_2_F89977FC983372BB_METHOD_2_EDACF3D84F32DDEF_5_OFFSET UNITYSDK_OFFSET(0x782B5A0)
#define CLASS_2_F89977FC983372BB_METHOD_2_EDACF3D84F32DDEF_OFFSET UNITYSDK_OFFSET(0x782A9C0)
#define CLASS_2_F89977FC983372BB_METHOD_2_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0x782ADA0)
#define CLASS_2_F89977FC983372BB_METHOD_2_FF7B2911BBACA4A9_2_OFFSET UNITYSDK_OFFSET(0x782AF30)
#define CLASS_2_F89977FC983372BB_METHOD_2_FF7B2911BBACA4A9_3_OFFSET UNITYSDK_OFFSET(0x782B6B0)
#define CLASS_2_F89977FC983372BB_METHOD_2_FF7B2911BBACA4A9_4_OFFSET UNITYSDK_OFFSET(0x782B730)
#define CLASS_2_F89977FC983372BB_METHOD_2_FF7B2911BBACA4A9_5_OFFSET UNITYSDK_OFFSET(0x782BB00)
#define CLASS_2_F89977FC983372BB_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x782ACD0)
#define CLASS_2_F89977FC983372BB_ONDRAG_OFFSET UNITYSDK_OFFSET(0x782A6D0)
#define CLASS_2_F89977FC983372BB__CTOR_OFFSET UNITYSDK_OFFSET(0x782A7C0)

inline static constexpr unsigned int Class_2_F89977FC983372BB_TypeDefinitionIndex = 80639;

class Class_2_F89977FC983372BB : public ::Class_1_A9CCF2F4C9D162AF
{
public:
	::Class_1_86D95124687A23B0* Field_2_4; // 0x20
	::MoleMole::Config::ConfigCameraScopedTacticalCombat* Field_2_11; // 0x28
	::Class_1_9454BFF647B56E9E* Field_2_13; // 0x30
	::MoleMole::Cameras::TacticalCombatCameraConfig* Field_2_12; // 0x38
	::System::Boolean Field_2_2; // 0x40
	::System::Nullable_1<::System::Single> Field_2_10; // 0x44
	::UnityEngine::Vector2 Field_2_1; // 0x4C
	::System::Nullable_1<::System::Single> Field_2_8; // 0x54
	::System::Nullable_1<::UnityEngine::Vector2> Field_2_16; // 0x5C
	::System::Nullable_1<::System::Single> Field_2_15; // 0x68
	::System::Nullable_1<::System::Single> Field_2_14; // 0x70
	::Enum_3_A019F766F8C74696 Field_2_3; // 0x78
	::System::Nullable_1<::System::Single> Field_2_5; // 0x7C
	::System::Nullable_1<::System::Single> Field_2_7; // 0x84
	::UnityEngine::Vector2 Field_2_0; // 0x8C
	::System::Nullable_1<::System::Single> Field_2_6; // 0x94
	::System::Nullable_1<::System::Single> Field_2_9; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_4BD9E95D1AEEBF9B(::Class_1_4D65A0FCDA8137CB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D65A0FCDA8137CB*))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_4BD9E95D1AEEBF9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_765F20AE50A3938C(::MoleMole::Config::PhotoCameraModeOverride* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PhotoCameraModeOverride*))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_765F20AE50A3938C_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_AE0B725AB77F7E6F_OFFSET))(this);
	}

	::System::Boolean Method_2_432E25D47DEF40E8(::MoleMole::InputActionEvent a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_432E25D47DEF40E8_OFFSET))(this, a1);
	}

	::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_ONDRAG_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2E2DC98B50F3CCB1(::UnityEngine::EventSystems::PointerEventData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_2E2DC98B50F3CCB1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AB77F47AC22558FB(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_AB77F47AC22558FB_OFFSET))(this, a1);
	}

	::System::Single Method_2_EDACF3D84F32DDEF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_EDACF3D84F32DDEF_OFFSET))(this);
	}

	::System::Single Method_2_EDACF3D84F32DDEF_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_EDACF3D84F32DDEF_1_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::System::Boolean Method_2_C7AB8A576F610C37(::MoleMole::InputActionEvent a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_C7AB8A576F610C37_OFFSET))(this, a1);
	}

	::System::Void Method_2_63A69CCD16DEECED(::Foundation::AssetPath a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_63A69CCD16DEECED_OFFSET))(this, a1);
	}

	::System::Single Method_2_EDACF3D84F32DDEF_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_EDACF3D84F32DDEF_2_OFFSET))(this);
	}

	::System::Single Method_2_EDACF3D84F32DDEF_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_EDACF3D84F32DDEF_3_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_FF7B2911BBACA4A9_2_OFFSET))(this);
	}

	::System::Void Method_2_1BC72208CAFF7D4E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_1BC72208CAFF7D4E_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Boolean Method_2_2A829551B42C81EF(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_2A829551B42C81EF_OFFSET))(this, a1);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_A5B6063FFC26FC8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_A5B6063FFC26FC8F_OFFSET))(this);
	}

	::System::Single Method_2_EDACF3D84F32DDEF_4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_EDACF3D84F32DDEF_4_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_65BB8F0F1E258993(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_65BB8F0F1E258993_OFFSET))(this, a1);
	}

	::System::Single Method_2_EDACF3D84F32DDEF_5()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_EDACF3D84F32DDEF_5_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_FF7B2911BBACA4A9_3_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9_4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_FF7B2911BBACA4A9_4_OFFSET))(this);
	}

	::Struct_2_6188FB36C2269853 Method_2_551D1813B33CFC79(::System::Single a1, ::System::Single a2, ::UnityEngine::Vector2 a3, ::MoleMole::Cameras::TacticalCombatCameraConfig* a4)
	{
		return ((::Struct_2_6188FB36C2269853(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_551D1813B33CFC79_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_15E27781A1522662(::MoleMole::InputActionEvent a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_15E27781A1522662_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_86D95124687A23B0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_86D95124687A23B0*))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Single Method_2_FF7B2911BBACA4A9_5()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_FF7B2911BBACA4A9_5_OFFSET))(this);
	}

	::System::Boolean Method_2_30E89B400FB8C9D5(::MoleMole::InputActionEvent a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + CLASS_2_F89977FC983372BB_METHOD_2_30E89B400FB8C9D5_OFFSET))(this, a1);
	}
};
