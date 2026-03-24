#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_0389E20EE68DEFB0.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;

#define CLASS_1_0BCE4BE98C879308_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xD670490)
#define CLASS_1_0BCE4BE98C879308_FROMFLX_OFFSET UNITYSDK_OFFSET(0xD6702D0)
#define CLASS_1_0BCE4BE98C879308_METHOD_1_3DFFEA8885EDBFF0_OFFSET UNITYSDK_OFFSET(0xD670260)
#define CLASS_1_0BCE4BE98C879308_METHOD_1_5C90761F2864F0A3_OFFSET UNITYSDK_OFFSET(0xD6705A0)
#define CLASS_1_0BCE4BE98C879308_METHOD_1_8C36CE7F2750DC91_OFFSET UNITYSDK_OFFSET(0xD670410)
#define CLASS_1_0BCE4BE98C879308__CTOR_OFFSET UNITYSDK_OFFSET(0xD670610)

inline static constexpr unsigned int Class_1_0BCE4BE98C879308_TypeDefinitionIndex = 39350;

class Class_1_0BCE4BE98C879308 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BCE4BE98C879308__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_3DFFEA8885EDBFF0(::Struct_2_0389E20EE68DEFB0& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_0389E20EE68DEFB0&))((::PBYTE)hIl2Cpp + CLASS_1_0BCE4BE98C879308_METHOD_1_3DFFEA8885EDBFF0_OFFSET))(this, a1);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_0BCE4BE98C879308_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0BCE4BE98C879308_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8C36CE7F2750DC91(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_0BCE4BE98C879308_METHOD_1_8C36CE7F2750DC91_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5C90761F2864F0A3(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0BCE4BE98C879308_METHOD_1_5C90761F2864F0A3_OFFSET))(this, a1, a2);
	}
};
