#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_327797156B716E98.h"
#include "unitysdk/Enum_3_8252736F97D4CFA3_2.h"
#include "unitysdk/Enum_3_D9B1609F715078CB.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_D16CCEE747C194BE;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class MonoUIMover; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOUIMOVERMODE_AWAKE_OFFSET UNITYSDK_OFFSET(0xA52DC90)
#define MOLEMOLE_MONOUIMOVERMODE_CLEARHANDLER_OFFSET UNITYSDK_OFFSET(0xA52E230)
#define MOLEMOLE_MONOUIMOVERMODE_METHOD_5_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0xA52E700)
#define MOLEMOLE_MONOUIMOVERMODE_METHOD_5_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0xA52E490)
#define MOLEMOLE_MONOUIMOVERMODE_METHOD_5_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xA52E2E0)
#define MOLEMOLE_MONOUIMOVERMODE_METHOD_5_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0xA52E670)
#define MOLEMOLE_MONOUIMOVERMODE_METHOD_5_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0xA52DE70)
#define MOLEMOLE_MONOUIMOVERMODE_METHOD_5_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0xA52EA10)
#define MOLEMOLE_MONOUIMOVERMODE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA52DEE0)
#define MOLEMOLE_MONOUIMOVERMODE_SETMOVETYPE_OFFSET UNITYSDK_OFFSET(0xA52E090)
#define MOLEMOLE_MONOUIMOVERMODE_SETPINGPONGTYPE_OFFSET UNITYSDK_OFFSET(0xA52E160)
#define MOLEMOLE_MONOUIMOVERMODE_STOPMOVE_OFFSET UNITYSDK_OFFSET(0xA52DF60)
#define MOLEMOLE_MONOUIMOVERMODE__CTOR_OFFSET UNITYSDK_OFFSET(0xA52E2B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIMoverMode_TypeDefinitionIndex = 76470;

	class MonoUIMoverMode : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* moveArea; // 0x18
		::Enum_3_D9B1609F715078CB moveMode; // 0x20
		::Enum_3_8252736F97D4CFA3_2 modePingPongDirection; // 0x24
		::Enum_3_327797156B716E98 pingPongTurn; // 0x28
		::System::Single turnTime; // 0x2C
		::UnityEngine::RectTransform* replaceReversalScaleTarget; // 0x30
		::UnityEngine::RectTransform* Field_5_6; // 0x38
		::MoleMole::MonoUIMover* Field_5_7; // 0x40
		::System::Boolean Field_5_8; // 0x48
		::UnityEngine::Vector2 Field_5_9; // 0x4C
		::UnityEngine::Vector2 Field_5_10; // 0x54
		::Class_1_D16CCEE747C194BE* Field_5_11; // 0x60
		::DG::Tweening::Tween* Field_5_12; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetMoveType(::Enum_3_D9B1609F715078CB a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_D9B1609F715078CB))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_SETMOVETYPE_OFFSET))(this, a1);
		}

		::System::Void SetPingPongType(::Enum_3_8252736F97D4CFA3_2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_8252736F97D4CFA3_2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_SETPINGPONGTYPE_OFFSET))(this, a1);
		}

		::System::Void StopMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_STOPMOVE_OFFSET))(this);
		}

		::System::Void ClearHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_CLEARHANDLER_OFFSET))(this);
		}

		::System::Void Method_5_805C56F44231AEF9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_METHOD_5_805C56F44231AEF9_OFFSET))(this);
		}

		::System::Void Method_5_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_METHOD_5_41A074549EF25F63_OFFSET))(this);
		}

		::System::Void Method_5_21886A8411E71157()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_METHOD_5_21886A8411E71157_OFFSET))(this);
		}

		::System::Void Method_5_52607DE4C357D269()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_METHOD_5_52607DE4C357D269_OFFSET))(this);
		}

		::System::Void Method_5_2045BA2947DBDBCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_METHOD_5_2045BA2947DBDBCE_OFFSET))(this);
		}

		::System::Void Method_5_DF2A78D8DB25ED05()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_METHOD_5_DF2A78D8DB25ED05_OFFSET))(this);
		}
	};
}
