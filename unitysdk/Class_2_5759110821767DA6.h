#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0BCE4BE98C879308_1.h"
#include "unitysdk/Enum_3_AD01CC4683F4B718.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_0389E20EE68DEFB0.h"

class Class_1_236FD73ABC492E3F;
class Class_2_4521B631ACA75155;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5759110821767DA6_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x8A64800)
#define CLASS_2_5759110821767DA6_FROMFLX_OFFSET UNITYSDK_OFFSET(0x8A64470)
#define CLASS_2_5759110821767DA6_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x8A648D0)
#define CLASS_2_5759110821767DA6_METHOD_2_2BA40F99980FE761_OFFSET UNITYSDK_OFFSET(0x8A64340)
#define CLASS_2_5759110821767DA6_METHOD_2_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x8A64560)
#define CLASS_2_5759110821767DA6_METHOD_2_DB5F3C72DB91D658_OFFSET UNITYSDK_OFFSET(0x8A64B20)
#define CLASS_2_5759110821767DA6__CTOR_OFFSET UNITYSDK_OFFSET(0x8A64B10)

inline static constexpr unsigned int Class_2_5759110821767DA6_TypeDefinitionIndex = 51487;

class Class_2_5759110821767DA6 : public ::Class_1_0BCE4BE98C879308_1
{
public:
	::System::Collections::Generic::List_1<::Class_2_4521B631ACA75155*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5759110821767DA6__CTOR_OFFSET))(this);
	}

	::Enum_3_AD01CC4683F4B718 Method_2_2BA40F99980FE761(::Struct_2_0389E20EE68DEFB0& a1)
	{
		return ((::Enum_3_AD01CC4683F4B718(*)(::PVOID, ::Struct_2_0389E20EE68DEFB0&))((::PBYTE)hIl2Cpp + CLASS_2_5759110821767DA6_METHOD_2_2BA40F99980FE761_OFFSET))(this, a1);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_5759110821767DA6_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5759110821767DA6_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_5759110821767DA6_METHOD_2_5B0202969299569F_OFFSET))(this, a1);
	}

	::Enum_3_AD01CC4683F4B718 Method_2_DB5F3C72DB91D658(::Struct_2_0389E20EE68DEFB0& a1)
	{
		return ((::Enum_3_AD01CC4683F4B718(*)(::PVOID, ::Struct_2_0389E20EE68DEFB0&))((::PBYTE)hIl2Cpp + CLASS_2_5759110821767DA6_METHOD_2_DB5F3C72DB91D658_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5759110821767DA6_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
	}
};
