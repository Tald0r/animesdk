#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_30FE1CE5A1C958A6.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_273278230A48923F;
namespace MoleMole { class MonoRawImageBasedCurve; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_MONOONSCREENLOGGER_CLEARCURVE_OFFSET UNITYSDK_OFFSET(0xA650AF0)
#define MOLEMOLE_MONOONSCREENLOGGER_ISDRAWING_OFFSET UNITYSDK_OFFSET(0xA6509D0)
#define MOLEMOLE_MONOONSCREENLOGGER_METHOD_5_012ED2CBCD67557A_OFFSET UNITYSDK_OFFSET(0xA650B90)
#define MOLEMOLE_MONOONSCREENLOGGER_METHOD_5_35D8A1FE53B06D5C_OFFSET UNITYSDK_OFFSET(0xA650C20)
#define MOLEMOLE_MONOONSCREENLOGGER_METHOD_5_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0xA650E50)
#define MOLEMOLE_MONOONSCREENLOGGER_METHOD_5_92193DE475EFDCC9_OFFSET UNITYSDK_OFFSET(0xA651280)
#define MOLEMOLE_MONOONSCREENLOGGER_METHOD_5_B98E1DF7C6A97151_OFFSET UNITYSDK_OFFSET(0xA651200)
#define MOLEMOLE_MONOONSCREENLOGGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA650850)
#define MOLEMOLE_MONOONSCREENLOGGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA6506D0)
#define MOLEMOLE_MONOONSCREENLOGGER_START_OFFSET UNITYSDK_OFFSET(0xA6504E0)
#define MOLEMOLE_MONOONSCREENLOGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA650B70)

namespace MoleMole
{
	inline static constexpr unsigned int MonoOnScreenLogger_TypeDefinitionIndex = 77777;

	class MonoOnScreenLogger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Text* Field_5_0; // 0x18
		::MoleMole::MonoRawImageBasedCurve* Field_5_1; // 0x20
		::MoleMole::MonoRawImageBasedCurve* Field_5_2; // 0x28
		::System::Func_2<::Class_1_273278230A48923F*, ::System::Boolean>* Field_5_3; // 0x30
		::System::Func_2<::Class_1_273278230A48923F*, ::System::Boolean>* Field_5_4; // 0x38
		::System::Boolean disableScreenLog; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONSCREENLOGGER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONSCREENLOGGER_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONSCREENLOGGER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONSCREENLOGGER_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean IsDrawing(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONSCREENLOGGER_ISDRAWING_OFFSET))(this, a1);
		}

		::System::Void ClearCurve(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONSCREENLOGGER_CLEARCURVE_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_012ED2CBCD67557A(::System::Int32 a1, ::MoleMole::MonoRawImageBasedCurve*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::MonoRawImageBasedCurve*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONSCREENLOGGER_METHOD_5_012ED2CBCD67557A_OFFSET))(this, a1, a2);
		}

		static ::System::Void Method_5_35D8A1FE53B06D5C(::System::Func_2<::Class_1_273278230A48923F*, ::System::Boolean>*& a1, ::MoleMole::MonoRawImageBasedCurve* a2)
		{
			return ((::System::Void(*)(::System::Func_2<::Class_1_273278230A48923F*, ::System::Boolean>*&, ::MoleMole::MonoRawImageBasedCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONSCREENLOGGER_METHOD_5_35D8A1FE53B06D5C_OFFSET))(a1, a2);
		}

		::System::Void Method_5_464B80C09A37526F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONSCREENLOGGER_METHOD_5_464B80C09A37526F_OFFSET))(this);
		}

		::System::Void Method_5_B98E1DF7C6A97151(::System::Int32 a1, ::System::Func_2<::Class_1_273278230A48923F*, ::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Func_2<::Class_1_273278230A48923F*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONSCREENLOGGER_METHOD_5_B98E1DF7C6A97151_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_92193DE475EFDCC9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONSCREENLOGGER_METHOD_5_92193DE475EFDCC9_OFFSET))(this, a1);
		}
	};
}
