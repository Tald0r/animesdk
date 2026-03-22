#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_09F02986DA8A94B8.h"
#include "unitysdk/Enum_3_527B06155233FF65.h"
#include "unitysdk/Enum_3_57AE0CBA3633C46D.h"
#include "unitysdk/Enum_3_5DA9605B47485C09.h"
#include "unitysdk/Enum_3_99176E6BE04C36F5_2.h"
#include "unitysdk/Enum_3_A1F38F7381E026F5.h"
#include "unitysdk/Enum_3_C98676A27FDCAE9F.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigAnimationCurve.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/Struct_2_7734F33592BF49F6_4.h"

class Class_0_16E4307DCC419505_134;
class Class_1_236FD73ABC492E3F;
namespace MoleMole::Battle { class CurveMoveComponent_Config; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x8A0B3F0)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x8A0AB90)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x8A08950)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_1454625925CA73F5_OFFSET UNITYSDK_OFFSET(0x8A07DD0)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x8A07BA0)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_63295608ED465DDB_OFFSET UNITYSDK_OFFSET(0x8A0BCB0)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_7F730F01AB631330_OFFSET UNITYSDK_OFFSET(0x8A0B8F0)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_895E6BF2EDCD95D0_OFFSET UNITYSDK_OFFSET(0x8A0BA40)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_993A24B415B41A1C_OFFSET UNITYSDK_OFFSET(0x8A089D0)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_9C6800D51DFEDFEB_OFFSET UNITYSDK_OFFSET(0x8A0BB50)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_B1FCFA7C1C5829AA_OFFSET UNITYSDK_OFFSET(0x8A07AC0)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x8A07CA0)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x8A0BAE0)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_D4C622081FDDE47E_OFFSET UNITYSDK_OFFSET(0x8A0ABF0)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x8A0BAD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSplineMoveTrait_TypeDefinitionIndex = 69160;

	class ConfigSplineMoveTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* DefaultSplineName; // 0x10
		::Enum_3_527B06155233FF65 SplineSpace; // 0x18
		::Enum_3_57AE0CBA3633C46D SplineMoveMode; // 0x1C
		::Enum_3_A1F38F7381E026F5 SplineMoveSpeedMode; // 0x20
		::Enum_3_09F02986DA8A94B8 SplineRotateMode; // 0x24
		::System::Single Speed; // 0x28
		::System::Single SpeedUpAcc; // 0x2C
		::System::Single SpeedDownAcc; // 0x30
		::MoleMole::Config::ConfigAnimationCurve SpeedCurve; // 0x38
		::System::Single SpeedCurveTime; // 0x48
		::Enum_3_C98676A27FDCAE9F OrientationMode; // 0x4C
		::Enum_3_5DA9605B47485C09 OrientationAxis; // 0x50
		::System::Collections::Generic::List_1<::System::String*>* AutoAttachMarkNode; // 0x58
		::System::Boolean UseLogicMove; // 0x60
		::System::Boolean UseCache; // 0x61
		::System::Boolean NeedPauseWhenWipeOut; // 0x62
		::Enum_3_99176E6BE04C36F5_2 MoveDirection; // 0x64
		::System::String* startMoveSoundEvent; // 0x68
		::System::String* stopMoveSoundEvent; // 0x70
		::System::Boolean setMoveBackSound; // 0x78
		::System::String* startMoveBackSoundEvent; // 0x80
		::System::String* stopMoveBackSoundEvent; // 0x88
		::System::Boolean muteSound; // 0x90
		::System::String* EntityAttachCollider; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B1FCFA7C1C5829AA(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_B1FCFA7C1C5829AA_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_1454625925CA73F5(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_1454625925CA73F5_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		::Struct_2_7734F33592BF49F6_4 Method_2_895E6BF2EDCD95D0()
		{
			return ((::Struct_2_7734F33592BF49F6_4(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_895E6BF2EDCD95D0_OFFSET))(this);
		}

		::System::Boolean Method_2_D4C622081FDDE47E(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_D4C622081FDDE47E_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_993A24B415B41A1C(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_993A24B415B41A1C_OFFSET))(this, a1);
		}

		::MoleMole::Battle::CurveMoveComponent_Config* Method_2_7F730F01AB631330()
		{
			return ((::MoleMole::Battle::CurveMoveComponent_Config*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_7F730F01AB631330_OFFSET))(this);
		}

		static ::MoleMole::Config::ConfigSplineMoveTrait* Method_2_9C6800D51DFEDFEB(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigSplineMoveTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_9C6800D51DFEDFEB_OFFSET))(a1);
		}

		static ::MoleMole::Config::ConfigSplineMoveTrait* Method_2_63295608ED465DDB(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigSplineMoveTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_63295608ED465DDB_OFFSET))(a1, a2);
		}
	};
}
