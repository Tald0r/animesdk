#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;

#define CLASS_1_F71087F8ABFB27A0_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x84CF130)
#define CLASS_1_F71087F8ABFB27A0_FROMFLX_OFFSET UNITYSDK_OFFSET(0x84CEC40)
#define CLASS_1_F71087F8ABFB27A0_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x84CECC0)
#define CLASS_1_F71087F8ABFB27A0_METHOD_1_591F73C1C45E9D80_OFFSET UNITYSDK_OFFSET(0x84CF190)
#define CLASS_1_F71087F8ABFB27A0__CTOR_OFFSET UNITYSDK_OFFSET(0x84CF370)

inline static constexpr unsigned int Class_1_F71087F8ABFB27A0_TypeDefinitionIndex = 50135;

class Class_1_F71087F8ABFB27A0 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x14
	::System::Single Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F71087F8ABFB27A0__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_F71087F8ABFB27A0_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F71087F8ABFB27A0_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_F71087F8ABFB27A0_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_591F73C1C45E9D80(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F71087F8ABFB27A0_METHOD_1_591F73C1C45E9D80_OFFSET))(this, a1, a2);
	}
};
