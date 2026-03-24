#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/Struct_2_D89177B577188692.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }

#define CLASS_1_26EB854F1FFF3DBE_EQUALS_OFFSET UNITYSDK_OFFSET(0x977D170)
#define CLASS_1_26EB854F1FFF3DBE_METHOD_1_2340068C22DFE332_OFFSET UNITYSDK_OFFSET(0x977DDB0)
#define CLASS_1_26EB854F1FFF3DBE_METHOD_1_3CAB3F134E5CEF52_OFFSET UNITYSDK_OFFSET(0x977D210)
#define CLASS_1_26EB854F1FFF3DBE_METHOD_1_50852410FAD50B49_OFFSET UNITYSDK_OFFSET(0x977D200)
#define CLASS_1_26EB854F1FFF3DBE_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x977D1F0)
#define CLASS_1_26EB854F1FFF3DBE_METHOD_1_958B8E447A8DEF3F_OFFSET UNITYSDK_OFFSET(0x977D7F0)
#define CLASS_1_26EB854F1FFF3DBE_METHOD_1_AEBB6B9FF3174063_OFFSET UNITYSDK_OFFSET(0x977D540)
#define CLASS_1_26EB854F1FFF3DBE__CTOR_OFFSET UNITYSDK_OFFSET(0x977D1E0)

inline static constexpr unsigned int Class_1_26EB854F1FFF3DBE_TypeDefinitionIndex = 41299;

class Class_1_26EB854F1FFF3DBE : public ::System::Object
{
public:
	::Struct_2_D89177B577188692 Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x30
	::System::Int32 Field_1_4; // 0x34
	::System::Boolean Field_1_3; // 0x38
	::System::Boolean Field_1_2; // 0x39
	::System::Int32 Field_1_5; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26EB854F1FFF3DBE__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::Class_1_26EB854F1FFF3DBE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_26EB854F1FFF3DBE*))((::PBYTE)hIl2Cpp + CLASS_1_26EB854F1FFF3DBE_EQUALS_OFFSET))(this, a1);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26EB854F1FFF3DBE_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_1_50852410FAD50B49(::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + CLASS_1_26EB854F1FFF3DBE_METHOD_1_50852410FAD50B49_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CAB3F134E5CEF52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26EB854F1FFF3DBE_METHOD_1_3CAB3F134E5CEF52_OFFSET))(this);
	}

	::System::Void Method_1_AEBB6B9FF3174063(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_26EB854F1FFF3DBE_METHOD_1_AEBB6B9FF3174063_OFFSET))(this, a1);
	}

	::System::Void Method_1_958B8E447A8DEF3F(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_26EB854F1FFF3DBE_METHOD_1_958B8E447A8DEF3F_OFFSET))(this, a1);
	}

	::System::Void Method_1_2340068C22DFE332()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26EB854F1FFF3DBE_METHOD_1_2340068C22DFE332_OFFSET))(this);
	}
};
